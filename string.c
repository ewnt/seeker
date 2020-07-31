/*C program to find the Frequency of a Character*/
main()
{
    char field[99]="Find the Frequency of a Character";
    int c,i;
    while (field[i]!='\0')
    {
        if(field[i]=='e')
        c++;
        i++;
    }
    printf("e occurred %d times totally", c);
}
