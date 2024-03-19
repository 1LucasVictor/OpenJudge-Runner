#include <stdio.h>

int prime(int);

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int p=prime(n);
		printf("%d\n",p);
	}
}

int prime(int n){
	int i,j,p=0,b;
	for(i=2;i<=n;i++){
		b=0;
		for(j=2;j*j<=i;j++){
			if(i%j==0) b=1;
		}
		if(b==0) p++;
	}
	
	return p;
}