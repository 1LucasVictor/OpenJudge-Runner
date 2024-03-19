#include<stdio.h>

int main(){
	int n;
	int a,b,c,d;
	int count;
	while(scanf("%d",&n)!=EOF){
		count=0;
		for(a=0;a<=9;a++){
			for(b=0;b<=9;b++){
				for(c=0;c<=9;c++){
					for(d=0;d<=9;d++)if(n-a-b-c-d==0)count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}