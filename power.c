//C program to calculate the power of a number
int main(int argc, char const *argv[])
{
    static int i, y, b, x;
    printf("enter the base number:\n");
    scanf("%d", &x);
    printf("enter the power:\n");
    scanf("%d", &y);
     b=x;
    for (int i = 1; i < y; ++i)
    {
        x=x*b;
    }
    printf("%d to the power of %d is %d\n", b, y, x);
}
