#include<stdio.h>
int main(){
    int A,B,add,sub,mul;
    scanf("%d %d",&A,&B);
    add=A+B;
    sub=A-B;
    mul=A*B;
    if(add>sub){
        if(add>mul){
            printf("%d\n",add);
        }
        else{
            printf("%d\n",mul);
        }
    }
    else{
        if(sub>mul){
            printf("%d\n",sub);
        }
        else{
            printf("%d\n",mul);
        }
    }
    return 0 ;
}
