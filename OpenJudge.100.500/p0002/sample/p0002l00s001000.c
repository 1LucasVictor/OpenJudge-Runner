#include <stdio.h>
int main(){
	int Data;
	int n;
	int Factor[1000][3];
	scanf("%d\n",&Data);
	for(n=0;n<Data;n++){
			scanf(" %d %d %d",&Factor[n][0],&Factor[n][1],&Factor[n][2]);
	}
	
	int l,m;
	for(l=0;l<Data;l++){
		int a,b,c;
		a=b=c=0;
		a=Factor[l][0]*Factor[l][0];
		b=Factor[l][1]*Factor[l][1];
		c=Factor[l][2]*Factor[l][2];
		
		if(a==b+c||b==a+c||c==b+a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
		
