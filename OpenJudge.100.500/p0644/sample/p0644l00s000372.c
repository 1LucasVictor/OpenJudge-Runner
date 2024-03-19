#include <stdio.h>
int main(){
	int sum = 0;
	for(int i=0;i<3;i++) if(getchar() == '1') sum++;
	printf("%d",sum);
	return 0;
}