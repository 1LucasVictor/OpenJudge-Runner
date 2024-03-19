#include<stdio.h>
int main(void)
{
	int n;
	int i,j;
	int a=0;
	int count;
	while(1){
		if((scanf("%d",&n))!=EOF){
			count=1;
			for(i=3;i<=n;i++){
				for(j=i-1;j>=2;j--){
					if(i%j==0) a+=1;
					else a+=0;
				}
				if(a==0)count++;
				a=0;
			}
			printf("%d\n",count);
		}
		else break;
	}
	return 0;
}