#include <stdio.h>
#include <stdlib.h>

int linSearch(int,int[],int);

int main(int argc, char** argv) {
    int size1;
    scanf("%d\n", &size1);
    int array1[size1];
    for(int i = 0; i < size1; i++)
        scanf("%d", &array1[i]);
    
    int size2;
    scanf("%d\n", &size2);
    int array2[size2];
    for(int i = 0; i < size2; i++)
        scanf("%d", &array2[i]);
    
    int searched[size2];
    for(int i = 0; i < size2; i++)
        searched[i] = 0;
    int count = 0;
    for(int i = 0; i < size2; i++){
        if(linSearch(size1, array1, array2[i]) && !linSearch(size2, searched, array2[i]))
            searched[count++] = array2[i];
    }
    
    printf("%d\n", count);
    return (EXIT_SUCCESS);
}

int linSearch(int size, int array[size], int searchVal){
    for(int i = 0; i < size; i++)
        if(array[i] == searchVal)
            return 1;
    return 0;
}

