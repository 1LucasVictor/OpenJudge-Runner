#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char A[3];
    scanf("%s",A);
    if(A[0] == A[1] && A[1] == A[2]){
        printf("%s","No");
    }else printf("%s","Yes");
    return 0;
}