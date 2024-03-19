#include<stdio.h>
#include<stdlib.h>
int main(){
	int i,j,l,k=1;
	while(scanf("%d %d",&i,&j)!=EOF){
		l=i+j;
			while(l/10 != 0){
		k++;
		l=l/10;
	}
	printf("%d",k);
	k=1; 
	}


	return 0;
}  
