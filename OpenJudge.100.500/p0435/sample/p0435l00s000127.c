#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int N,D;
	int i,ans;
	char str[100000];
 
	fgets(str, sizeof(str), stdin);
	N=atoi(strtok(str," "));
	D=atoi(strtok(NULL," "));

	ans=0;
	for(i=0;i<N;i++){
		int x,y;
		fgets(str, sizeof(str), stdin);
		x=atoi(strtok(str," "));
		y=atoi(strtok(NULL," "));
		if( ((long long)x*x+(long long)y*y) <= ((long long)D*D) ) ans++;
	}

	printf("%d\n",ans);

	return 0;
}
