#include<stdio.h>
int array[1000000];
int main(){
    int n, i, j, count;
    while(scanf("%d",&n)!=EOF){
        count = 0;
        for(i=1;i<n+1;i++){
            array[i] = 1;
        }
        for(i=2;i<n+1;i++){
            if(array[i]){
                count += 1;
                for(j=2;j<n/i+1;j++){
                    array[i*j] = 0;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}