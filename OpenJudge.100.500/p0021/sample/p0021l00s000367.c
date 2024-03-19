#include<stdio.h>
int main(){
	int n,a,b,s,max;
	int low[5000];
	for(;;){
		scanf("%d",&n);
		if(n==0){break;}
		max=0;
		for(a=0;a<n;a++){
			scanf("%d",&low[a]);
		}
		for(a=0;a<n;a++){
			s=low[a];
			if(max<s){max=s;}
			for(b=a+1;b<n;b++){
				s+=low[b];
				if(max<s){max=s;}
			}
		}
		printf("%d\n",max);
	}
	return 0;
}