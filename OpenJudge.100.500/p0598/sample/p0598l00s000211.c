#include<stdio.h>
int main(){



int A,B,a,b;
scanf("%d %d",&A,&B);
a=A+B;
b=B-A;
if(B%A==0){
    printf("%d\n",a);
}

else{
    printf("%d\n",b);
}






return 0;
}