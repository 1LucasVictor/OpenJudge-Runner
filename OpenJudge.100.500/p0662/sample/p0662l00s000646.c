#include<stdio.h>
int main()
{
	int a,b,c,d;	
	
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a<b&&c<d)
  { 
	if(b<c)
	 {
	 	int i=0;
	 	printf("%d\n",i);
	 }
	else if(b<d)
	 {
	 	printf("%d\n",b-c);
	 } 
	else
	 {
	 	printf("%d\n",d-c);
	 } 
  }
	return 0;
}