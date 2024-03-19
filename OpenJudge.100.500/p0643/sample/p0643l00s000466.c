#include<stdio.h>

int main(void)
{int a,b,c;
 
 
 scanf("%d%d",&a,&b);
 puts(a*b%2 ? "Odd" : "Even");
 return(0);
}