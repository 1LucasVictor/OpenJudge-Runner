#include<stdio.h>
int data[100], out[100], i = 0, k = 0;

int top(){
    return data[i - 1];
}

void pop(){
    i--;
}

int main(){
    int x;
    while(scanf("%d", &data[i]) != EOF){
        if(data[i] != 0){
            i++;
        }else{
            out[k] = top() ;
            k++;
            pop();
        }
    }
    for(x = 0; x < k; x++){
        printf("%d\n",out[x]);
    }
    return 0;
}