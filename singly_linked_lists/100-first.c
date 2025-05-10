#include <stdio.h>
void startupFunction(void) __attribute__ ((constructor));

/* implementation of startupFunction*/
   void startupFunction(void)
    {
        printf ("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
    }
