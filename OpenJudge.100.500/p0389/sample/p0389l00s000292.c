#include <stdio.h>

int main(int argc, const char * argv[]) {
    char c[250]={0};
    char a[250] ={0};
    int h;
    int i,j,k,m;

    while(1){
        i=0;
        while(1){
            
            scanf("%c",&c[i]);
            if(c[i] == '\n') {
                break;
            }
            i++;
        }
        
        if ( i == 1 && c[0] == '-' ) break;
        
        scanf("%d",&m);
        
        for(j=0;j<m;j++){
            scanf("%d", &h );
            
            for(k=0;k<i-h;k++) {
                a[k] = c[h+k];
            }
            for(k=0;k<h;k++){
                a[i-h+k] = c[k];
            }
            for(k=0; k<i; k++){
                c[k] = a[k];
            }
        }
        for(k=0;k<i;k++) {
            printf("%c",c[k]);
        }
        printf("\n");
        scanf("%c",&c[0]);
    }
    return 0;
}
