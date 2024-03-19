#include <stdio.h>
int main(void){
    
    int num,i;
    int a[1000000];
    int hantei = 0;
    
    scanf("%d",&num);
    
    for(i=0; i<num; i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<num; i++){
        if(a[i]<a[i+1]){
            a[i]=a[i+1];
        }
    }
    for(i=0; i<num; i++){
        if(a[i]==a[i+1]){
            hantei=1;
        }
    }
    

    if(hantei == 0){
        printf("NO");
    }else if(hantei == 1){
        printf("YES");
    }
    return 0;
}
