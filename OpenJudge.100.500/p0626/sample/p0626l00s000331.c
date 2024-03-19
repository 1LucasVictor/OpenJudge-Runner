#include<stdio.h>
#include<math.h>

int main(){
    int d,n,ans;

    scanf("%d %d",&d ,&n );



    if(n <= 99){
        ans = pow(100,d) * n;
    }else{
        ans = (pow(100,d) * n) + pow(100,d);
    }

    printf("%d",ans); 

}