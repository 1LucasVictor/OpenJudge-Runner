#include <stdio.h>
int main(void){
    int a,b,c,d,e;
    e=0;
    scanf("%d %d %d\n",&a,&b,&c);
    for(d=a;d<=b;d++){
        if(c%d==0){
            e++;
        }
    }
    printf("%d\n",e);
    
    return 0;
}
