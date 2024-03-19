#include <stdio.h>

int 
main(){
	long int H,N,Ai;
	long int All,i;
	All=0;
	scanf("%ld%ld",&H,&N);
	
	for(i=0;i<N;i++){
		scanf("%ld",&Ai);
		All += Ai;
		if(All>=H){
			printf("Yes\n");
			return 0;
		}
	}
	
	printf("No\n");
		
 return 0;
}