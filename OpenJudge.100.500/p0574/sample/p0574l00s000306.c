#include <stdio.h>

int main(){
    int x[4],a,b=0;
    scanf("%d",&a);
    for(int i=0;i<4;i++){
        x[i] = a%10;
        a/=10;
    }
    for(int i=1;i<4;i++){
        if(x[i] == x[i-1]) b++;
    }
    if(b!=0){
        printf("Bad");
    }
    else printf("Good");
}
