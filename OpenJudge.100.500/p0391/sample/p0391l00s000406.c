#include <stdio.h>

int main(void)
{
	char str[1002];
	char op[10], re[1002], temp[1002];
	int q, a, b, i, j;
	
	scanf("%s", str);
	scanf("%d",&q);
	
	for(j=0;j<q;j++){
		int k = 0;
		scanf("%s %d %d",op, &a, &b);
		if(op[2]=='i'){//print
			for(i=a;i<=b;i++){
				putchar(str[i]);
			}
			printf("\n");
		}
		if(op[2]=='v'){//reverse
			for(i=a;i<=(a+b)/2;i++){
				temp[k] = str[i];
				str[i] = str[b-k];
				str[b-k] = temp[k];
				k++;
			}
		}
		if(op[2]=='p'){//replace
			scanf("%s", re);
			for(i=a;i<=b;i++){
				str[i] = re[k];
				k++;
			}
		}
	}
	return 0;
}

