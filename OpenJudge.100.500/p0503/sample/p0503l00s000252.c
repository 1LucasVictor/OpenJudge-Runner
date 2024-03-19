#include <stdio.h>
int main(void){
    
    int num,i,j,tmp=0;
    int a[1000000];
    int hantei = 0;
    
    scanf("%d",&num);
    
    for(i=0; i<num; i++){
        scanf("%d",&a[i]);
    }
    
    for(i=0; i<num-1; i++){
        for(j=i+1; j<num; j++){
            if(a[i]<a[j]){
                tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }
    for(i=0; i<num; i++){
         if(a[i]==a[i+1]){
            hantei = 1;
        }
    }


    if(hantei == 1){
        printf("NO");
    }else if(hantei == 0){
        printf("YES");
    }
    return 0;
}
