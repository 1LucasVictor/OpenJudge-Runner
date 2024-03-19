#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, q, a, b;
	char str[1001], order[11], p[1001], wk;
	
	scanf("%s", str);
	scanf("%d", &q);
	for(i = 0; i < q; i++){
		scanf("%s%d%d", order, &a, &b);
		if(!strcmp(order, "print")){
			printf("%*s\n", b-a+1, &str[a]);
		}else if(!strcmp(order, "reverse")){
			for(; a < b; a++, b--){
				wk = str[a];
				str[a] = str[b];
				str[b] = wk;
			}
		}else{
			scanf("%s", p);
			memcpy(&str[a], p, b-a+1);
		}
	}
	
	return(0);
}

