#include <stdio.h>
#include <string.h>
#define MAX_N 100
#define MAX_X 297


int mem[MAX_N + 1][MAX_X + 1][3];

int dfs(int n,int x,int i,int s,int p){
	int ret = 0;
	if(s == x && p == 3){
		return 1;
	}else if(n < i || x < s || p == 3){
		return 0;
	}
	if(mem[i][s][p] != -1){
		return mem[i][s][p];
	}
	for(int j = i;j <= n;j++){
		ret += dfs(n,x,j + 1,s + j,p + 1);
	}
	return mem[i][s][p] = ret;
}


int main(void){
	int n, x;
	while(1){
		scanf("%d%d",&n,&x);
		if((n | x) == 0){
			break;
		}
		memset(mem,-1,sizeof(mem));
		if(x <= MAX_X){
			printf("%d\n",dfs(n,x,1,0,0));
		}else{
			printf("0\n");
		}
	}
	return 0;
}