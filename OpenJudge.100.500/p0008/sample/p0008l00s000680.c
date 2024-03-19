#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;
	int m;
	int q = 0;
	
	while(scanf("%d",&i) != EOF){
		for(m = 2;m <= i;m++){
			for(j = 2;j < m;j++){
				if(m % j == 0){
					k = 1;
				}
			}
			if(k == 1){
				//???????????????
			}
			else {
				q++;
			}
			k = 0;
		}
	
		printf("%d\n",q);
		q = 0;
	}
	
	return(0);
}