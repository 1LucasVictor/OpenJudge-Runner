#include <stdio.h>
int main(){
	long int A,B,ans=-1;
	scanf("%ld%ld",&A,&B);
	if((A+B)%2==0&&(A+B)>0){
		ans=(A+B)/2;
	}
  	if(ans==-1){
    	printf("IMPOSSIBLE");
    }else{
	printf("%ld",ans);
    }
	
}