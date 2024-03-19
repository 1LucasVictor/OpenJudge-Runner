#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char a[201],b[201];
    int i,h,m;
    
    while(1){
        scanf("%s",a);
        if(strcmp(a,"-") == 0)break;
        strcpy(b, a);
        scanf("%d",&m);
        
        for(i=0; i<m; i++){
            scanf("%d",&h);
            strcpy(a, &b[h]);
            strncpy(&a[strlen(a)], b, h);
            strcpy(b, a);
        }
        printf("%s\n",a);
        
    }
    return 0;
}

