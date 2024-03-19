#include <stdio.h>
int chk(int a,int b,int c);
int main(){
	int sn;
	int a,b,c;
	int i;

	scanf("%d",&sn);
	for(i=1;i<=sn;i++){
		scanf("%d %d %d",&a,&b,&c);
		printf(chk(a,b,c)?"YES\n":"NO\n");
	}
}

int chk(int a,int b,int c){
	return (a*a+b*b-c*c)&&(b*b+c*c-a*a)&&(c*c+a*a-b*b)?0:1;
}