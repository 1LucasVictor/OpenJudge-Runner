#include <stdio.h>

void mms();
 
int main(void) {
    
    mms();
    return 0;
}

void mms(){
	int i,n,x[10000];
    int min, max, sum;
     
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&x[i]);
    }
     
    min = x[0]; max = x[0]; sum = x[0];
     
    for(i = 0;i < n;i++){
        if(max < x[i+1]){
            max = x[i+1];
        }else{}
    }
     
    for(i = 0;i < n-1;i++){
        if(min > x[i+1]){
            min = x[i+1];
        }else{}
    }
     
    for(i = 0;i < n;i++){
        sum = sum + x[i+1];
    }
     
    printf("%d %d %d\n",min,max,sum);
}