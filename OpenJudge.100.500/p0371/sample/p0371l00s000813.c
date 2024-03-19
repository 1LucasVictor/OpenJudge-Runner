#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n , a, i;
    int min=1000001 , max=-1000001, sum=0;
    
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &a);
        if(a>max){
            max=a;
        }
        if(a<min){
            min=a;
        }
        sum += a;
    }
    printf("%d %d %d\n", min, max, sum);
    return 0;
}
