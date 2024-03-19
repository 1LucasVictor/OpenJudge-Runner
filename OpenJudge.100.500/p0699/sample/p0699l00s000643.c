#include<stdio.h>

int main(){
    int a[3];
    scanf("%d %d %d",&a[0],&a[1],&a[2]);

    for(int i=0;i<2;i++){
        for(int j=2;j>i;j--){
            if(a[j-1]>a[j]){
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        }
    }
    if(a[0]==5&&a[1]==5&&a[2]==7){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}