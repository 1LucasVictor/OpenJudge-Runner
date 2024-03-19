#include<stdio.h>
	int s[10],i=1;
	int main(){
		int n;
		while(1){
			scanf("%d",&n);
			if(n){
				s[i]=n;
				i++;
			}else{
				i--;
				printf("%d\n",s[i]);
				if(i==1)break;
			}
		}
		return 0;
	}