#include <stdio.h>

int main(void)
{
	char s[4];
	char a, b;
	int i, s1, s2;
	
	s1 = s2 = 0;
	
	scanf("%s", s);
	
	a = s[0];
	
	for(i = 0; i < 4; i++){
		if(s[0] != s[i]){
			b = s[i];
		}
	}
	
	for(i = 0; i < 4; i++){
		if(a == s[i]){
			s1++;
		}
		else if(b == s[i]){
			s2++;
		}
	}
	
	if(s1 == 2 && s2 == 2){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	/*printf("%d %d", s1, s2);*/
	return 0;
	
}