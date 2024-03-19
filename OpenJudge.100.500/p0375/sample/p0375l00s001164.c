#include<stdio.h>
void call(int n){
	for(int i=1;i<=n;++i){
		int  x=i;
		if(x%3==0){
			printf(" %d",i);
			x=0;}
		while(x){
			if(x%10==3){
			printf(" %d",i);
			break;}
			x/=10;}}
}
int main(){
    int a;
	scanf("%d",&a);
	call(a);
	printf("\n");
	return 0;
}
