#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include<math.h>
int main(){
    int t, p,cont=0;
    scanf("%d %d", &t,&p);
    for(int i=0; i<t; i++){
        int a, b,eq=0, pp=0,eq1=0,qq=0;
        scanf("%d %d", &a, &b);
        pp=pow(a, 2);
        qq=pow(b, 2);
        eq1= pp+ qq;
        eq= sqrt(eq1);
        if(eq == p)
            cont++;
    }
    printf("%d\n", cont);
    
    return 0;
}