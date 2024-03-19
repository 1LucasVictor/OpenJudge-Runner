#include <stdio.h>

int main(void){
	int ans = 0;
	char c[2];
	for(int i=0;i<3;i++){
		scanf("%c",&c[0]);
		if(c[0]=='1')ans++;
	}
	printf("%d",ans);
	return 0;
}