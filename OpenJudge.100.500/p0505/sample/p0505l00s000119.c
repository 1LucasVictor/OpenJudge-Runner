#include<stdio.h>
int main(void){
    int H,N;
    scanf("%d %d",&H,&N);
    int a[N],sum=0;
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<N;i++){
        sum = sum + a[i];
    }
    if(sum>=H){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
