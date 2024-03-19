#include<stdio.h>
void handan(int a,int b,int c);
int main(void){
	int n;
	scanf("%d",&n);
	int a,b,c;
	for(;n>0;n--){
		scanf("%d %d %d",&a,&b,&c);
		handan(a,b,c);
	}
}

void handan(int a,int b,int c){
	if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)printf("YES\n");
	else printf("NO\n");
}