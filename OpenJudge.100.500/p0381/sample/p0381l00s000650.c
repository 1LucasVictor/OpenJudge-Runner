#include <stdio.h>

void function(int a[][2],int *n);

int main(){
	
	int n,x;
	int a[100][2];
	
	int t;
	for(t=0;t<100;t++){
		do{
			printf("");
			scanf("%d %d",&n,&x);
		}while( !( (n>=3 && n<=100) || (n==0 && x==0) ) );
		if(n==0 && x==0)break;
		a[t][0]=n;
		a[t][1]=x;
	}
	
	
	function(a,&t);
	
	return 0;
}

void function(int a[][2],int *n){
	int s,t,u;
	int d;
	
	
	for(d=0;d<*n;d++){
		int c=0;
		for(s=1;s<=a[d][0]-2;s++){
			for(t=s+1;t<=a[d][0]-1;t++){
				for(u=t+1;u<=a[d][0];u++){
					if(s+t+u==a[d][1])c++;
				}
			}
		}
		printf("%d\n",c);
	}
	
	
}