#include<stdio.h>
int main() {
	int i;
	char num[1000];
	while(1){
		int ans=0;
		scanf("%s", &num);
		if(num[0]=='0') break;
		for(i=0; num[i]!='\0'; i++){
			ans += num[i] - '0';
		}
		printf("%d\n", ans);
	}
	return 0;
}
