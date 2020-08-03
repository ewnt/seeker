/*C program to reverse a string using*/
#include <stdio.h>
#include <string.h>
int main() {
    // printf() displays the string inside quotation
    int i;
    char compiler[]="top paying companies for software engineers";
    char *ptr;
    ptr=compiler;
    ptr=ptr+(strlen(compiler)-1);
    for(i=0; i<(strlen(compiler)); i++)
    {
        printf("%c", *ptr--);
    }
    return 0;
}
