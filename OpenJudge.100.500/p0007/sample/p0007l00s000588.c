#include <stdio.h>

int main(void){
	int n,a,b,c,d,p;
	while(scanf("%d",&n) != EOF){
		p = 0;
		for (a = 0;a <= 9;a++){
			for (b = 0;b <= 9;b++){
				for (c = 0;c <= 9;c++){
					for (d = 0;d <= 9;d++){
						if (n == a + b + c + d){
							p++;
						}
					}
				}
			}
		}
		printf("%d\n",p);
	}
	return 0;
}