#include<stdio.h>
#include<math.h>

int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    if(B%A==0){
        printf("%d",A+B);
    }
    else{
        printf("%d",B-A);
    }
    return 0;
}
