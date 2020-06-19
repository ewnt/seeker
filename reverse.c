//program to reverse a number 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, call;
    printf("enter the number:\n");
    scanf("%d", &num);
    call=fun1(num);
    printf("the reverse number is: %d", fun1());
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
         return sum;  
     }
       
        
}
