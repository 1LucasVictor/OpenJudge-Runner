#include<stdio.h>

int main(){
	int num, n[3];
	int i, j;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		if(scanf("%d %d %d",&n[0],&n[1],&n[2])==EOF){
			break;
		}
		j = (n[0]^2) + (n[1]^2);
		if(j==(n[2]^2)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}