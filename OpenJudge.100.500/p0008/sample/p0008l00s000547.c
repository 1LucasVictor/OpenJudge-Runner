#include <stdio.h>

int main(){
	int n, i, j, count1, count2;
	while(scanf("%d", &n) != EOF){
		count2=1;
		for(i=3; i<=n; i=i+2){
			count1=0;
			for(j=1; j<i; ++j){
				if(i%j == 0){
					count1++;
				}
			}
			if(count1 == 1){
				count2++;					
			}
		}
		printf("%d\n", count2);
	}
}