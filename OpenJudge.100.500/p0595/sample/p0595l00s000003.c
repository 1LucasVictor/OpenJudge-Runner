#include<stdio.h>
int main(){
    int a,b,c,i,tp=0;
    scanf("%d %d %d",&a,&b,&c);
    for(i=0;i<c;i++){
        tp++;
        while(a%tp!=0 || b%tp!=0)
            tp++;
    }
    printf("%d",tp);
    return 0;
}
