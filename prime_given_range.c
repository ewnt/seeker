//C program to find the Prime numbers in a given range
int main(int argc, char const *argv[])
{
    static int x, a, c=0, m, i, h;
    printf("enter the first range\n");
    scanf("%d", &a);
    printf("enter the maximum range\n");
    scanf("%d", &i);
    for (int x = a; x < i; ++x)
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
