#include <stdio.h>
#include <string.h>

int main(){
    int n,cnt;
    cnt=0;
    scanf("%d",&n);
    for(int i=1;i<10;i++){
        if(n%i==0&&0<n/i&&n/i<10){
            cnt=1;
        }

    }

    if(cnt==1){
        printf("Yes");
    }else{
        printf("No");
    }

    


    return 0;

}