#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, j, a, b, q;
	char str[1001], order[10], p[1001];
	
	scanf("%s",str);
	scanf("%d",&q);
	for (i=0; i<q; i++) {
		scanf("%s %d %d",order,&a,&b);
		
		if(strcmp(order,"print")==0) {
			for(j=a; j<=b; j++) {
				printf("%c",str[j]);
			}
			printf("\n");
		
		} else if(strcmp(order,"reverse")==0) {
			strcpy(p,str);
			for(j=a; j<=b; j++) {
				str[j] = p[a+b-j];
			}
		
		} else if(strcmp(order,"replace")==0) {
			scanf("%s",p);
			for(j=a; j<=b; j++) {
				str[j] = p[j-a];
			}
		}
	}
	return 0;
}