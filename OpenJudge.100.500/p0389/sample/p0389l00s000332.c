#include <stdio.h>
#include <string.h>

int main(void){
    char n[201]={};
    char temp[201];
    int m,i,h,len,j;

    while(1){
        scanf("%s",n);
        if(n[0] == '-') break;
        len=strlen(n);
        scanf("%d",&h);
        for(i=0;i<h;i++){
            scanf("%d", &m);
            for(j=0;j<len;j++) temp[j] = n[j];
            for(j=0;j<len-m;j++){
            n[j] = n[j+m];
            }
            for(j=0;j<m;j++){
                n[j+len-m] = temp[j];
            }
        }
        printf("%s\n",n);
        }
    return(0);
}