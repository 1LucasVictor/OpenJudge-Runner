

#include <stdio.h>

int search(int A[],int n,int key){
 int i;
 int a = 0;

 for(i = 0;i < n;i++){
  if(A[i] == key)
    a = 1;
 }
 return a;

}


int main(){
 int i, n, q, A[10000+1], c , key= 0;
 
 scanf("%d\n",&n);
 for(i = 0;i < n;i++){
   scanf("%d",&A[i]);
  }
 scanf("%d\n",&q);
 for(i = 0;i < q;i++){
   scanf("%d",&key);
   if(search(A, n, key) == 1)
      c++;
 }

 printf("%d\n",c);
 return 0;
}