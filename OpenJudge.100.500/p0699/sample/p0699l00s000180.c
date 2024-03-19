#include<stdio.h>


int main() {
	int a, b, c;
	int check=0;
	scanf("%d %d %d", &a, &b, &c);
	if (a == 5 && b == 5 && c == 7) 
		check = 1;
	else if (a == 5 && b == 7 && c == 5)
		check = 1;
	else if (a == 7 && b == 5 && c == 5)
		check = 1;
	if (check == 1)
		puts("YES");
	else
		puts("NO");
	return 0;
}