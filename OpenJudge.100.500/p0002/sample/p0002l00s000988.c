#include <stdio.h>

int main(int argc,const char *argv[]){
    int a,b,c,n,ab,i,tmp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a>c){
            tmp=a;
            a=c;
            c=tmp;
        }else if(b>c){
            tmp=b;
            b=c;
            c=tmp;
        }
        ab=(a+b)*(a+b)/2;
        c=a*b+c*c/2;
        if(ab!=c){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
}