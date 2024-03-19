#include<stdio.h>

#define NUMBER 100

int main(){
    int num[NUMBER];
    int i;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(i=n-1;i>=0;i--){
        printf("%d",num[i]);
        if(i==0) break;
        printf(" ");
        }
    printf("\n");
    return 0;
}
