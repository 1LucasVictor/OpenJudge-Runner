#include <stdio.h>

int check(int a[], int n){
    int i, j;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(a[i]==a[j])  return 0;
        }
    }
    return 1;
}

int main(){
    int n,i;
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    if(check(a,n))  printf("YES");
    else    printf("NO");

    return 0;
}