#include<stdio.h>

int main(){
    int a,b,i=0;
    scanf("%d %d",&a,&b);
    while(1){
        i++;
        if(b<=((a-1)*i+1)){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}
