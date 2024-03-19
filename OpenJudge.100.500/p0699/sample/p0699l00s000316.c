#include<stdio.h>

int main(void)
{
	int a,b,c;
	int i,flag=0;
	
	scanf("%d %d %d",&a,&b,&c);
	
	if( (a==5 && b==5) && c==7) flag=1;
	if( (b==5 && c==5) && a==7) flag=1;
	if( (c==5 && a==5) && b==7) flag=1;
	
	if(flag==1){
		printf("YES");
	}else{
		printf("NO");
	}
	
	return 0;
}
