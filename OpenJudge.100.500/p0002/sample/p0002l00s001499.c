#include<stdio.h>

void checkTri(int,int,int);

int main(){
	int a,b,c,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		checkTri(a,b,c);
	}
}

void checkTri(int a,int b,int c){
	a*=a;
	b*=b;
	c*=c;
	if(a==b+c)printf("YES\n");
	else if(b==a+c)printf("YES\n");
	else if(c==a+b)printf("YES\n");
	else printf("NO\n");
}