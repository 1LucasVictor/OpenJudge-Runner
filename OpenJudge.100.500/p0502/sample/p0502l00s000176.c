#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ll long long 
int cmp(const void*a,const void*b){return *(int*)a-*(int*)b;}
void ap(void){
    printf("APPROVED\n");
}
void de(void){
    printf("DENIED\n");
}
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            count++;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            if(a[i]%3==0||a[i]%5==0)
                ans++;
        }
    }
    if(ans==count){
        ap();
    }
    else{
        de();
    }
    return 0;
}