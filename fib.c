#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, i;
    printf("enter the number:\n");
    scanf("%d", &num);
    printf("the fib numbers are");
    for (int i = 0; i < num; ++i)
    {
        printf(" %d ", fib(i));
    }
    return 0;
}

fib(int i)
{             static int a=-1, b=1, next;
              next=a+b;
              a=b;
              b=next;
           
 return next;    
}
