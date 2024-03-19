#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(void){
    char a[201];
    char b[201];
    char d[201];
    int i,j,c,alen,blen,h;
    while(1){
        scanf("%s",a);
        if(a[0] == '-' ) break;
        scanf("%d",&h);
        for(j=0;j<h;j++){
            scanf("%d",&c);
            alen = strlen(a);
            for(i = 0;i<c;i++){
                d[i] = a[i];
            }
            for(i = 0;i<(alen -c);i++){
                a[i] = a[i+c];
            }
            for(i=0;i<c;i++){
                a[i + (alen -c)] = d[i];
            }
        }
        printf("%s\n",a);


    }
    return 0;
}