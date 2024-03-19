#include<stdio.h>
int main(){
	int n,i,j;
	scanf("%d",&n);
	printf(" ");
	for(i=1;i<=n;i++){
		j=10;
		if(i%3==0||i%j==3){
			printf("%d",i);
			if(i<n){printf(" ");}
				else{printf("\n");}
		}
		j+=10;
	}
	
	
	return 0;
}