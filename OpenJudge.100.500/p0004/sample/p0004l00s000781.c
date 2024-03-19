#include <stdio.h>

int gcd(long a, long b);
int lcm(long a, long b);

int main(){
    long x,y,answer_gcd,answer_lcm;
    int r;

    while(1){
        x=-1;
        scanf("%ld %ld",&x,&y);
        if(x<0)break;
        
        answer_gcd=gcd(x,y);
        answer_lcm=lcm(x,y);
    
        printf("%ld %ld\n",answer_gcd,answer_lcm);
    }
    return 0;
}

int gcd(long a, long b){
    int tmp;
    while (b)
    {
        tmp=a%b;
        a=b;
        b=tmp;
    }
    return a;
}

int lcm(long a, long b){
	return a*b/gcd(a,b);
}