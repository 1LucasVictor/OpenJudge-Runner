#include<stdio.h>
n,i;int main(){
	int a[10000];
	while(scanf("%d",&n)!=EOF){
		if(n==0){i--;printf("%d\n",a[i]);}
		else{a[i]=n;i++;}
	}
	exit(0);
}