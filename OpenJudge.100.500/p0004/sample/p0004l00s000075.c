#include<stdio.h>

int main(){
	//freopen("in/0005.txt","r",stdin);
	long a,b,r,d,gcd,lcm,t1,t2;
	while(scanf("%ld %ld",&a,&b)!=EOF){
		if(b>a) {
			int t=a;a=b;b=t;
		}
		t1=a;t2=b;
		//printf("%d %d\n",t1,t2 );
		do{
			r=a%b;
			d=a/b;
			a=b;
			b=r;
		}while(b>0);
		gcd=a;
		lcm=t1/gcd*t2;
		printf("%d %d\n",gcd,lcm);
	}
	return 0;
}