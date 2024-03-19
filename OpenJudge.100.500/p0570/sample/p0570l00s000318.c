#include<stdio.h>
int main()
{
int a,b,K;

  scanf("%d %d",&a,&b);
    K=(a+b)/2;
  if((a%2==0 && b%2==0)||(a%2==1 && b%2==1))
   {
	 printf("%d",K);}
  else{printf("IMPOSSIBLE");}
}