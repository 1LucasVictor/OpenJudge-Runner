#include<stdio.h>
int main(){
    int a,b,tempRes;
    double tRes;
    scanf("%d %d", &a,&b);
    tRes = (a+b)/2.0;
    tempRes = (a+b)/2;
    if(tRes == tempRes){
        printf("%d\n", tempRes);
    }
    else{
        printf("IMPOSSIBLE\n");
    }
    return 0;
}
