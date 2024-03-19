#include <stdio.h>

int main(){
    int a,b,c,temp = 0;
    int array[3] = {0,0,0};
    scanf("%d %d %d",&a,&b,&c);
    array[0] = a;
    array[1] = b;
    array[2] = c;
    for(int i = 0; i < 2; i++){
        for(int j = 2; j > 0; j--){
            if(array[i] > array[j]){
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
    printf("%d %d %d\n",array[0],array[1],array[2] );
    return 0;
}