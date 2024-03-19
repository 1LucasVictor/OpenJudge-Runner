#include <stdio.h>

int max(int,int,int);

int main(void){
    int a,b;
    int i;
    scanf("%d %d",&a,&b);
    
    int c,d,e;
    c=a+b;
    d=a-b;
    e=a*b;
    
    int ans;
    ans=max(c,d,e);
    printf("%d",ans);
    
    return 0;
}

int max(a,b,c){
    int i;
    if(a>=b){
        if(a>=c){
            return a;
        }else{
            return c;
        }
    }else if(a>=c){
        return b;
    }else{
        if(b>c){
            return b;
        }else{
            return c;
        }
    }
}