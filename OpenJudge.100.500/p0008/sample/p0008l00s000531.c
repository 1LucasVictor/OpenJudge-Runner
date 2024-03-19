#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int IsPrime(int n){
    int i;
 
    if(n < 2)
        return 0;
    else if(n == 2)
        return 1;
 
    if(n % 2 == 0)
        return 0;
 
    for(i = 3; i <= n / i; i += 2)
         if(n % i == 0)
            return 0;
    return 1;
}

int main (){
int a,b,c,d=0,e,f=0,g;
int sosu[1000000]={},kaisu[100];
for(b=2;b<1000000;b++){
	if(IsPrime(b)==1)d++;
	sosu[b]=d;
}
while(scanf("%d",&a)!=EOF){
	kaisu[f]=sosu[a];

	f++;
	
}
for(e=0;e<f;e++)
printf("%d\n",kaisu[e]);
}