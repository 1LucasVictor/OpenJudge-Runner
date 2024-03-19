#include <stdio.h>

int main(void){
	int f = 0, in;
	for(int i = 0; i < 3; i++){
		scanf("%d", &in);
		if(in == 5 && (f & 1))f |= 4;
		if(in == 5 && !(f & 1))f |= 1;
		if(in == 7)f |= 2;
	}
	if(f == 7)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
