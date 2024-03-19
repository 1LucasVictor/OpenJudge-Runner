#include <stdio.h>
int main(void){
    // Your code here!
    int A,B;
    int tasu,hiku,seki;
    int max;
    scanf("%d %d",&A,&B);
    
    tasu=A+B;
    hiku=A-B;
    seki=A*B;
    max=tasu;
    if(hiku>max)max=hiku;
    if(seki>max)max=seki;
    
    printf("%d",max);
    return 0;
}
