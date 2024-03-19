#include <stdio.h>

int main(void){
	char str[4];
	scanf("%s", str);
	int sum=0;
	for(int i=0; i<3;i++){
		for(int x=1;x<4-i;x++){
			if(str[i]==str[i+x])sum++;
		}
	}
	if(sum==2)printf("Yes\n");
	else printf("No\n");
	return 0;
}
