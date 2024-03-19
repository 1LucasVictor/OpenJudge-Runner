#include <stdio.h>

int main(void){
    int n,a,b,tx,tr;
    scanf("%d %d %d",&n,&a,&b);
    tr = n * a;
    if(b >= tr){
        printf("%d\n",tr);
        return 0;
    }else{
        printf("%d\n",b);
        return 0;
    }
}
