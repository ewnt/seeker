//C program to display array elements by two pointer funtion call
main( )
{  

int  i ;  
int  marks[ ] = { 55, 65, 75, 56, 78, 78, 90 } ; 
 
 for ( i = 0 ; i <= 6 ; i++ )   
    disp( &marks[i] ) ;
} 
 
disp ( int  *n )
{  
    show ( &n ) ; 
}
show(int **r) 
{
    printf(" %d ", **r); ;
} 
