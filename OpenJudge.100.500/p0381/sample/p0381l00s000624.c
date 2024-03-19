#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i=0,j=0,k=0,x=0,y=0,count=0;
    while(1){
        scanf("%d %d",&x,&y);
        if(x==0 && y==0){
            break;
        }
        for(i=1;i<x;i++){
            for(j=1;j<x;j++){
                for(k=1; k<x; k++){
                    if(i+j+k==y && i!=j && i!=k && j!=k){
                        count++;
                    }
                }
            }
        }
        printf("%d\n",count/3);
    }
    return 0;
}