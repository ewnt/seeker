//prime series generator by function call
#include <stdio.h>
int main(int argc, char const *argv[])
{
    static int i;
    printf("enter the range\n");
    scanf("%d", &i);
    prime(i);
    return 0;
}
prime(i)
{
    static int x, c=0, m, h;
    for (int x = 0; x < i; ++x)
    {
        while(c<=x)
    {
        c=c+1;
        m=x%c;
        if (m!=0)
        {
            h=h+1;
        }
    }
    if (h==(x-1))
    {
        printf(" %d ", x);
    }
    c=0;
    h=0;
    }
    
}
