#include <stdio.h>
int main(void){
    // Your code here!
    int a,b[5],o=10,c=0;
    scanf("%d",&a);
    for(int i=0;i<=3;i++){
        b[i]=a%o;
        a=a/10;
    }
    for(int i=0;i<=2;i++){
       if(b[i]==b[i+1]){
            c++;
            break;
        }
    }
    if(c==0){
        printf("Good");
    }else{
        printf("Bad");
    }
    
    return 0;
}
