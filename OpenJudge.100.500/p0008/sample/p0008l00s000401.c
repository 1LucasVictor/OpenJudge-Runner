#include<stdio.h>

int prime_judge(int a){
	int i,j;
	int flag;
	int count=0;
	for(i=2;i<=a;++i){
		flag=0;
		for(j=2;j<i;++j){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0)
		count++;
	}
	return count;
}

int main(void){
	int n;
	while(scanf("%d",&n)!=EOF){
		printf("%d\n",prime_judge(n));
	}
	return 0;
}