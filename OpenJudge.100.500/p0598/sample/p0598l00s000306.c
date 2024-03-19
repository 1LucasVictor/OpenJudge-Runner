#include <stdio.h>
int main(void){
    int A,B;
    scanf("%d",&A);
    scanf("%d",&B);
    if(A>B) printf("%d",B-A);
    else if(B%A==0) printf("%d",A+B);
    else printf("%d",B-A);
    return 0;
}
