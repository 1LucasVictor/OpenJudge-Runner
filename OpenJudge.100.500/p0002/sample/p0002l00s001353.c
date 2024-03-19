#include <stdio.h>

int sq(int m){
	return m*m;
}

int main(){
	int n;	
	scanf("%d",&n);
		
	int a[n];
	int b[n];
	int c[n];
	int i;
	
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a[i],&b[i],&c[i]);
	}
	
	for(i=0;i<n;i++){
		if(sq(a[i])==sq(b[i])+sq(c[i])||sq(b[i])==sq(a[i])+sq(c[i])||sq(c[i])==sq(a[i])+sq(b[i])){
			printf("YES\n");
		}else {printf("NO\n");}
	}
	
	return 0;
}