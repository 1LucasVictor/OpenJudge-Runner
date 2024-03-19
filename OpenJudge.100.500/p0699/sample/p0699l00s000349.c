#include <stdio.h>

int check_num(int a, int n) {
    if(a==n) return 1;
    else return 0;
}

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int c5=0, c7=0;
    c5 += check_num(A, 5);
    c5 += check_num(B, 5);
    c5 += check_num(C, 5);
    c7 += check_num(A, 7);
    c7 += check_num(B, 7);
    c7 += check_num(C, 7);

    if((c5==2)&&(c7==1)) printf("YES\n");
    else printf("NO\n");

    return 0;

}