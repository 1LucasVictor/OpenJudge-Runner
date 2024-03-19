#include<stdio.h>

int main(){
	int n, result;
	int i, j, flag;
	while(scanf("%d",&n)!=EOF){
		result=0;
		if(n>=2) result++;
		for(i=3;i<=n;i+=2){
			flag=0;
			if(i%2==0){
				continue;
			}
			for(j=3;j<i/2;j+=2){
				if(i%j==0){
					flag++;
					break;
				}
			}
			if(flag==0){
				result++;
			}
		}
		printf("%d\n",result);
	}
	return 0;
}