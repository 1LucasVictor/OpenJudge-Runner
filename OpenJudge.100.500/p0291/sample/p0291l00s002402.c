#include <stdio.h>
#include <stdlib.h>

int max(int,int);

int main(int argc, char** argv) {
    int size;
    scanf("%d\n", &size);
    if(size < 2 || size > 200000)
        return (EXIT_FAILURE);
    int array[size];
    
    for(int i = 0; i < size; i++){
        scanf("%u", &array[i]);
        if(array[i]<1 || size > 100000000)
            return(EXIT_FAILURE);
    }
    
    int maxVal = array[size - 1] - array[size - 2];
    
    for(int j = size - 1; j >= 1; j--){
        for(int i = j - 1; i >= 0; i--){
            maxVal = max(maxVal, array[j] - array[i]);
            if(array[i] > array[j])
                j = i;
        }
    }
    
    printf("%d\n", maxVal);
    
    return (EXIT_SUCCESS);
}

int max(int a, int b){
    if(a > b)
        return a;
    return b;
}

