#include<stdio.h>
int main(){
	long int a,b,c,n,s,max;
	int low[5000];
	for(;;){
		scanf("%ld",&n);
		if(n==0){break;}
		max=0;
		for(a=0;a<n;a++){
			scanf("%d",&low[a]);
		}
		for(b=0;b<n;b++){
			s=low[b];
			if(s>max){max=s;}
			for(c=b+1;c<n;c++){
				s+=low[c];
				if(s>max){max=s;}
			}
		}
		printf("%ld\n",max);
	}
	return 0;
}