#include<stdio.h>
#include<string.h>
#include<stdbool.h>

void swap(int *a,int *b){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}

void Bsort(int data[], int size) {
	int i, j;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1;j++){
            if(data[j]>data[j+1]){
                swap(&data[j],&data[j+1]);
            }
        }
    }
}

int main(void){
    int n;
    char st[4];
    scanf("%s",st);
    for(int n=0;n<4;n++){
        if(st[n]==55){
            printf("Yes");
            return 0;
        }
    }
    printf("No");
}
