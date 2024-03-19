#include <stdio.h>

int main() {
    int n,i,a,max=0,min=0,add=0;
    scanf("%d", &n);
    for(i = 0;i<n;i++){
        scanf("%d",&a);
        if(i == 0){
        max = a;
        min = a;
        add = a;
        }else{
            if(max < a) max = a;
        if(min > a) min = a;
        add = add +a;
        }
    }
    printf("%d %d %d\n",min,max,add);
    return 0;
}

