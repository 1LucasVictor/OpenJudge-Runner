#include <stdio.h>
int Prime(int p){
	int i;
	for(i=2;i*i<=p;i++){
		if(p%i==0){
			return 0;
		}
	}
	return 1;
}
int main(void) {
	int n,i,k=0,j;
	while(scanf("%d",&n)!=EOF){
		while(n>1){
			if(Prime(n)){
				k++;
			}
			n--;
		}
		printf("%d\n",k);
		k=0;
	}
	return 0;
}
