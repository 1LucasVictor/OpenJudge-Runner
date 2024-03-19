#include<stdio.h>

int main(void){
int N,a,b,c,i,j,temp;

scanf("%d",&N);
for(i=0;i<N;i++){
scanf("%d %d %d",&a,&b,&c);

if(a<b){temp=a;a=b;b=temp;}
if(a<c){temp=a;a=c;c=temp;}
if(b<c){temp=b;b=c;c=temp;}

if(a*a!=b*b+c*c){printf("NO\n");}else{printf("YES\n");}
}
return 0;
}