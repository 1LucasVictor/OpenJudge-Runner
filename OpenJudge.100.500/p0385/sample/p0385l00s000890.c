#include<stdio.h>

int main(void)
{
	int ans[1000] = {0};
	int q=1,i;
	char str[1000];
	int give;
	
	ans[0] = 1;
	
	
	
	while(ans[q-1]!=0){
		scanf("%s", str);
		for(i=0; str[i]!='\0'; i++){
			give = str[i] - '0';
			ans[q] += give;}
		q++;}
	
	for(i=1; i<q-1; i++){
		printf("%d\n", ans[i]);}
}
