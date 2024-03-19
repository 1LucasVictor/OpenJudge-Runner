#include<stdio.h>
int main(){





int A,B,a;
scanf("%d %d",&A,&B);


a=(A+B)/2;
if(A%2==0 && B%2==0 || A%2!=0 && B%2!=0 ){
    printf("%d\n",a);
}

else{
    printf("IMPOSSIBLE\n");

}

return 0;
}