#include<stdio.h>
int main(){
int A,B,i,j,k,l;


    scanf("%d%d",&A,&B);

    i=A+B;
    j=A-B;
    k=A*B;
    if(A==B)
        printf("%d\n",k);

if(i>j&&i>=k&&i>=j&&i>k)
printf("%d\n",i);



if(j>i&&j>=k&&j>=i&&j>k)
printf("%d\n",j);

if(k>i&&k>=j&&k>=i&&k>j)
printf("%d\n",k);



return 0;
}

