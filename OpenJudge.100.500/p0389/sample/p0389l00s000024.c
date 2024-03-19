#include <stdio.h>
#include <string.h>

int main(void){
    char c[201];
    int i,j,k,m,h,l;

    while(1){
        scanf("%s",c);
        if(!strcmp(c,"-")) break;

        l=strlen(c);
        
        scanf("%d",&m);
        
        for(i=0;i<m;i++){
            scanf("%d",&h);
            for(j=0;j<h;j++){
                char tmp=c[0];
                for(k=1;k<l;k++){
                    c[k-1]=c[k];
                }
                c[l-1]=tmp;
            }
        }

        printf("%s\n",c);
    }

    return 0;
}