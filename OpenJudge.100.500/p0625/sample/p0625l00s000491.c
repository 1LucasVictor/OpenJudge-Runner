#include<stdio.h>
int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a-b==1 || a-b==-1 || a-b==0){
        printf("Yay!");
    } else {
        printf(":(");
    }
    return 0;
}
