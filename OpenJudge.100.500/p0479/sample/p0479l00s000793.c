#include <stdio.h>
int main(){
    int n, sum = 0;
    int A[200000];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &A[i]);
    
    for(int i = 1; i < n + 1; i++){
        sum = 0;
        for(int j = 0; j < n ; j++){
            if(A[j] == i) sum++;
        }
        printf("%d\n", sum);
    }
    return 0;
}