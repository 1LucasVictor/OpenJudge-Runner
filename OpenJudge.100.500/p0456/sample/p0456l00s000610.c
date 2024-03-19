#include<stdio.h>
#define N 200000

int main(void)
{
	char s[N];
	char t[N];
	int i,cnt=0;

	scanf("%s",s);
	scanf("%s",t);

	for(i=0;i<N;i++){
		if(s[i]=='\0'){
			break;
		}
		if(s[i]!=t[i]){
			cnt++;
		}
	}

	printf("%d\n",cnt);

	return 0;
}
