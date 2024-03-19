#include <stdio.h>

int main(int argc,const char *argv[]){
    int a,b,c,n,c2,ab,i,tmp;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a>c){
            tmp=a;
            a=c;
            c=tmp;
        }
        if(b>c){
            tmp=b;
            b=c;
            c=tmp;
        }
        
        c2=c*c;
        ab=a*a+b*b;
        
    
        if(ab!=c2){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
    }
    return 0;
    }