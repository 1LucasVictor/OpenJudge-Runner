#include <stdio.h>
int main(void){
    
    int num,i,j;
    int a[1000000];
    int hantei = 0;
    
    scanf("%d",&num);
    
    for(i=0; i<num; i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<num; i++){
        for(j=i+1; j<num; j++){
            if(a[i]==a[j]){
                hantei = 1;
            }
        }
    }

    if(hantei == 1){
        printf("NO");
    }else if(hantei == 0){
        printf("YES");
    }
    return 0;
}
