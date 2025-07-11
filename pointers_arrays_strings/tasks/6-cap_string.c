/**
 * is_seprator - check for seprator
 * Description: checks for speical chars
 * @c: Any Assci character
 * Return: 1 if match 0 otherwise
 */
int is_seprator(char c)
{
	int i;
	char sep[14] = {'\t', '\n', ',', ';', '.', '!', '?', '\"', '(', ')', '{', '}'};

	for (i = 0; i < 14; i++)
	{
		if (c == sep[i])
		{
			return (1);
		}
	}
	return (0);
}
/**
 * cap_string - turn letters to Caps
 * Description: turn letters after sep into caps
 * @string: Any sentence(s)
 * Return: Captilized string(s)
 */
char *cap_string(char *string)
{
	int i;
	/*Check for the characters in string*/
	for (i = 0; string[i] != '\0'; i++)
	{
		/* Check if the character is seprator*/
		if (is_seprator(string[i]) == 1)
		{
			if (string[i] == '\t')
			{
				string[i] = ' ';
			}
			i++;
			if (string[i] >= 'a' && string[i] <= 'z')
			{
				string[i] = string[i] - 32;
			}
		}
	}
	return (string);
}

