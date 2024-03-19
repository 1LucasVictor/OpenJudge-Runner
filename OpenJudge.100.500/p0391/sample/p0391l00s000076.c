#include<stdio.h>
#include<string.h>

int main() {
	int  q,a,b,i,j,k;
	char str[1001] = { 0 }, p[1001] = { 0 }, qes[10] = {0},x;

	scanf("%s %d",str,&q);

	for (i = 0; i < q; i++) {
		scanf("%s %d %d",qes,&a,&b);

		if (strcmp(qes,"print")==0) {
			for (j = a; j <= b; j++) {
				printf("%c", str[j]);
			}
			printf("\n");
		}
		else if (strcmp(qes, "reverse") == 0) {
			for (j = a,k=0; k <= (b-a)/2; j++,k++) {
				x = str[j];
				str[j] = str[b - k];
				str[b - k] = x;
			}
		}
		else {
			scanf("%s", p);
			
			for (j = a, k = 0; j <= b; j++, k++) {
				str[j] = p[k];
			}
		}
	}

	return 0;
}
