#include<stdio.h>
	int s[10],i=0;
	int main(){
		int n;
		while(scanf("%d",&n)!=EOF){
			if(n>0){
				s[i]=n;
				i++;
			}else{
				i--;
				printf("%d\n",s[i]);
			}
		}
		return 0;
	}