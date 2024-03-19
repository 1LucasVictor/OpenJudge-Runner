#include <stdio.h>

int main(void)
{
	int n,i,i2,i3,i4;
	int t;
	
	while(scanf("%d", &n) != EOF){
		t = 0;
		if (n > 36);
		
		for (i=0; i < 10; i++){
			for (i2=0; i2 < 10; i2++){
				for (i3=0; i3 < 10; i3++){
					for (i4=0; i4 < 10; i4++){
						if (i+i2+i3+i4 == n)t++;
					}
				}
			}
		}
		
		printf("%d\n", t);
	}
	return (0);
}