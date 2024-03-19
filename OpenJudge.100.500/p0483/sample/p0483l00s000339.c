#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int flag = 1;
	while(n>0){
		if(n%10==7){
			flag = 0;
			break;
		}
		n/=10;
	}
	if(flag) printf("No");
	else printf("Yes");
	return 0;
}