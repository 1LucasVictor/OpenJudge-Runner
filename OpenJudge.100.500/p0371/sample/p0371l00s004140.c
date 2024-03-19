#include <stdio.h>
#define N 100000

int main(void)
{
	int i,min ,max,n;
	int test[N];
	long long sum = 0;
	scanf("%d", &n);
  	for(i=0;i<n;i++){
   		scanf("%d", &test[i]);
     	sum = sum + test[i];
		if(i == 0){
			min = test[0];
			max = test[0];
		}
		if(min > test[i]){
			min = test[i];
        }
 		
		if(max< test[i]){
			max = test[i];
		}
	}
	
	printf("%d %d %d\n", min, max, sum);
    return 0;
}