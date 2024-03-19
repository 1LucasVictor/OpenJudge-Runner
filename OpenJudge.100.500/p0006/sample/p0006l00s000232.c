#include <stdio.h>
int main(){
    int a,i;
    float yen=100000;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        yen*=1.05f;}
    yen = (int)yen+5000;
    printf("%d\n",(((int)yen/10000)*10000));
}