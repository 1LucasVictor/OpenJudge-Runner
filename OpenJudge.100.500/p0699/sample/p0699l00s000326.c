#include <stdio.h>

int main(void)
{
	int a, i;
	int five = 0;
	int seven = 0;
	
	for(i=0; i<3; i++){
		scanf("%d", &a);
		
		if(a == 5)
			five++;
		else if(a == 7)
			seven++;
	}
	
	if(five == 2 && seven == 1)
		printf("YES\n");
	else
		printf("NO\n");
	
	return 0;
}
