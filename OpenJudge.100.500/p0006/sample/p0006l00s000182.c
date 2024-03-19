#include<stdio.h>
int main(void){
  
	int n;
	int s = 100000;

	scanf("%d", &n);

	for(int i = 0; i< n; i++){
		s = s * 1.05;
		if((s % 1000) != 0){
			s = (s / 1000 + 1) * 1000;
		}
	}

	printf("%d\n", s);
    return 0;
}