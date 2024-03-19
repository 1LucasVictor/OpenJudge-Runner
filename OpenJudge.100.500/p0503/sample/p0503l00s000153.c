
#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d", &n);
    
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(a[i]-a[j]==0){
                    count+=1;
                }
            }
        }
    }
    
    if(count==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}
