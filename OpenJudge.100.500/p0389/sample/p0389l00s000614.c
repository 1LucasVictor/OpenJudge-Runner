#include <stdio.h>
#include <string.h>
int main () {
    char s[205];
    char c[205];
    int m,h;
    while(1){
        scanf("%s",s);
        if(!strcmp(s,"-")) return 0;
        scanf("%d",&m);
        for(int i=0;i<m;i++) {
            scanf("%d",&h);
            for(int j=0;j<h;j++) c[j]=s[j];
            for(int k=h,j=0;k<strlen(s);j++,k++) s[j]=s[k];
            for(int j=strlen(s)-h,k=0;j<strlen(s);k++,j++) s[j]=c[k];
        }
        printf("%s\n",s);
    }
}

