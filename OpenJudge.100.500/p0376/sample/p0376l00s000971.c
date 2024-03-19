#include <stdio.h>

int main(){
    int n[100];//要素数100のn
    int a;  //入力する要素数
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    for(int i=a-1;i>0;i--){
        printf("%d ",n[i]);
    }printf("%d",n[0]);
    printf("\n");
    return 0;
}

