#include <stdio.h>
 
int main(void){
    int h,a;
    scanf("%d %d",&h,&a);
    int A;
    if(a>=h){
        A=1;
    }else{
        if(h%a==0){
            A=h/a;
        }else{
            A=h/a+1;
        }
    }
    printf("%d\n",A);
}
