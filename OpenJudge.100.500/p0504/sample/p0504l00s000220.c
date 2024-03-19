#include<stdio.h>
int main()
{
long int a,b;
scanf("%ld %ld",&a,&b);
if(a%b==0)  printf("%ld",a/b);
else printf("%ld",a/b+1);
return 0;
}