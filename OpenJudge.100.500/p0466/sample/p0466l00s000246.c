#include <stdio.h>

int main()
{
	char s[10], t[11];
	int flag = 1;
	int i, j;
	scanf("%s", s);
	scanf("%s", t);
	for(i = 0; ;i++){
		if(s[i] == '\0'){
			break;
		}
	}
	
	i--;
	
	for(j = 0; j <= i; j++){
		if(s[j] != t[j]){
			flag = 0;
			break;
		}
	}
	
	if(flag == 1 || t[j] != '\0' || t[j+1] == '\0'){
		flag =1;
	}else{
		flag = 0;
	}
	
	if(flag == 1)
		printf("Yes");
	else
		printf("No");
}