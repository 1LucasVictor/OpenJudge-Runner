#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int count(int n){
	int res=0;
	int i,j,k,tem,tem1;
	for(i=0; i<10; i++){
		if(n-i<0)return res;
		tem=n-i;
		for(j=0; j<10; j++){
			if(tem-j<0)break;
			tem1=tem-j;
			for(k=0; k<10; k++){
				if(tem1-k<0 || tem1-k>9)continue;
				res++;
			}
		}
	}

	return res;
}

int main(void) {
	int n;
	while(scanf("%d",&n)!=EOF)printf("%d\n",count(n));

	return 0;
}