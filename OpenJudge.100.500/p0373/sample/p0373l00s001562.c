#include <stdio.h>

int main(int argc, const char * argv[])
{
    int depth,width,i,j;
    
    while(1){
        scanf("%d %d",&depth,&width);
        
        if(depth==0 && width==0){
            break;
        }
        
        for(i = 0;depth > i;i+=1){
            
            for(j = 0;width > j;j+=1){
                if(i==0||j==0||j==width-1||i==depth-1){
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