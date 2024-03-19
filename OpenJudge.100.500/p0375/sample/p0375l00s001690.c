#include<stdio.h>
int main(){
int n,i;
scanf("%d\n",&n);
for(i=3;i<=n;i++){
	if(i%10==3 || i%100/10==3 || i%1000/100/10==3 ||i%10000/1000/100/10==3 || i%3==0){
	printf(" %d",i);
	}
}
printf("\n");
return 0;
}