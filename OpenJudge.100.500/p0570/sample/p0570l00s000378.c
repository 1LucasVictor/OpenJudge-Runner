#include<stdio.h>
int main(void){
long long int A, B;
scanf("%lld%lld", &A, &B);
if(A+B%2==1){
    printf("IMPOSSIBLE\n");
}else{
    printf("%d\n",(A+B)/2);
}
return 0;
}