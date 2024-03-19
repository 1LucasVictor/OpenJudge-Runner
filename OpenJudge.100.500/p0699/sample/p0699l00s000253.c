#include<stdio.h>
    int main(){
    int n,a,b,i,j,max=0;
    scanf("%d%d%d",&n,&a,&b);
    if((n==5 && a==5 && b==7) ||(n==5 && a==7 && b==5)||(n==7 && a==5 && b==5)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }


        return 0;
}