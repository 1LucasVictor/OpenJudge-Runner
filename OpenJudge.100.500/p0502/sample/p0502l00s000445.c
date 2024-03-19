#include <stdio.h>
int main(){
    int n,i,b,c;
    scanf("%d",&n);
    int a[n];
    b =0,c=0;
    for(i =0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i] %2 ==0){
            if(a[i]%3 ==0 || a[i]%5 ==0){
                c++;
            }
            b++;
        }
    }
    
    if(b==c){
        printf("APPROVED");
    }else{
        printf("DENIED");
    }
    
    return 0;
}
