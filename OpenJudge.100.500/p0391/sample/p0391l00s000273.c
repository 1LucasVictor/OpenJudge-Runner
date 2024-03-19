#include <stdio.h>
#include <string.h>
#define MAX 1001
int main(void)
{
	char str[MAX], work[MAX]={'\0'}, p[MAX], ope[8];
	int a, b, q, len, i, j, x;
	scanf("%s", str);
	scanf("%d", &q);
	for(i=0; i<q; i++){
		scanf("%s", ope);
		switch(ope[2]){
			case 'i':
				scanf("%d%d", &a, &b);
				for(j=a; j<=b; j++){
					printf("%c", str[j]);
				}
				puts("");
				break;
			case 'v':
				scanf("%d%d", &a, &b);
				len = (int)strlen(str);
				strncpy(work, str, len);
				for(j=0; j<(b-a+1); j++){
					str[a+j] = work[b-j];
				}
				break;
			case 'p':
				scanf("%d%d%s", &a, &b, p);
				for(j=0; j<(b-a+1); j++){
					str[a+j] = p[j];
				}
				break;
			default:
				break;
		}
	}
	return 0;
}