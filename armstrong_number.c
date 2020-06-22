//C program to check if the entered number is armstrong number or not
#include <stdio.h>
int main(int argc, char const *argv[])
{
    static int num, call, t, r, a;
    printf("enter the number:\n");
    scanf("%d", &num);
    call=fun1(num);
    a=num;
    while(num!=0)
                {
                r=num%10;
                t=power(r, call)+t;
                num=num/10;
                }
                if(t==a)
                 printf("the number is armstrong"); 
                 else 
                 printf("the number is not armstrong");  
    
    return 0;
}
fun1(int r)
{   
    static int rem, sum=0, u;
    if (r)
        {
            u=u-1;
              rem=r%10;
    sum=sum*10+rem;
    r=r/10;
    fun1(r);
        }    
 
    if (r==0)
    {
         return (u*-1);  
     }     
}
 power(int r, int call)
    {
      int i, b;
     b=r;
    
    for (int i = 1; i < call; ++i)
    {
        r=r*b;
    }
    return r;
}
