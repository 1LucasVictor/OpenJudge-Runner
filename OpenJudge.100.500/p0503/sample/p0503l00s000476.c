#include <stdio.h>
#include <stdlib.h>

int fact(const void *a,const void *b) {
    return *(int*)a - *(int*)b;
}

int main(){
    int n,count=0;
    scanf("%d", &n);
    
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    qsort(a,n,sizeof(int),fact);
    for(int i=1;i<n;i++){
        if(a[i-1]==a[i]){
            count++;
            break;
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
