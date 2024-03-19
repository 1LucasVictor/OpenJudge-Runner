#include<stdio.h>
#include<string.h>
int main()
{
		int a,b;
		 scanf("%d %d", &a,&b);
		if((a>1 && a<10) && (b>1 && b<10)){
						printf("%d\n", a*b);
		}else{
				printf("-1\n");
		}
		}