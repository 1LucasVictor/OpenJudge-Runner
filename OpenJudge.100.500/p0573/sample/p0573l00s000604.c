#include <stdio.h>
int main(void){
	char a[5];
	int i,j,cnt=0;
	scanf("%s",a);
	for(i=0;i<4;i++){
		for(j=i+1;j<4;j++){
			if(a[i]==a[j]) cnt++;
		}
	}
	if(cnt == 2) printf("Yes\n");
	else printf("No\n");
	return 0;
}