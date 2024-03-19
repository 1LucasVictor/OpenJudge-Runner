#include<stdio.h>

int main(){
	int a,b,c,d,p,i;
	double q=0;
	while(scanf("%d %d",&a,&b)!=-1){
		c=a;
		d=b;
		while((a>b?b:a)){
			p=a%b;
			a=b;
				if(!p) break;
			b=p;
		}
		for(i=0;i<d;i++) q+=c/b;
		printf("%d %d\n",b,(int)q);
		q=0;
	}
	return 0;
}