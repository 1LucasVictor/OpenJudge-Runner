#include <stdio.h>
int main(){
    int a,b,c,d,e,f,g,h;
    scanf("%d",&a);
    b=a/1000;
    b=b*1000;
    c=a/100;
    c=c*100;
    d=a/10;
    d=d*10;
    e=(c-b)/100;
    f=b/1000;
    g=(d-c)/10;
    h=a-d;
    if(f==e||e==g||g==h){
        printf("Bad");
    }else{
        printf("Good");
    }
    return 0;
}