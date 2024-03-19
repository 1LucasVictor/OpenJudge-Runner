#include <stdio.h>

int main(void) {
	int a,b,c,d,t,p;
		while(scanf("%d",&t) != EOF){
			p = 0;
			for (a = 0;a <= 9;a++){
				for (b = 0;b <= 9;b++){
					for (c = 0;c <= 9;c++){
						for (d = 0;d <= 9;d++){
							if (a + b + c + d == t){
								p = p + 1;
							}
						}
					}
				}
			}
			printf("%d\n",p);
		}
	return 0;
}
//aoj 0008