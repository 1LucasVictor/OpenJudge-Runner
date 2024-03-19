#include<stdio.h>
int main(){
    int n,a[10][10],b=0;
    scanf("%d",&n);
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            a[i][j]=i*j;
            if(a[i][j]==n)b+=1;
        }
    }
    if(b==0)printf("No\n");
    else printf("Yes\n");
    return 0;
}