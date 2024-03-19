/*
問題内容：
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int x[100],y[100],r[100];
	int n,i;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d %d %d",&x[i],&y[i],&r[i]);
	}
	for(i=0; i<n; i++){
		if(r[i]*r[i]==(x[i]*x[i])+(y[i]*y[i])){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
    return 0;
}