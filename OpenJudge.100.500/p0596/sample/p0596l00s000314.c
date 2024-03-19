#include <stdio.h>
#include <math.h>

int main(void)
{
	char s[100000];
	int i,cnt[2]={0};
	scanf("%s",s);
	
	for(i=0;i<strlen(s);i++){
		cnt[s[i] - '0']++;
	}
	printf("%d\n",(int)fmin(cnt[0],cnt[1])*2);
	return 0;
}
