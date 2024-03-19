#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	
	int syako[10],number,i;
	for(i=0;i<=9;i++){
		syako[i]=0;
	}
	i=0;
	while(0<=scanf("%d",&number)){
		if(number>0){
			syako[i]=number;
			i++;
		}else{
			i--;
			printf("%d\n",syako[i]);
		}
	}
	return 0;
}