#include <stdio.h>

int main(void){
    int a,b,c;
    int reslut=0;
    scanf("%d %d %d\n",&a,&b,&c);
    for (int x=a; x<=b; x++){
        if(c%x==0){
            reslut++;
        }
    }
    printf("%d\n",reslut);
}
