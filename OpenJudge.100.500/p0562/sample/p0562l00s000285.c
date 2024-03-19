#include <stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int c,d;
    c=1;
    while(c<b){c+=a-1;
    d++;}
    printf("%d\n",d);
    return 0;    
}