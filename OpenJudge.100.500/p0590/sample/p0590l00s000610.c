#include <stdio.h>

int main(){
	int z[5];
	int k;
	int i,j;
	int yay=0;
	
	for(i=0;i<5;i++)	scanf("%d",&z[i]);
	scanf("%d",&k);
	
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(z[j]-z[i]>k){
				yay=1;
				break;
			}
		}
	}
	
	if(yay==1)	printf(":(");
	else	printf("Yay!");
	
	return 0;
}