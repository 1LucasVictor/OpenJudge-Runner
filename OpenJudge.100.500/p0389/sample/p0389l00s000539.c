#include <string.h>
#include <stdio.h>
int main(void){
    char a[201];
    char b[201];
    int shuffle,h,i;
     
    while(1){
        scanf("%s",a);
        if(strcmp(a,"-")==0) break;
         
        strcpy(b,a);
         
        scanf("%d",&shuffle);
         
        for(i=0; i<shuffle; i++){
            scanf("%d",&h);
            strcpy(a,&b[h]);
            strncpy(&a[strlen(a)],b,h);
            strcpy(b,a);
        }
         
        printf("%s\n",a);
    }
    return 0;
}
