#include <stdio.h>
int main(void){
    int A,B;
    scanf("%d",&A);
    scanf("%d",&B);
    if(A>B) printf("%d",B-A);
    else if((A==B) || (B%2+A%2==0) || (B%3+A%3==0) || (B%5+A%5==0) || (B%7+A%7==0)) printf("%d",A+B);
    else printf("%d",A-B);
    return 0;
}
