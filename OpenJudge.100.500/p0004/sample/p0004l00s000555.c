#include<stdio.h>

int main(){
	long n[2];
	long i, j, x, y;
	while(1){
		if(scanf("%d %d",&n[0],&n[1])==EOF){
			break;
		}
		for(i=1;100;i++){
			x = n[0]*i;
			if(x%n[1]==0){
				break;
			}
		}
		for(j=1;100;j++){
			if(n[0]%j!=0) continue;
			y = n[0]/j;
			if(n[1]%y==0){
				break;
			}
		}
		printf("%d %d\n",y,x);
	}
	return 0;
}