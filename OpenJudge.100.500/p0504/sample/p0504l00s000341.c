#include <stdio.h> 

int main()
{
  int a,b;
  scanf("%d %d", &a, &b);
  int c=a/b;
  if (a%b != 0){
  	c++;
  }
  
  	printf ("%d\n",c);
  	return 0;
  }
  