#include <stdio.h>

int main(void)
{


	int a[100],b[100],c,i,j;
	int n=1;

	for(i=0;scanf("%d",&a[i])!=EOF;i++){
		scanf("%d",&b[i]);
		c=a[i]+b[i];
		while(1){
				if(c<10){
					break;
				}
				c=c/10;
				n++;
			}
		printf("%d\n",n);
		n=1;
	}

return 0;
}