#include<stdio.h>
int main(){
    int n,a=0;
    scanf("%d",&n);
    for(int i=9;i>0;i--){
        if((n%i==0)&&((n/i)>0)&&(n/i<=9)){
            a++;
            break;
        }
    }
    if(a==1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
