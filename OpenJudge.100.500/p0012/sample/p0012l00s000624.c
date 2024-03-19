#include <stdio.h>
int main(){
	int i = 0,k = 0,n[1000],p[1000],cnt = 0,cnt1 = 0;
	for(;;){
		i++;
		scanf("%d" ,&n[i]);
		if(n[i] != 0) cnt++;
		else if(n[i] == 0) cnt1++;
		if(n[i] == 0){
			p[k] = n[i-1];
			i -= 2;
			k++;
		}
		if(cnt == cnt1) break;
	}
	for(i = 0;i < k;i++){
		printf("%d\n", p[i]);
	}
	return 0;
}