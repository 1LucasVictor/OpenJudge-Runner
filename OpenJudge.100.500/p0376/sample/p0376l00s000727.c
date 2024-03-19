#include <stdio.h>

int main(void){

    int n;
    scanf("%d", &n);
    int num[100] ={0};


    int i =0;
for (; i < n; i++){
    scanf("%d",&num[i]);

}

for (i = n - 1; i >=0; i--){
    printf("%d", num[i]);
    if(i!=0){printf(" ");}
}
printf("\n");
    
    return 0;
}
