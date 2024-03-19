#include <stdio.h>
int main(void){
    int n,a[100],flag=1;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    for(int i=0;i<n;i++){
        if(!(a[i]%2)){
               if(!(a[i]%3==0||a[i]%5==0)){flag=0;break;}
        }
    }
    
    if(flag){printf("APPROVED\n");}
    else {printf("DENIED\n");}
    
    return 0;
}
