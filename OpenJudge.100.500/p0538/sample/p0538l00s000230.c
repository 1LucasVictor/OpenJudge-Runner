#include<stdio.h>
int main()
{
	int n,m;
	while(~scanf("%d%d",&n,&m)){
		if(n>=10||m>=10){
			printf("-1\n");
		}else if(n<10&&m<10){
			printf("%d\n",n*m);
		}
	}
}