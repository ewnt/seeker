//program to check if a number is a prime number or not
int main(int argc, char const *argv[])
{
	static int x, c=0, m, y, h;
	printf("enter any num:\n");
	scanf("%d", &x);
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
		printf("the number is a prime number");
	}
	else
		printf("the number is a not a prime number");
	return 0;
}
