#include<stdio.h>
int main (void){
    int a,b,c,d,i,k;
    scanf("%d",&k);
    for(i=0;i<k;i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&a>c){
            d=c;
            c=a;
            a=d;
        }
        else if(b>a&&b>c){
            d=c;
            c=b;
            b=d;
        }
        if(a*a+b*b==c*c){
            printf("YES\n");
        }
        else if(a*a+b*b!=c*c){
            printf("NO\n");
        }
    }
return 0;
}