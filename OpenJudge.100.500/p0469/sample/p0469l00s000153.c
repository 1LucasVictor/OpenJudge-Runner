#include <stdio.h>

int main(){
	int k, a, b, i, len, flag=0;
	
	scanf("%d %d %d", &k, &a, &b);
	
	len=b/k;
	
	for(i=1; i<=len; i++){
		if(k*i>=a&&k*i<=b);{
			flag=1;
		}
	}
	
	if(flag==1){
		printf("OK");
	}else if(flag==0){
		printf("NG");
	}
	
	return 0;
}