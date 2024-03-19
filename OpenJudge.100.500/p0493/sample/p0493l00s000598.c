#include <stdio.h>

int main(){
    int x,sum=0;
    scanf("%d",&x);
    if(x>500){
        sum+=1000*(x/500);
    }
    sum+=5*((x%500)/5);
    printf("%d\n",sum);
    return 0;
}