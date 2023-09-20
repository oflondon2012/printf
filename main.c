#include <limits.h>
#include <stdio.h>
#include "main.h"
															    
															    /**
															     *  * main - Entry point
															     *   *
															     *    * Return: Always 0
															     *     */
int main(void)
{
        char let = 'a';
        int rvalue, rvalue2;
        char name[] = "Gbenga Adebayo";

      /* Using print f */
        puts("\nUsing printf()\n---");
        rvalue = printf("%s is %c man\n", name, let);
        printf("return value is %d\n", rvalue);

        puts("\n------------------");
        puts("\nUsing my own printf()\n---");
        rvalue2 = _printf("%s is %c man\n", name);
  	printf("return value is %d\n", rvalue2);
	return (0);
}
