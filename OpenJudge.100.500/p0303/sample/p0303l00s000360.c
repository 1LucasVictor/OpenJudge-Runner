#include<stdio.h>

int main(){
    int i, j;
    int n, k;
    int w[100000];
    int p=0;
    int count=0;
    int stack=0;
    scanf("%d %d", &n, &k);
    for(i=0;i<n;i++){
        scanf("%d", &w[i]);
        if(w[i]>p)p=w[i];
    }
    do{
        count = 0;
        stack = 0;
        for(i=0;i<n;i++){
            stack+=w[i];
            if(stack==p){
                count++;
                stack = 0;
            }else if(stack>p){
                count++;
                stack = 0;
                i--;
            }
            if(count==k && i<n-1){
                count=0;
                p++;
                break;
            }
        }
        if(n==i)break;
    }while(count!=k);
    printf("%d\n", p);
    return 0;
}
