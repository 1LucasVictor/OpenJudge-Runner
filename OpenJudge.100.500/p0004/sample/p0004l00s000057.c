#include<stdio.h>

int main(){
	long n[2];
	long i, j, x, y;
	while(scanf("%d %d",&n[0],&n[1])!=EOF){
		for(i=1;;i++){
			x = n[0]*i;
			if(x%n[1]==0){
				break;
			}
		}
		for(j=1;;j++){
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