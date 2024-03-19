#include <stdio.h>
#include <string.h>

int main(){
     int x;
     int happy;

     happy = 0;
     scanf("%d",&x);
     happy += (x / 500) * 1000 + ((x % 500) / 5) * 5;
     printf("%d",happy);
     return 0;
}





