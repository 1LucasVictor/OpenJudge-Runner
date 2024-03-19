#include <stdio.h>

int judge(int num){
	int i;
	for(i=2;i<num;i++){
		if(i*i > num)
			return 0;
		if(num % i == 0)
			return 1;
	}
	return 0;
}

int main(void){
	int n,i,sum=0;
	int  a;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(judge(a) == 0)
			sum++;
	}
printf("%d\n",sum);
return 0;
}