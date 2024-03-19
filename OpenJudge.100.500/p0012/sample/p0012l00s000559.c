#include<stdio.h>
	int main(){
		int n,i=0;
		int s[10];
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