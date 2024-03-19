#include<stdio.h>

int main(void) {

	char S[4];

	scanf("%s", S);
	for (int i = 0; i < 3; ++i) {
		if (S[i] == S[i + 1]) {
			puts("Yes");
			return 0;
		}
      else if(S[i] == S[i + 2]) {
			puts("Yes");
			return 0;
      }
      else if(S[i] == S[i + 3]){
        puts("Yes");
        return 0;
      }
      else if(S[i] == S[i + 3]){
        puts("Yes");
        return 0;
      }
	}
	puts("No");
	return 0;
}
