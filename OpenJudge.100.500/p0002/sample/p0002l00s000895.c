#include<stdio.h>
int main(){
	int a,b,c,x,z;
	scanf("%d",&z);
	for(x=0;x<z;x=x+1){
		scanf("%d%d%d",&a,&b,&c);
		if(a*a+b*b==c*c){printf("YES\n");}
		else if(a*a+c*c==b*b){printf("YES\n");}
		else if(b*b+c*c==a*a){printf("YES\n");}
		else{printf("NO\n");}
	}
  return 0;
}    