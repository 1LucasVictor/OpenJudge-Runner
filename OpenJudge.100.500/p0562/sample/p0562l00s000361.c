#include<stdio.h>
int main()
{
    int A,B;
    int t;
    scanf("%d %d", &A, &B);
    if(B%A==0){
      t=(B/A);
    printf("%d\n",t);
        }
     else{
        t=(B/A)+1;
      printf("%d\n",t);
        }    
    return 0;
}