#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
int n;
int a[200005];
int ans[200005];
scanf("%d",&n);
for(int i=0;i<n-1;i++){
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++){
    ans[i]=0;
}
for(int i=0;i<n-1;i++){
    ans[a[i]-1]++;
}
for(int i=0;i<n;i++){
    printf("%d\n",ans[i]);
}


}