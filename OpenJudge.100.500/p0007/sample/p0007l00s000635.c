#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int calc(int n){
	int count=0;

	for(int i=0;i<=9;i++){
		for(int j=0;j<=9;j++){
			for(int k=0;k<=9;k++){
				if((n-i-j-k)<=9 && (n-i-j-k)>=0){
					count++;
				}
			}
		}
	}

	return count;
}

int main(void){
	int n;

	while(scanf("%d",&n)!=EOF){
		printf("%d\n",calc(n));
	}

    return 0;
}
