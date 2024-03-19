#include <stdio.h>

int main(void){
    int a,b,c,n=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a==7||b==7||c==7){
        if((a==5&&b==5)||(b==5&&c==5)||(c==5&&a==5)){
            printf("YES\n");
            n++;
        }
    }
    if(n==0)printf("NO\n");
    return 0;
}