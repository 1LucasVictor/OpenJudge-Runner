#include<stdio.h>
int main(void){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b&&a<c){
        if(b==c)
            printf("%d %d %d\n",a,b,c);
        if(b<c)
            printf("%d %d %d\n",a,b,c);
        if(c<b)
            printf("%d %d %d\n",a,c,b);
    }
    else if(a<c&&a<b){
        if(b==c)
            printf("%d %d %d\n",a,b,c);
        if(b<c)
            printf("%d %d %d\n",a,b,c);
        if(c<b)
            printf("%d %d %d\n",a,c,b);
    }
    else if(b<a&&b<c){
        if(a==c)
            printf("%d %d %d\n",b,a,c);
        if(a<c)
            printf("%d %d %d\n",b,a,c);
        if(c<a)
            printf("%d %d %d\n",b,c,a);
    }
    else if(b<c&&b<a){
        if(a==c)
            printf("%d %d %d\n",b,a,c);
        if(a<c)
            printf("%d %d %d\n",b,a,c);
        if(c<a)
            printf("%d %d %d\n",b,c,a);
    }
    else if(c<a&&c<b){
        if(b==a)
            printf("%d %d %d\n",c,a,b);
        if(a<b)
            printf("%d %d %d\n",c,a,b);
        if(b<a)
            printf("%d %d %d\n",c,b,a);
    }
    else if(c<b&&c<a){
        if(b==a)
            printf("%d %d %d\n",c,a,b);
        if(a<b)
            printf("%d %d %d\n",c,a,b);
        if(b<a)
            printf("%d %d %d\n",c,b,a);
    }
    else if(a==b&&a==c&&b==c){
            printf("%d %d %d\n",a,c,b);
    }
return 0;
}