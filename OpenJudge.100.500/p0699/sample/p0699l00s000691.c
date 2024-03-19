#include <stdio.h>

int main(){
	int a[3],i;
	for(i = 0;i < 3;i++){
	scanf("%d",&a[i]);
	}
	if(a[0] + a[1] + a[2] == 17)
		printf("YES");
	else
		printf("NO");
	return 0;
}