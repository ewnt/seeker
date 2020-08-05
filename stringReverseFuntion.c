//C program to reverse a string using funtion call
#include <stdio.h>
#include <string.h>
 char reverse(char compiler[99] ) {
    // printf() displays the string inside quotation
    int i;
    
    for(i=0; i<(strlen(compiler)); i++)
    {
        printf("%c", *((compiler+strlen(compiler)-1)-i));
    }
    return 0;
}
char main()
{
    char compiler_1[]="top paying companies for software engineers";
    reverse(compiler_1);
    
}
