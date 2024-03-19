#include<stdio.h>
int main(void){
int k[4][13];
int i,n,r,l;
for(i=0;i<4;i++){
for(n=0;n<13;n++){
k[i][n]=0;
}
}
char c;
scanf("%d",&l);
for(i=0;i<l;i++){
scanf("%c",&c);
scanf("%c %d",&c,&r);
if(c=='S'){k[0][r-1]=1;}
else if(c=='H'){k[1][r-1]=1;}
else if(c=='C'){k[2][r-1]=1;}
else if(c=='D'){k[3][r-1]=1;}
}
for(i=0;i<4;i++){
for(n=0;n<13;n++){
if(k[i][n]!=1){
if(i==0){printf("S %d\n",n+1);}
else if(i==1){printf("H %d\n",n+1);}
else if(i==2){printf("C %d\n",n+1);}
else if(i==3){printf("D %d\n",n+1);}
}
}
}
return 0;
}