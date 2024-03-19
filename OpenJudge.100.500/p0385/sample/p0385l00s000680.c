#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define N 13

int main(){
	while(1){
                int n=0;
		scanf("%d",&n);
		if(n==0){break;}
		int a[1000];
		int sum=0;
		for(int i=0;i<1000;i++){
			a[i]=n%10;
			n=n/10;
			sum+=a[i];
		}
		printf("%d\n",sum);
	}
}
