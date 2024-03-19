#include<stdio.h>

int main(){
	//freopen("in/0005.txt","r",stdin);
	long a,b,r,d,gcd,lcm,t1,t2;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(b>a) {
			a^=b;b=a^b;a=a^b;
		}
		t1=a;
		t2=b;
		do{
			r=a%b;
			d=a/b;
			a=b;
			b=r;
		}while(b>0);
		gcd=a;
		lcm=t1*t2/gcd;
		printf("%d %d\n",gcd,lcm );
	}
	return 0;
}