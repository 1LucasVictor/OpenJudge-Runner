#include<stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==c&&b==d)
    printf("%d",b-a);
    else if(b<=c)
    printf("0");
    else if(d<=a)
    printf("0");

    else if(a<c&&c<b&&b<d)
    printf("%d",b-c);
    else if(c<a&&a<d&&d<b)
    printf("%d",d-a);
    else if((a<c&&c<d&&d<b)||(a==c&&c<d&&d<b)||(a<c&&c<d&&d==b))
    printf("%d",d-c);
    else if((c<a&&a<b&&b<d)||(c==a&&a<b&&b<d)||(c<a&&a<b&&b==d))
    printf("%d",b-a);
    return 0;
}