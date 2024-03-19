#include <stdio.h>
#include <stdlib.h>
int main(void){
    char a[1001],c[101],f[1001],m[1001];
    int b,d,e,i,j;
    scanf("%s",&a);
    scanf("%d",&b);
    for(i=0;i<b;i++){
        scanf("%s %d %d",&c,&d,&e);
         
        if(strcmp(&c,"print")==0){
            for(j=d;j<=e;j++) printf("%c",a[j]);
            printf("\n");
        }
         
        if(strcmp(&c,"reverse")==0){
            for(j=d;j<=e;j++) m[j] = a[j];
            for(j=d;j<=e;j++) a[j] = m[d+e-j];
        }
         
        if(strcmp(&c,"replace")==0){
            scanf("%s",&f);
            for(j=d;j<=e;j++) a[j] = f[j-d];
        }
    }
    return 0;
}
