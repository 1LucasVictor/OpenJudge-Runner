#include <stdio.h>

int main(void)
{
  	int i = 0;
	char S[11];
  	char T[12];
	scanf("%s%s", S, T);
  	while(S[i] == '\0') {
      	if (S[i] != T[i]) {
          	printf("No");
          	return 0;
        }
      	i++;
    }
  	printf("Yes");
	return 0;
}