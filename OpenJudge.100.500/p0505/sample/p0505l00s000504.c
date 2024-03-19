#include <stdio.h>
int main(void){
    int H, N;
    int A;
    scanf("%d %d", &H, &N);
    for(int i=0; i < N; i++){
        scanf("%d", &A);
        H-=A;
    }
    printf("%s", (H >= 0)? "No": "Yes");
    
    return 0;
}
