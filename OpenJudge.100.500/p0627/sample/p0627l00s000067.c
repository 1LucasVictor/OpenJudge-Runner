#include<stdio.h>

int main(){
    int a, b, valuePlus, valueMinus, valueProduct;
    scanf("%d", &a);
    scanf("%d", &b);

    valuePlus = a + b;
    valueMinus = a - b;
    valueProduct = a * b;

    if(a == 0 && b == 0){
        printf("0\n");
    }else{
        if(valuePlus > valueMinus && valuePlus > valueProduct){
            printf("%d\n", valuePlus);
        }else if(valueMinus > valuePlus && valueMinus > valueProduct){
            printf("%d\n", valueMinus);
        }else if(valueProduct > valuePlus && valueProduct > valueMinus){
            printf("%d\n", valueProduct);
        }
    }

    return 0;
}