#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int IsPrime(int n);

int main () {
	int a,b=9,c=9,d=9,e=9,f=0,g=1000,h;
	int kaisu[1000];
	
	for(g=0;g<1000;g++){kaisu[g]=0;}

	while(scanf("%d",&a)!=EOF){

		for(b=2;b<=a;b++){
			/*for(c=2;c<b;c++){
//				printf("%d",c);
				if(b%c==0){ break;}
			}
			if(c>=b){
				kaisu[f]++;
			}
		*/
			if(IsPrime(b)==1)kaisu[f]++;

		}
		f++;
	}

	for(h=0;h<f;h++){
		printf("%d\n",kaisu[h]);
	}
	

	//scanf("%d",&a);
	return 0;
}

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