#include <stdio.h>
#include <string.h>
int min(int a,int b){
	int min = a;
	if(a>b)min=b;
	return min;
}
int main(void){
	int num0=0;
	int num1=0;
	char s[2];
	int i;
	while( (s[0]=getchar())!=-1){
		if(s[0]=='0'){
			num0++;
		}else{
			num1++;
		}
	}
	int ans = min(num0,num1)*2;
	printf("%d",ans);
	return 0;
}