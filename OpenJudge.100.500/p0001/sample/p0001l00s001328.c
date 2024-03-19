#include <stdio.h>

int pow_func(int base, int exponent) {
	int answer = 1;
	while (exponent != 0){
		answer = answer * base;
		exponent--;
	}
	return answer;
}

int main(void)
{
	int a[200], b[200];
	int n = 0;
	int i,j = 1;

	while((scanf("%d%d", &a[n], &b[n]) != EOF) && (n <= 200)) {
		if (((a[n] >= 0) && (a[n] <= 1000000)) && ((b[n] >= 0) && (b[n] <= 1000000))) {
			n++;
		}
	}
	
	for (i = 0; i < n; i++) {
	  if(a[i]==0 || b[i]==0){
	    printf("0\n");
	  }else{
		while (j <= 7) {
		  int result = pow_func(10,j);
			if (((a[i] + b[i]) / 10) < result) {
				printf("%d\n", j + 1);
				break;
			}
			else {
				j++;
		    }
		}
		}
	}

	return 0;
}