#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, num;
	int sum_a = 0;
	int *p;

	scanf("%d\n", &n);
	p = malloc(n * sizeof(int));
	for(int i=0; i<n; i++){
		p[i]=0;
	}
	num = n-1;
	while (0<num){
		int up_no = 0;
		char c = getchar();
		while((c!=' ') && (c!=10)){
			up_no *= 10;
			up_no += c - '0';
			c = getchar();
		}
		p[up_no-1]++;
		num--;
	}
	for(int i=0; i<n; i++){
		printf("%d\n", p[i]);
	}
	return (0);
}