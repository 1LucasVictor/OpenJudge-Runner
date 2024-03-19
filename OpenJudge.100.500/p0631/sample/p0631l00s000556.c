#include <stdio.h>

int main() {
    int A,B,X,cat;
    scanf("%d %d %d",&A,&B,&X);
    
    cat = X-A ;
    
    
    if (cat <= B) printf("YES\n");
    if (cat > B) printf("NO\n");

}
