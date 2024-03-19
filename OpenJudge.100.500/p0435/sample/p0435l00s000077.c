#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define rep(i,r,l) for(int i = r; i < l; i++)
#define elif else if
#define ll long long

int nextint(void){int n;scanf("%d",&n);return n;}
void printint(int d){printf("%d\n",d);}


int main(void){ 

    
    int n,d;
    scanf("%d %d",&n,&d);
    int a,b;
    int count=0;
    rep(i,0,n){
        scanf("%d %d",&a,&b);
        if((a*a) + (b*b) <= (d*d))count++;
    }
    printint(count);
    return 0;
}

