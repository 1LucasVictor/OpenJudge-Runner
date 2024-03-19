#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int a , b ,x  ;
    scanf("%d%d%d",&x,&a,&b);

    int ab = abs(b-a) ;
    if(a>b){
        printf("delicious");
    }else{
        if(ab<=x){
            printf("safe");
        }else{
            printf("dangerous");
        }
    }

}
