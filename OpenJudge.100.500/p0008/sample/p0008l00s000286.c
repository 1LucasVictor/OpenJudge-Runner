#include <stdio.h>

int main(){
	int i,j,c,n=1000000,p[1000000];
	for (i = 2; i < 1001; ++i){for (j = i * 2; j < n; j += i){p[j] = 1;}}
    while(scanf("%d",&c)!=EOF){
		int a=0;
		for (i = 2; i <= c; ++i)
			if(p[i]!=1){++a;}
		printf("%d\n",a);
	}
	return 0;
}