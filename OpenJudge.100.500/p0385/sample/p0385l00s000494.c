
#include<stdio.h>
#define MAX 1000
int main(){
	int i=0,j,n,sum;
		while(1){
			sum=0;
			scanf("%d", &n);
			if(n ==0){break;}
			while(n!=0){
				sum += n%10;
				n = n/10;
			}
			printf("%d\n", sum);
		}
	return 0;
}