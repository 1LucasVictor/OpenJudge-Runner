#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char a[200]={0};
    int x=0,i=0,y=0,z=0,j=0,l=0;
    
    while(1){
        scanf("%s",a);
        l=strlen(a);
        if(a[0]=='-'){
            break;
        }
        scanf("%d",&x);
        for(i=0;i<x;i++){
            scanf("%d",&y);
            z+=y;
        }
        for(j=0;j<l;j++){
            printf("%c",a[(z+j)%l]);
        }
        printf("\n");
        z=0;
    }
    return 0;
}