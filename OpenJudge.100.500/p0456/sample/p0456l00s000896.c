#include <stdio.h>

int main(void){

	char str1[20000];
	char str2[20000];
    scanf("%s", str1);
	scanf("%s", str2);

	char *a;
	char *b;

	a = str1;
	b = str2;

	int i = 0;
	int cnt = 0;
	while (a[i])
	{
		if(a[i]!=b[i])
			cnt++;
		i++;
	}

	printf("%d", cnt);

	return 0;
}
