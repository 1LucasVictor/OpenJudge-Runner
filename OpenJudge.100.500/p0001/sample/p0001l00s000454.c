#include<stdio.h>

int main(){
int a,b,c,cnt;
	while(scanf("%d %d",&a,&b)!=-1){
		c=a+b;cnt=1;
		for(;c>=10;c/=10)cnt++;
		printf("%d\n",cnt);
	}
	return 0;
}