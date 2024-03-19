#include<stdio.h>
int main(void){
int n,r,a,b,c;
int card[4][13];
char e;
for(a=0;a<4;a++)for(b=0;b<13;b++)card[a][b]=0;
scanf("%d",&n);
for(a=0;a<n;a++){
scanf("%*c%c",&e);
if(e=='S')c=0;
if(e=='H')c=1;
if(e=='C')c=2;
if(e=='D')c=3;
scanf("%d",&r);
card[c][r-1]=1;
}
for(a=0;a<4;a++){
for(b=0;b<13;b++){
if(card[a][b]==0){
if(a==0)e='S';
if(a==1)e='H';
if(a==2)e='C';
if(a==3)e='D';
r=b+1;
printf("%c %d\n",e,r);
}
}
}
return 0;
}
