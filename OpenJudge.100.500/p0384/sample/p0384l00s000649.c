#include <stdio.h>
#include<string.h>
int main(void)
{
	char str[1201];
	char ko[27]={"abcdefghijklmnopqrstuvwxyz"};
	char o[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	
	int i,j,suu;
	
	fgets(str,sizeof(str),stdin);
	suu=(int)strlen(str);
	
		for(i=0;i<suu;i++){
			for(j=0;j<26;j++){
				if(str[i]==ko[j]){
					/* i??????????°?????????¨?????????*/
					str[i]=o[j];
					break;
				}else if(str[i]==o[j]){
					str[i]=ko[j];
					break;
				}
			}
			printf("%c",str[i]);
		}
	return 0;
}