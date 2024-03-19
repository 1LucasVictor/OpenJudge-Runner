#include <stdio.h>

int main(void) {
	int a,b,c,d,s,p,x,y,z;
	while(scanf("%d",&s) != EOF){
		if(s > 36){
			printf("0\n");
		}
		else{
			p = 0;
			for(a = 0;a <= 9;a++){
				x = s - a;
				if(x < 0 || x > 27){continue;}
				for(b = 0;b <= 9;b++){
					y = s - a - b;
					if(y < 0 || y > 18){continue;}
					for(c = 0;c <= 9;c++){
						z = s - a - b - c;
						if(z < 0 || z > 9){continue;}
						for(d = 0;d <= 9;d++){
							if(s == a + b + c + d){p++;}
						}
					}
				}
			}
			printf("%d\n",p);
		}
	}
	return 0;
}