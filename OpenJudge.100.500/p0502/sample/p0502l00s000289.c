#include<stdio.h>
main(void)
{
	int n,a,flag=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		if((flag==1)&&(a%2==0)){
			if((a%3!=0)&&(a%5!=0))flag=0;
		}
	}
	if(flag==0)printf("DENIED\n");
	else printf("APPROVED\n");		
}