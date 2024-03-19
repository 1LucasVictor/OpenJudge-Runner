#include<stdio.h>


int main(){
    int a,b;
    int i;

    scanf("%d %d",&a,&b);

    if( a > 8 || b > 8 ){
        printf(":(\n");
    }
    else{
        printf("Yay!\n");
    }

    return 0 ;

}