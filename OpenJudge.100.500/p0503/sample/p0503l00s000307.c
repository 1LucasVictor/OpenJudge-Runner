#include<stdio.h>

int main(){
    int i = 0,j=0;
    int n,a,b;
    int flag = 0;

    scanf("%d",&n);
    int A[n];
    for(i = 0 ; i < n ; i++){
        scanf("%d",&A[i]);
    }
    //printf("A\n");

    
    for(i = 0; i < n-1 ; i++){
        for(j = i+1 ; j < n ; j++){
            if(A[i] == A[j]){
                printf("NO\n");
                flag = 2;
                break;
            }
            flag = 1;
        }
        if(flag == 2){
            break;
        }
    }
    if(flag == 1){
        printf("YES\n");
    }
}
