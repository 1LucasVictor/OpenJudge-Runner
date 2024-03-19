#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
	
	int numA, numB, num, count = 0;
	while(scanf("%d %d", &numA, &numB) != EOF){
		count = 0;
		num = numA + numB;
		while(1){
			
			if(num / 10 != 0){
				count += 1;
				num = num / 10;				
			}
			
			else if(num / 10 == 0){
			    count += 1;
				break;
			}
		}
		printf("%d\n", count);
	}
	return 0;
} 
