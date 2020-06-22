//C program to check the power of a number by function call.
int main(int argc, char const *argv[])
{
    static int r, call;
    printf("enter the base number:\n");
    scanf("%d", &r);
    printf("enter the power:\n");
    scanf("%d", &call);
    printf("the power is: %d", power(r, call));

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
