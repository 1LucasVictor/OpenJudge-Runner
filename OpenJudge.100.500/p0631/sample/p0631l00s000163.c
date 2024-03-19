#include<stdio.h>
int main()
{
    int A,B,X,S;
    scanf("%d%d%d",&A,&B,&X);
    S=A+B;
if(A<=X&&X<=S){
    printf("YES\n");
}
else{
    perror("NO\n");
}
    return 0;
}