//program to find the factorial of a number
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int x;
    printf("enter the number\n");
    scanf("%d", &x);
    printf("the factorial of %d is %d", x, fact(x));
    return 0;
}
fact(x)
{
  static int f, y;
  if (x==1 || x==0)
  {
      return 1;
  }
  return(x*fact(x-1));
}
