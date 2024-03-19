#include<stdio.h>
int main(){
	int i,j,n,m;
	while(scanf("%d %d",&n,&m)!=EOF){
		n+=m;
		for(i=0;n;i++){
			n/=10;
		}
		printf("%d\n",i);
	}
	return 0;
}