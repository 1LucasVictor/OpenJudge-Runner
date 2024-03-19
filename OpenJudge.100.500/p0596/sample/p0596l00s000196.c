#include <stdio.h>
#define MAX 100000
	
int main() {
	char s[MAX];
	scanf("%s", s);
	int red = 0, blue = 0;
	for(int i = 0; i < MAX; i++){
		if(s[i] == '0')
			red++;
		else
			if(s[i] == '1')
				blue++;
			else
				break;
	}
	if(red <= blue)
		printf("%d\n", 2*red);	
	else
		printf("%d\n", 2*blue);
		

	return 0;
}