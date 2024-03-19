#include<stdio.h>
int main(void){
    int a,b,c,d,e,f;
    while(1){
            f=0;
    scanf("%d %d",&a,&b);
    if(a==0&&b==0)break;
    for(c=0;c<a;c++){
        for(d=0;d<a;d++){
            for(e=0;e<a;e++){
                if(c!=d&&d!=e&&c!=e){
                    if(c+d+e+3==b){
                        f=f+1;
                    }
                }
            }
        }
    }printf("%d",f/6);
    }
return 0;
}