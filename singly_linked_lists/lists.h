#ifndef _SAMPLE_HEADER_H_
#define _SAMPLE_HEADER_H_
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
#include <stddef.h>
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif /* _SAMPLE_HEADER_H_ */
