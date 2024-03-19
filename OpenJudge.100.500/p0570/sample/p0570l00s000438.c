#include <stdio.h>
int main(){
	long int A,B,ans;
	scanf("%ld%ld",&A,&B);
	if((A+B)%2==0&&(A+B)>0){
		ans=(A+B)/2;
	}
	printf("%ld",ans);
	
	
}