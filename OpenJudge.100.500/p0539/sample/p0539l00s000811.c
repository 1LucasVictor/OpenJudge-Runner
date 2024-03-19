#include <stdio.h>
int main(){
	int n;
	int confira=0;
	scanf("%d",&n);
	for(int i=1;i<10;i++){
		if(n>81)
			break;
		for(int j=1;j<10;j++){
			if(i*j == n){
				printf("Yes\n");
				confira=1;
				break;
			}
			if(confira==1)
				break;
		}
	}
	if(confira==0)
		printf("No\n");
	return 0;
}