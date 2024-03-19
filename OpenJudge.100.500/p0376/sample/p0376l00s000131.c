#include<stdio.h>
int main(){
    int a[100],n,i=0,j;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&a[i]);
        i++;                             
    }
    j=i-1;                                  
    while(0<=j){
        printf("%d",a[j]);
        if(j!=0){
            printf(" ");
        }
        j--;
    }   
    printf("\n");
}