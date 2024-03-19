#include<stdio.h>
#include<string.h>

int main(void)
{
	char s[20];
	char s2[20];
	int i, j;
	int n;
	
	scanf("%s", s);
	
	n = strlen(s);
	j = strlen(s);
	
	for (i = 0; i < n; i++) {
		s2[i] = s[j - 1];
		
		j--;
	}
	
	s2[i] = '\0';
	
	printf("%s\n", s2);
	
	return (0);
}