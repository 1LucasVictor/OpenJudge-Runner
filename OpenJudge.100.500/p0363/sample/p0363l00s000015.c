#include<stdio.h>

int main(){
	int i,j;
	int num[3];
	int tmp;
	
	scanf("%d%d%d",&num[0],&num[1],&num[2]);
	
	for(i=0;i<3;i++){
		for(j=i+1;j<3;j++){
			if(num[i]>num[j]){
				tmp=num[i];
				num[i]=num[j];
				num[j]=tmp;
			}
		}
	}
	
	printf("%d %d %d\n",num[0],num[1],num[2]);
	
	return 0;
}