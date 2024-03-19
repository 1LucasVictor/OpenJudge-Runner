#include <stdio.h>

int main(void){
	int i,cnt=0;
	char s[3];
	scanf("%s",s);

	for(i=0;i<3;i++){
		if(s[i]=='1'){
			cnt++;
		}
	}
	printf("%d",cnt);
 
	return 0;
 
}