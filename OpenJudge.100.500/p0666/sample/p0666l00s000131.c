#include <stdio.h>
int main(int argc, char *argv[])
{    int a,b,c;
     scanf("%d%d%d",&a,&b,&c);
     if(a==b+c)
     printf("delicious");
     else if(c-b>a)
     printf("dangerous");
     else if(c<=b-a)
     printf("safe");
     else 
     printf("safe");
	  
	
	return 0;
}