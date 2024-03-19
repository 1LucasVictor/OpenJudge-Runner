#include <stdio.h>
int main(){
    int H,A,count;
    scanf("%d %d",&H,&A);
    if(H%A == 0){
        count = H/A;
    }else{
    count = (H/A) +1;
    }
    printf("%d",count);
    return 0;
}
