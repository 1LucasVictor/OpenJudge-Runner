#include <stdio.h>

int main()
{
    int n, max = 0, min = 0, sam = 0;
    
    scanf("%d", &n);
    
    int a;
    
    int i;
    
    for(i=0; i<n; i++){
        scanf("%d", &a);
        
        if(i==0){
            min = a;
        }
        
        if(max<a){
            max = a;
        }
        if(min>a){
            min = a;
        }
        
        sam+=a;
    }
    
    printf("%d %d %d\n", min, max, sam);
    
    return 0;
}