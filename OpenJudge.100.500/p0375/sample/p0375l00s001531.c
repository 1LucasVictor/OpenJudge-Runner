#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void) {
	int num;
	scanf("%d", &num);
	int i,tmp;
	int sum = 0;
	for (i = 0; i < num; i++) {
		sum++;
	    //30,130???????????????????????????

	    if (sum % 3 == 0 || sum % 10 == 3) {
			printf(" %d", sum);
		}else{
		    tmp=sum;
		    while(1){
	            if(tmp<=10)break;
	            tmp/=10;
	        }
	     	if (tmp % 3 == 0 || tmp % 10 == 3) {
			    printf(" %d", sum);
		    }
		}

	

	}
	printf("\n");
	return 0;
}