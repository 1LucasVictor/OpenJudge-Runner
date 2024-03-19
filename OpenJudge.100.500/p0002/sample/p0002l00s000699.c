#include<stdio.h>

int main(){
	int i,a,b,c,cnt,tmp;
	scanf("%d",&cnt);
	for(i=0;i<cnt;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(a > b){
			tmp = a;
			a = b;
			b = tmp;
		}
		if(b > c){
			tmp = b;
			b = c;
			c = tmp;
		}
		if(c*c == b*b + a*a) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}