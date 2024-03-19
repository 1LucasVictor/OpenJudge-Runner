#include<stdio.h>
void main()
{
int n,c,i,j,s=0;
scanf("%d",&n);
scanf("%d",&c);
  i=0;
  j=n;
while(i<=n && j>=0)
{
	s = 2*i+4*j;
  	if(s==c){
      printf("Yes");
  	break;
      
    }
  i++;
  j--;
}
if(i>n)
  printf("No");
}
