#include<stdio.h>
int data[10] = {0}, data2[10] = {0}, i = 0, j = 0;
void push(int n){
        data[i] = n;
}
void pop(int n){
        data2[j] = data[i];
        j++;
        data[i+1] = 0;
}
int main(){
        int n, k;
        while(scanf("%d", &n) != EOF){
                if(n == 0){
                        i--;
                        pop(n);
                }else{
                        push(n);
                        i++;
                }
        }
        for(k = 0; k < j; k++){
                printf("%d\n",data2[k]);
        }

}