#include "lists.h"
#include <stdlib.h>
#include <string.h>
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    unsigned int i;
    
    i = 0;
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
    {
        return (NULL);
    }
    while (str[i] != '\0')
    {
        i++;
    }
    new_node->str = strdup(str);
    new_node->len = i;
    new_node->next = *head;
    return (new_node);
}