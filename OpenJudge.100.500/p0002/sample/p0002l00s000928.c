#include<stdio.h>
 
int main(void){
int N,i,a,b,c,d;
scanf("%d\n",&N);
for(i=0;i<N;i++){
scanf("%d %d %d\n",&a,&b,&c);
if(a>b) d=a,a=b,b=d;
if(b>c) d=b,b=c,c=d;
if(c*c==a*a+b*b) printf("YES\n");
else printf("NO\n");
}
    return 0;
}