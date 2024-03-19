#include<stdio.h>

int main(){
	int car[10]={0,0,0,0,0,0,0,0,0,0};
	int a,c=0;
	
	while(~scanf("%d",&a)){
		if(a==0){
			c--;
			printf("%d\n",car[c]);
		}
		else {
			car[c]=a;
			c++;
		}
	}
	return 0;
}