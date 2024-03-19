#include<stdio.h>
int main(void){
	int i,j,z;
	scanf("%d%d",&i,&j);
	int dat[j-1];
	if(i==0){
		for(z=0;z<j;z++){
			dat[z]=z+1;
		}
	}
	if(i==1){
		for(z=1;z<j+1;z++){
			dat[z-1]=z*100;
		}
	}
	if(i==2){
		for(z=1;z<j+1;z++){
			dat[z-1]=z*10000;
		}
	}
	printf("%d",dat[j-1]);
	return 0;
}