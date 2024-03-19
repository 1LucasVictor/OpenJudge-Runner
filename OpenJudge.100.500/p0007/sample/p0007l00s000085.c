#include <stdio.h>

int main(void) {
	int x, y, z, a, b;
	int t=0;
	
	while(scanf("%d", &x)!=EOF){
	t=0;
	for(y=0; y<10; y++){
		for(z=0; z<10; z++){
			for(a=0; a<10; a++){
				for(b=0; b<10; b++){
					if(y+z+a+b==x)
						t++;
					}
				}
			}
		}
	printf("%d\n", t);
	}
	return 0;
}