#include <stdio.h>
int main(){
	
	int N;
	int a=0;
	scanf("%d", &N);
	
	for (int i=1; i<=N; i++){
	
	if(i==N){
		a++;
	}
    else if(i%2==0){
    	a++;
	}
}  
printf("%d",a);
return 0 ;
}