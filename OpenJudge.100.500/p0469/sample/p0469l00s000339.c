#include <stdio.h>


int main(){
	int k,a,b;
	int flag = 0;
	scanf("%d",&k);
	scanf("%d %d",&a,&b);
		for(int i=a;i<=b;i++){
			if(i%k==0){
				flag = 1;
			}
		}
		flag== 1 ? puts("OK") : puts("NG");

	return 0;
}