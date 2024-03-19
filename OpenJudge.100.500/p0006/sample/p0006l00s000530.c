#include <stdio.h>
int main(void)
{
int i,j,n,k=0;	
	
i=100000;
j=i*0.05;
scanf("%d",&n);
if(n==0){
printf("%d\n",i);
return 0;}
do{
i+=j;
if(i%1000!=0)i+1000;

k++;
}while(k<=n);
printf("%d\n",i);
return 0;
}