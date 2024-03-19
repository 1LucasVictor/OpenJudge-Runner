#include<stdio.h>

int main(){
	int num, n[3];
	int i, j, max, sum;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		if(scanf("%d %d %d",&n[0],&n[1],&n[2])==EOF){
			break;
		}
		max = 0;
		sum = 0;
		for(j=0;j<3;j++){
			if(max<n[j]){
				max = n[j];
			}
			sum += n[j]*n[j];
		}
		if(sum==(max*max)*2){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}