#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n=0;
    char buf[128];
    char d[128];

    ///標準入力からbufに格納
    fgets(buf , sizeof(buf), stdin);
    fgets(d,sizeof(d),stdin);

   for(int i=0; i<strlen(buf); i++){
       
       if (buf[i]!=d[i]){
           d[i]=buf[i];
           n++;
       }

   }

    printf("%d\n",n);

    return 0;
}