#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(void){
	int n;
	int i, j;
	scanf("%d",&n);
	int flag=0;
	for(i=1;i<=9;i++){
		for(j=i;j<=9;j++){
			if(i*j == n)	flag++;
		}
	}
	if(flag==0)
		printf("No");
	else
		printf("Yes");
    return 0; 
}
