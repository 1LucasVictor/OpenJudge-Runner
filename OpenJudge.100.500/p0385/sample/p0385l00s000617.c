
#include <stdio.h>
#include <string.h>

int main()
{
	char str[1001];
	int sum=0;
	int i,len;
	while(1){
		scanf("%s",  str);
		if(strcmp(str, "0")==0){
			break;
		}
		else{
			len=strlen(str);
			for(i=0; i<len; i++){
				sum+=str[i]-'0';
			}
		}
		printf("%d\n", sum);
		sum=0;
	}
	return 0;
}