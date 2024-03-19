#include<stdio.h>
#include<stdlib.h>
#include<memory.h>

int main(){
	int n,i,j,r;
	char* ptr;
	while(scanf("%d",&n)!=EOF){
		ptr=(char*)malloc(sizeof(char)*(n+1));
		memset(ptr,'1',n+1);
		i=2;
		while(i<=n){
			j=++i;
			while(j<=n) {
				if(j%(i-1)==0) ptr[j]='0';
				j++;
			}

			while(ptr[i]=='0' && i<=n) i++;
		}

		i=2;r=0;
		while(i<=n){
			if(ptr[i]=='1') r+=1;
			i++;
		}
		free(ptr);

		printf("%d\n",r );
	}

	return 0;
}