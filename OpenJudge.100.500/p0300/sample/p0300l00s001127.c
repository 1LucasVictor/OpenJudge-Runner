#include <stdio.h>
//int linearSearch();                                                           
int same();
int linearSearch(int A[],int n,int key){

  int count=0;
  A[n]=key;
  // for(i=0;i<n-1;i++){                                                       \
                                                                                
  //if(A[i]==key){                                                             \
                                                                                
  while(A[count]!=key)count++;
  return count!=n; /**/
}

int main(){
  int n,q,i,sum=0;
  int S[10000+1];
  // int sasum=0;                                                               
  int key;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&S[i]);
  }
  scanf("%d",&q);

  for(i=0;i<q;i++){
    scanf("%d",&key);
    if(linearSearch(S,n,key))sum++;
  }
  /* for(j=0;j<q;j++){                                                          
    sum+=(linearSearch(S,n,T[j]));                                              
  }                                                                             
                                                                                
  sasum=same(&S,n);                                                             
  */
  //  printf("%d\n",sasum);                                                     
  //  if(sasum>0)sasum=sasum+1;                                                 
  // sum=sum-sasum;                                                             
  printf("%d\n",sum);

  return 0;
}
int same(int *array,int last){
  int cnt,ncnt,same,nsame=0;
  for(cnt=0;cnt<last-1;cnt++){
    same=*(array+cnt);
    for(ncnt=cnt+1;ncnt<last;ncnt++){
      if(*(array+ncnt)==same){
        nsame++;
        //      return 1;//nsame++;                                             
        //return nsame;                                                         
      }

    }
    // if(nsame>0)                                                              
    return nsame;
    // else return 0;                                                           
  }
}

