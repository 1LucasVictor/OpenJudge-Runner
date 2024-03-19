#include<stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==c&&b==d)
    printf("%d",b-c);
    else if(b<=c)
    printf("0");
    else if(d<=a)
    printf("0");
    else if(a<c&&b<d&&c<b)
    printf("%d",b-c);
    else if(c<a&&d<b&&a<d)
    printf("%d",d-a);
    else if(a<c&&c<d&&d<b)
    printf("%d",d-c);
    else if(c<a&&a<b&&b<d)
    printf("%d",b-a);
    return 0;
}