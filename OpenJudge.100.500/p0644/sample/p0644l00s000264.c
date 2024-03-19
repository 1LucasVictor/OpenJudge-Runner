#include <stdio.h>
#include <string.h>

int main(){
	int a = 0;
	int i;
	char moji[3];
	int b = 1;
	char m = '0' + b;
	if(scanf("%s",moji)==1){
		for(i=0;i < sizeof(moji);i++){
			if(moji[i] == '1')a++;
		}
	}
	printf("%d",a);
	
	return 0;
}