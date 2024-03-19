#include<stdio.h>
#include<math.h>

int main(){
    int i, j;

    while(scanf("%d %d", &i, &j)!=EOF){
       printf("%d\n", (int)floor(log10(i+j)+1));
    }

    return 0;
}