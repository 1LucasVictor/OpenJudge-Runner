#include<stdio.h>


main()
{
  int A[100],N;
  int i,k,key,j;

scanf("%d",&N);

for (k=0;k<N;k++)scanf("%d",&A[k]);

for (i=1;i<=N;i++){   
    for (k=0;k<N;k++){
         printf("%d ",A[k]);}
  
    key = A[i];
    /* insert A[i] into the sorted sequence A[0,...,j-1] */
    j = i-1;

      while (j>= 0 && A[j]>key){
        A[j+1] = A[j];
        j--;
       }
    A[j+1] = key;
   
printf("\n");
  }
	  return 0;
}