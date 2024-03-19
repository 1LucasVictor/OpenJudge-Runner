#include <stdio.h>

int main()
{
	char s[3];
  	int marble = 0;
  	scanf("%s", s);
  	for (int i = 0; i < 3; i++){
    	if(s[i] == '1'){
        	marble++;
        }
    }
  	printf("%d", marble);
}