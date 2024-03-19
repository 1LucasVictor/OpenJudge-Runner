#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int j[n+10];
    int s[n+10];
    for(int i=1;i<=n;i++){
        s[i]=0;
    }
    for(int i=2;i<=n;i++){
        scanf("%d",&j[i]);
        s[j[i]]++;
    }
    for(int i=1;i<=n;i++){
        printf("%d\n",s[i]);
    }
    return 0;
}