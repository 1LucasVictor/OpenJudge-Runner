#include<stdio.h>
#include<math.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int ans[n];
    int t;
    int h = 0;
    for(int i = 0;i <n -1;i++){
        scanf("%d",&a[i]);
        ans[i] = 0;
        if(i > 0){
            if(a[i] < a[i-1]){
                t = a[i];
                a[i] = a[i-1];
                a[i-1] = t;
            }
        }
    }
    for(int i = 0;i < n -1;i++){
        if(a[i] == h + 1){
            ans[h] += 1; 
        }else{
            h += 1;
            if(a[i] == h + 1){
                ans[h] += 1;
            }
        }
    }
    for(int i = 0;i < n-1;i++){
        printf("%d\n",ans[i]);
    }
    printf("0\n");
}