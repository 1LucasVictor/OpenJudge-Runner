#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define F(i,a,n) for(int i=a; i<n; i++)


int main(){
    int n;
    scanf("%d",&n);
    int n1,n2,n3;
    F(i,0,3){
        n1=n%10;
        n2=(n/10)%10;
        n3=(n/100)%10;
    }
    if(n1==7 || n2==7 || n3==7){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}