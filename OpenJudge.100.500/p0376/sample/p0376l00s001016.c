#include <stdio.h>
int main(void){
    // Your code here!

    int n = 100;
    scanf("%d",&n);

    int a[n];
    for(int i=0; i<n; i++){
      scanf("%d",&a[i]);
    }
    for(int i=1; i<n; i++){
      printf("%d ",a[n-i]);
    }
    printf("%d\n",a[0]);

}

