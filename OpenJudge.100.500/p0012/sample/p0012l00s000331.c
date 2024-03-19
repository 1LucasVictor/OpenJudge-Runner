#include <stdio.h>
int main(){
	int i = 0,n[10],cnt = 0,cnt1 = 0;
	for(;;){
		i++;
		scanf("%d" ,&n[i]);
		if(n[i] != 0) cnt++;
		else if(n[i] == 0) cnt1++;
		if(n[i] == 0){
			printf("%d\n", n[i -1]);
			i -= 2;
		}
		if(cnt == cnt1) break;
	}
	return 0;
}