# include <stdio.h>

int main(){
    int A, B, maior=-1001,i, m[3], k;

    scanf("%d %d", &A, &B);
    m[0] = A+B;
    m[1] = A-B;
    m[2] = A*B;
    for(i=0; i<3; i++){
        if(m[i]>= maior){
            maior = m[i];
        }
    }
    printf("%d", maior);
    return 0;
}