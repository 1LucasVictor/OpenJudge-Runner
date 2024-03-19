#include<stdio.h>
int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&c>a){
        if(c<b){
            printf("%d %d %d\n",a,c,b);
        }
        else if(b<c){
            printf("%d %d %d\n",a,b,c);
    }
    }
    if(b<a&&b<c){
        if(a<c){
            printf("%d %d %d\n",b,a,c);
        }
        else if(c<a){
            printf("%d %d %d\n",b,c,a);
        }
        }
    if(c<a&&c<b){
        if(a<b){
            printf("%d %d %d\n",c,a,b);
        }
        else if(b<a){
            printf("%d %d %d\n",c,b,a);
        }
        }
    return 0;
}