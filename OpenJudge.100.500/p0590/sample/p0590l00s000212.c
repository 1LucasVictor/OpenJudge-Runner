#include <stdio.h>


int main(int argc, char const *argv[])
{
    int a[6];
    for (size_t i = 0; i < 6; i++){scanf("%d",&a[i]);}
    if (a[4]-a[0]<=a[5]){
        printf("Yay!");
    }else{
        printf(":(");
    }
    return 0;
}
