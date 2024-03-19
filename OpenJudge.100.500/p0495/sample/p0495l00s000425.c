#include <stdio.h>
int main(){
	char i,a[3];
	for (i=0;i<3;i++)
	{
		scanf("%c",&a[i]);
	}
	if (a[0]==a[1]&&a[1]==a[2])
	{
		printf("No");
		return 0;
	}
	printf("Yes");
	return 0;
}