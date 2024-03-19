#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main(){
    int k, a, b, cont=0;
    scanf("%d", &k);
    scanf("%d %d", &a, &b);
    for(int i=a; i<b+1; ++i){
        if(i%k==0)
            cont=1;
    }
    if(cont ==1)
        printf("OK\n");
    else
        printf("NG\n");
    return 0;
}
