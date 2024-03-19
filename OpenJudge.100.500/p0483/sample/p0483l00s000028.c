#include<stdio.h>
int main(){
    
    int x,y,z,n;
    scanf("%d",&n);
    
    if(100<=n && n<=999){
        x=n%10;
        n=n/10;
        y=n%10;
        z=n/10;
        if(x==7 || y==7 || z==7)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
