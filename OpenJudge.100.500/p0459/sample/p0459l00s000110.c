#include<stdio.h>
int main()
{
    //int A,B,C,D,E;
    int X,Y;
    scanf("%d %d", &X, &Y);
    for(int i; i<=X; i++)
    {
      
    if((i*2)+(X-i)*4==Y)
    {
    	printf("Yes");
        return(0);
    }
      
    }
  	printf("No");
}