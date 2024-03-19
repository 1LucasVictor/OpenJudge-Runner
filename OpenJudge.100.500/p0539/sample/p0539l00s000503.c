#include<stdio.h>
int main(){
    int n,result,count=0;
    scanf("%d",&n);
    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            result=i*j;
            if(result==n) count++; 
        }
    }
    if(count>=1) printf("Yes\n");
    else printf("No\n");
    
    return 0;
}