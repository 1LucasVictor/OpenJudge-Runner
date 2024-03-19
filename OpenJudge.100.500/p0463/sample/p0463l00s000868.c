#include<stdio.h> 
int main(){
	int x;
	scanf("%d",&x);
	x=x%10;
	if(x==3){
		printf("bon\n");		
	} else if(x==0 || x==1 ||x==6||x==8){
		printf("pon\n");
	} else{
		printf("hon\n"); 
	} 
	return 0;
}