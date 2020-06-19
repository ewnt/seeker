//program to find the number of digits in number up to ten digits
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num, call;
    printf("enter the number:\n");
    scanf("%d", &num);
    call=fun1(num);
    printf("the number of digits are: %d", fun1()*-1);
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
         return u;  
     }
       
        
}
