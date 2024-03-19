#include <stdio.h>


int main() {
    int n ;
    scanf("%d", &n);
    switch (n%10)
    {
    case 3:
        puts("bon");
        break;
    case 0:
    case 1:
    case 6:
    case 8: 
        puts("pon");
        break;      
    
    default:
        puts("hon");
        break;
    }
     
    
}