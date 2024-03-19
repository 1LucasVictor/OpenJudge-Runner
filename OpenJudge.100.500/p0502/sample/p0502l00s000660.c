#include <stdio.h>

int check(int n, int a[]){
    int i, num;
    for (i=0;i<n;i++){
        num=a[i];
        if ((num%2)==0){
            if (((num%3)!=0)&&((num%5)!=0)){
                return 1;
            }
        }
    }
    return 0;
}

int main(void){
    int n, i, judge;
    scanf("%d", &n);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    judge = check(n, a);
    if (judge==1){
        printf("DENIED");
    }
    else{
        printf("APPROVED");
    }
    return 0;
}