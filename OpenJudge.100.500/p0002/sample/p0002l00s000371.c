#include <stdio.h>
int main(void){
    int a,b,c;
    int i,j,tmp;
    
    scanf("%d", &i);
    for(j=0;j<i;j++){
        scanf("%d %d %d", &a, &b, &c);
        if(a>b){
            tmp=a;
            a=b;
            b=tmp;
        }
        if(b>c){
            tmp=b;
            b=c;
            c=tmp;
        }
        if(a>b){
            tmp=a;
            a=b;
            b=tmp;
        }
        if(a*a+b*b==c*c) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
