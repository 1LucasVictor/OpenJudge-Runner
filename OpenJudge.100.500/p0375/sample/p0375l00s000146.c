#include<stdio.h>
int main(){
int n,i,x;
scanf("%d\n",&n);
for(i=1;i<=n;i++){
	if((i%3)==0 || (i%10)==3 || (i/100)%3==3 || (i/1000)%3==3 || (i/10000)%3==3){
		printf(" %d",i);
	}
}
printf("\n");
return 0;
}