#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int hasil=0;
	
	for(int i=1; i<=9; i++){
		for(int j=1; j<=9; j++){
			if(i*j==n){
				i=10,j=10;
				hasil=1;
			}
		}
	}
	
	if (hasil==1) printf("Yes");
	else printf("No");
}