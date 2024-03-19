#include <stdio.h>
int main(){
    int size,i,j,flag=0;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        for(j=4;j>=0;j--){
            if(i==j)
            continue;
            if(arr[i]==arr[j]){
                flag=1;
                printf("%d  \n",j);
            }
        }
    }
    if(flag==1)
        printf("NO");
    else
        printf("YES");
    return 0;
}
