#include<stdio.h>

int main() {
	int i;
	char a[1200];

	scanf("%[^\r\n]", a);

	i = 0;
	while(a[i]!='\0'){
		if ('A' <= a[i] && a[i] <= 'Z') {
			a[i] = a[i] + ('a' - 'A');
		}
		else if ('a' <= a[i] && a[i] <= 'z') {
			a[i] = a[i] + ('A' - 'a');
		}
		i++;
	}
	printf("%s\n", a);
	return 0;
}
