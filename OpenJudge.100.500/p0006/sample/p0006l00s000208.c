#include <stdio.h>
int main(){
    int a,i,yen=100000;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        yen*=1.05;
    }
    printf("%d\n",((yen+5000)/10000)*10000);
}