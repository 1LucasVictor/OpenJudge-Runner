#include <stdio.h>
#include <string.h>
int main(void){
	char str[100000+1];
	int n,um=0,zero=0;
	scanf("%s", &str);
	n = strlen(str);
	for(int i=0;i<n;i++){
		if(str[i]=='1')++um;
		else ++zero;
	}
	if(um<=zero)printf("%d\n",um*2);
	else if(zero<um)printf("%d\n",zero*2);
	
	return 0;
}