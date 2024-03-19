#include<stdio.h>

struct SC{
	int s;
	int c;
};

struct SC sc[5];

int main(){
	int n, m;
	int i, flag = 0;
	int ans[3] = {-1, -1, -1};

	scanf("%d %d", &n, &m);
	for(i=0; i<m; i++){
		scanf("%d %d", &(sc[i].s), &(sc[i].c));
	}

	for(i=0; i<m; i++){
		if(n > 1 && sc[i].s == 1 && sc[i].c == 0){
			flag = 1;
			break;
		}

		if(ans[sc[i].s-1] == -1){
			ans[sc[i].s-1] = sc[i].c;
		}else if(ans[sc[i].s-1] != sc[i].c){
			flag = 1;
			break;
		}
	}

	if(ans[0] == -1){
		if(m == 0 && n == 1){
			ans[0] = 0;
		}else{
			ans[0] = 1;
		}
	}
	if(flag == 1){
		printf("-1");
	}else{
		for(i=0; i<n; i++){
			if(ans[i] == -1){
				printf("0");
			}else{
				printf("%d", ans[i]);
			}
		}
	}

	return 0;
}
