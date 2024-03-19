#include<stdio.h>

int main(){
    int a,i,n[1000000];
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&n[i]);
    }
    int max = n[0];
    for(i=0;i<a-1;i++){
        if(max < n[i+1]){
            max = n[i+1];
        }
    }
    int min = n[0];
    for(i=0;i<a-1;i++){
        if(min > n[i+1]){
            min = n[i+1];
        }
    }
    int sum = 0;
    for(i=0;i<a;i++){
        sum += n[i];
    }
    printf("%d %d %d\n",min,max,sum);
    return 0;
}


