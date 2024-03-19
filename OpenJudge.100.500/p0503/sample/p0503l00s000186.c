#include <stdio.h>

int main(){
    int N, i, j, k;
    int flag = 0;
    scanf("%d", &N);
    int A[N];
    for(i = 0;i < N;i++){
        scanf("%d", &A[i]);
    }

    for(j = 0;j < N;j++){
        for(k = 0;k < N;k++){
            if(j!= k){
                if(A[j] == A[k]){
                    flag = 1;
                    goto label;
                }
            }
        }
    }

    label:
    if(flag == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
