#include <stdio.h>

int main(){
    int a,b,c;
    int total = 0;
    scanf("%d %d %d",&a,&b,&c);
    for (int i=0;i<c+0.5;i++){
        if(i%a == 0 && i != 0){
            total += b;
        }
    }
    printf("%d\n",total);
}