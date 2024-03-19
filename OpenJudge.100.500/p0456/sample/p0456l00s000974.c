#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,n,count=0;
	char s[200000],t[200000];

	scanf("%s",s);
	scanf("%s",t);

	n = strlen(s);

	for(i=0;i<n;i++){
		if(s[i]!=t[i]){
			s[i]=t[i];
			count++;
		}
	}

	printf("%d\n",count);

	return 0;
}
