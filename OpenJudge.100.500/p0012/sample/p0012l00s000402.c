#include <stdio.h>

int main(){
	
	int syako[11],n,i;
	i=0;
	while(0<=scanf("%d",&n)){
		if(n==0){
			printf("%d\n",syako[i]);
			i--;
		}else{
			i++;
			syako[i]=n;
		}
		
	}
	return 0;
}