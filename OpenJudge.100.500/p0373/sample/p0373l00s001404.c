#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int w,h;
    
    while(1){
        scanf("%d %d",&w,&h);
        
        if(w==0&&h==0){
            break;
        }
        for(int y=1;y<=w;y++){
            for(int x=1;x<=h;x++){
                if(x==1 || x==h || y==1 || y==w){
                    printf("#");
                }else{
                    printf(".");

                }
            }
            printf("\n");
            
        }
        
        printf("\n");
        
    }
    return 0;
}

