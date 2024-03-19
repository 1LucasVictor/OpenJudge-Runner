#include <stdio.h>
int main (){

    int a,b,s,m,g;
    scanf("%d%d",&a,&b);
    s=a+b;
    m=a-b;
    g=a*b;
    if(s>=m&&s>=g){
        printf("%d\n",s);
    }
    else if(m>=s&&m>=g){
        printf("%d\n",m);
    }
    else{
        printf("%d\n",g);
    }
    return 0;
}