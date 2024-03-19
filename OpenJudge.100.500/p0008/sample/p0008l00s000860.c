#include<stdio.h>

int data[999999];

int main(void)
{
	int a = 2;
	int b;
	int n;
	int pro;
	int i;
	int cnt;
	
	for (i = 1; i < 999999; i++) {
		data[i] = 1;
	}
	
	while (a * a <= 999999) {
		
		b = a;
		pro = 0;
		
		while (1) {
			
			pro = a * b;
			
			if (pro > 999999) {
				break;
			}
			
			data[pro - 1] = 0;
			
			b++;
		}
		
		a++;
		
	}
	
	
	while (scanf("%d", &n) != EOF) {
		
		
		cnt = 0;
		
		for (i = 1; i < n; i++) {
			
			if (data[i] == 1) {
				cnt++;
			}
		}
		
		printf("%d\n", cnt);
		
	}
	return (0);
}