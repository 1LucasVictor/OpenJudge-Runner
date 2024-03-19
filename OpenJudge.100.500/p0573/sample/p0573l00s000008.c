#include<stdio.h>

int main(void) {

	char S[4];

	scanf("%s", S);
    if(S[0] == S[1] && S[2] == S[3]) {
			puts("Yes");
    }
    else if(S[0] == S[2] && S[1] == S[3]){
        puts("Yes");
    }
    else if(S[0] == S[3] && S[1] == S[2]){
	puts("Yes");
    }
    else{
      puts("No");
    }
	return 0;
}
