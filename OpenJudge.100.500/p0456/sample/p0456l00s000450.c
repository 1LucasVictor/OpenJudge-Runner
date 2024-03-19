#include <stdio.h>

int main(void)
{
	char s[200000];
	char t[200000];
	int moji = 0, i, ans = 0;
	
	/*
	for(i = 0; i <=200; i++){
		s[i] = '0';
	}
	*/
	
	scanf("%s", s);
	scanf("%s", t);
	
	while(s[moji] != '\0'){
		moji++;
	}
	moji -= 1;
	
	for(i = 0; i <= moji; i++){
		if(s[i] != t[i]){
			ans++;
		}
	}
	
	//printf("%d\n", moji);
	printf("%d", ans);
	
	return 0;
}