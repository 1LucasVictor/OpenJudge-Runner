#include<stdio.h>

int main(void)
{
int H,W,a,b;
	while(1){scanf("%d %d",&H,&W);
		if(H==0 && W==0)break;
		for(b=1;H>=b;b++)
			{for(a=1;W>=a;a++)
				{
						if(a==1 || b==1){printf("#");}
					else{
					if(a!=W && b!=H){printf(".");}
				else{printf("#");}
					}printf("\n");
				}
		}printf("\n");
}
return 0;
}
