#include <stdio.h>
#include <stdlib.h>

int fibonacci(int,int,int[]);

int main(int argc, char** argv) {
    int seqNum;
    scanf("%d",&seqNum);
    int fibNum[seqNum];
    for(int i = 0; i < seqNum; i++)
        fibNum[i] = NULL;
    printf("%d\n",fibonacci(seqNum,seqNum,fibNum));
    return (EXIT_SUCCESS);
}

int fibonacci(int sequence, int size, int fibArray[size]){
    if(sequence == 1 || sequence == 0){
        fibArray[sequence] = 1;
        return 1;
    }
    else if(fibArray[sequence] != NULL && sequence < size){
        return fibArray[sequence];
    }
    fibArray[sequence] = fibonacci(sequence-1,size,fibArray) + fibonacci(sequence-2,size,fibArray);
    return fibArray[sequence];
}

