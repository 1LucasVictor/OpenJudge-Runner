#include<stdio.h>

int main(){
	int i,min_i,min=10001,max_i,max=0,io[3];
	scanf("%d %d %d",&io[0],&io[1],&io[2]);
	for(i=0;i<3;i++){
		if(io[i]<=min){
			min=io[i];
			min_i=i;
		}
	}
	for(i=0;i<3;i++){
		if(io[i]>=max){
			max=io[i];
			max_i=i;
		}
	}
	printf("%d %d %d\n", min, (min_i+max_i==1) ? io[2] : (min_i+max_i==2) ? io[1]:io[0], max);
    return 0;
}