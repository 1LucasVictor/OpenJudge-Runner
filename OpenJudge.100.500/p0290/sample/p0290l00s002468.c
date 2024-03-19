#include <stdio.h>
#include <math.h>

int main(void){
    int n;
    scanf("%d\n",&n);
    int x;
    int count=0;
    int i;
    while(n--){
        scanf("%d\n",&x);
        if(x==2)count++;
        else if(x%2!=0){
            for(i=3;i<sqrt(x);i++){
                if(x%i==0)break;
            }
            if(i>=sqrt(x))count++;
        }
    }
    
    printf("%d\n",count);
    
    return 0;
}

