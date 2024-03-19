#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int a[N];
    int f=1;
    for(int i=0;i<N;i++){
        scanf("%d",a+i);
        for(int j=0;j<i;j++){
            if(a[j] == a[i]){
                f=0;
                break;
            }
        }
    }
    if(f) printf("YES");
    else printf("NO");
}
