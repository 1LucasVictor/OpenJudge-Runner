#include <stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    int so, su, m;
    so = A+B;
    su = A-B;
    m = A*B;
    if (so > su&& so > m){
        printf("%d\n", so);
    }
    else{
        if (su > so&& su > m){
            printf("%d\n", su);
        }
        else{
        printf("%d\n", m);
    
        }
    }
    

    return 0;
}