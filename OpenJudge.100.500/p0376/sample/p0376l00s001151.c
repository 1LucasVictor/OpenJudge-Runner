#include<stdio.h>

int main(){
    int num = 0;
    int i;
    int j;

    scanf("%d",&num);
    int arry[num];
    int arryb[num];
    
    for(i=0;i<num;i++){
        scanf("%d",&arry[i]);
    }
    j=num-1;
    for(i=0;i<num;i++){
        arryb[j]=arry[i];
        j=j-1;
    }
    
    for(i=0;i<num;i++){
        printf("%d",arryb[i]);
        
        if(i != num-1){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}
