#include<stdio.h>
char f[1000000000]={};
int a,n,i;
int main(){
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(f[a]){puts("NO");return 0;}
        f[a]=1;
    }
    puts("YES");
    return 0;
}