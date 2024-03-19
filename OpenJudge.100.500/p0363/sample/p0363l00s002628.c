#include <stdio.h>
int main(void){
        int a,b,c,n;
        scanf("%d %d %d",&a,&b,&c);
        n=0;
        if(a>b){
                n=a;
                a=b;
                b=n;
}
        if(a>c){
                n=a;
                a=c;
                c=n;
}
        if(b>c){
                n=b;
                b=c;
                c=n;
}
        printf("%d %d %d\n",a,b,c);
        return 0;
}
