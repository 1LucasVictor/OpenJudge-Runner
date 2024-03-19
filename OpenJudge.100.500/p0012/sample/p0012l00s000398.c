#include <stdio.h>

int main(void){
	int a[100],i=0;
	while(scanf("%d",&a[i]) != EOF)
	{
		if(a[i] == 0){
			while(1){
				i--;
				if(a[i] != 0){
					printf("%d\n",a[i]);
					a[i]=0;
					break;
				}
			}
		}
		i++;
	}

	return 0;
}