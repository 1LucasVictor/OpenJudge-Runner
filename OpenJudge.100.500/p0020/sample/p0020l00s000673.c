#include <stdio.h>

int main(void)
{
	float x1,y1,x2,y2,x3,y3,x4,y4;
	int n;
	
	scanf("%d", &n);
	
	while (n-- > 0){
		scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		
		if (x1 == x2 || x3 == x4){
			if (x1 == x2 && x3 == x4){
				printf("YES\n");
			}
			else {
				printf("NO\n");
			}
		}
		
		else if ((y2 - y1)/(x2 - x1) == (y4 - y3)/(x4 - x3)){
			printf("YES\n");
		}
		
		else {
			printf("NO\n");
		}
	}
	
	return (0);
}