#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(){
	int num;
	int i;
	int min, max;
	long long sum=0;
	int temp;

	scanf("%d", &num);

	for(i=0; i<num; i++){
		scanf("%d", &temp);
		if(i==0){
			min = temp;
			max = temp;
			sum = temp;
		}else{

			if(min > temp)
				min = temp;
			else if(max < temp)
				max = temp;
			
			sum += (long long)temp;
		}
	}

	printf("%d %d %ld\n", min, max, sum);
	
	return 0;

}
