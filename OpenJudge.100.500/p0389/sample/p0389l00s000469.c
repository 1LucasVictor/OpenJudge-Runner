#include <stdio.h>
#include <string.h>
 
int main(void) {
    char n[200];
    int m,h,l,i,s;
    while(scanf("%s",n)!=EOF  &&  strcmp(n,"-")){
        l=strlen(n);
        scanf("%d",&m);
        for(s=0;m;m--){
            scanf("%d",&h);
            s+=h;
        }
        s%=l;
        for(i=0;i<l;i++){
            printf("%c",n[(s+i)%l]);
        }
        printf("\n");
    }
    return 0;
}
