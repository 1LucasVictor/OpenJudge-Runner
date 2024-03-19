#include <stdio.h>

int main (void)
{
int A,B,C;
B = 0;
C = 0;
 scanf("%d", &A);
 //printf("入力値 A=%d,B=%d\n",A,B);
for(int i = 1;i < 10;i++){
    for(int j = 1;j < 10;j++){
        B = i *j ;
        if(B = A){
            C = 1;
            break;
        }
        if(B = A){
            C = 1;
            break;
        }
    }
}

if(C = 1){
    printf("Yes");
}
else{
    printf("No");
}
 return 0;
}