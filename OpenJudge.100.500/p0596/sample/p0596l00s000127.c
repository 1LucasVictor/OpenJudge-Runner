#include <stdio.h>
#include <string.h>

int main(){
	char S[100000];
	int count0=0,count1=0;
	scanf("%s",S);
	int len = strlen(S);

	for(int i=0;i<len;i++){
		if(S[i] == '0')count0++;
		else count1++;
	}

	if(count0 > count1)printf("%d\n",2*count1);
	else if(count0 < count1)printf("%d\n",2*count0);
	else printf("%d\n",2*count0);

	return 0;
}