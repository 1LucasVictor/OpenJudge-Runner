#include <stdio.h>
int main(){

int A = 0;
int B = 0;
scanf("%d%d", &A, &B);


if((A - B) > (16 - (A + B))) {
    printf(":(");
    }
else if((B -A) > (16 - (A + B))){
    printf(":(");
}
else{
    printf("Yay!");}


return 0;}
