#include <stdio.h>
int main(void){
    int a,b,c,x;
    scanf("%d %d %d",&a,&b,&c);
    if(a<c&&c<b){
        printf("%d %d %d\n",a,c,b);
    }else if(b<a&&a<c){
        printf("%d %d %d\n",b,a,c);
    }else if(c<b&&b<a){
        printf("%d %d %d\n",c,b,a);
    }else if(b<c&&c<a){
        printf("%d %d %d\n",b,c,a);
    }else if(c<a&&a<b){
        printf("%d %d %d\n",c,a,b);
    }else{
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}