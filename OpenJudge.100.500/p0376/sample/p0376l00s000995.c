#include<stdio.h>
#define	SIZE	1000 
int main(){
	int num[SIZE];
	int i, n, numbuff=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &num[i]);
	}
	int rev[n];
	for(i=0;i<n;i++){
		rev[i] = 0;
	}
	for(i=0;i<n;i++){
		rev[n-1-i] = num[i];
	}
	i=0;
	while (1){
		printf("%d", rev[i]);
		i++;
		if(i<n){
			printf(" ");
		}else{
			break;
		}
	}
	printf("\n");
	return 0;
}
