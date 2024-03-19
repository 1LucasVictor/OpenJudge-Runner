#include<stdio.h>
int main(){
int A,B,i,j,k,t;
scanf("%d%d",&A,&B);
for(t=-1000;t<1000;t++){
i=A+B;
j=A-B;
k=A*B;
if(i>j&&i>k)
printf("%d\n",i);
if(j>i&&j>k)
printf("%d\n",j);
if(k>i&&k>j)
printf("%d\n",k);
return 0;
}
}
