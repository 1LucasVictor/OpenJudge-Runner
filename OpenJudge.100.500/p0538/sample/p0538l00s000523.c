#include<stdio.h>
int main(){
    int a,b,c;
        scanf("%d %d",&a,&b);
        if(a>9||b>9)printf("-1");
        else {c=a*b;
        if(c>81)printf("-1");
        else printf("%d",c);}
    return 0;
}