#include <stdio.h>
int main(){
	int x,a;
	if(scanf("%d%d",&x,&a)==-1){
		return 1;
	};
	if(x<a){
		printf("%d",0);
		}
	else{
		printf("%d",10);
	}
	return 0;
}