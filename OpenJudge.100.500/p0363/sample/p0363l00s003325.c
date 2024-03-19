#include<stdio.h>

int main(){
	int i,j,min_i,min=10001,max_j,max=0,io[3];
	scanf("%d %d %d",&io[0],&io[1],&io[2]);
	for(i=0;i<3;i++){
		if(io[i]<min){
			min=io[i];
			min_i=i;
		}
	}
	for(j=0;j<3;j++){
		if(io[j]>max){
			max=io[j];
			max_j=j;
		}
	}
	printf("%d %d %d\n", min, (min_i+max_j==1) ? io[2] : (i+j==2) ? io[1]:io[0], max);
    return 0;
}