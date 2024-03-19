#include<stdio.h>
int main(){
int A,B,i,j,k;


    scanf("%d%d",&A,&B);
    if(A>=-1000&&A<=1000&&B>=-1000&&B<=10000){
    i=A+B;
    j=A-B;
    k=A*B;

if(i>=j&&i>=k)
printf("%d\n",i);



if(j>=i&&j>=k)
printf("%d\n",j);

if(k>=i&&k>=j)
printf("%d\n",k);

return 0;
}
}
