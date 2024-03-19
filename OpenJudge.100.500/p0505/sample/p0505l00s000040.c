#include<stdio.h>

int main(){

    int H;
    int N;
    int i;
    int A;

    scanf("%d",&H);
    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d",&A);
        H -= A;
        if(H<=0)break;
    }

    if (H <= 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}