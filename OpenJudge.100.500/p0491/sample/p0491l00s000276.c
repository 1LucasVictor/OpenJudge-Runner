#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include <assert.h>

int main(void){
		int a,b;
		int c;

		scanf("%d",&a);
		scanf("%d",&b);
int d = a/b;
		a = a-(d*b);

int tmp2;
	while(1){
			tmp2 = a;
			a = a-b;
			if(tmp2 < abs(a)){
				c = tmp2;
				break;
			}
		}



printf("%d\n",abs(c));

		return 0;
}
