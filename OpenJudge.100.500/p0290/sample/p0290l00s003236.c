int main(){

  int n,i,uncount=0,x,count;
  int *A;

  scanf("%d",&n);

  A = malloc(sizeof(int)*n);

  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
  }

  for(i=0;i<n;i++){ 
    if(A[i]==2);
    else if(A[i]%2==0){
      uncount++;
      continue;
    }
   else{
     for(x=2;x<A[i];x++){
       if(A[i]%x==0){
	 uncount++;
	 break;
       }
     }
   }
  }

  count = n - uncount;

  printf("%d\n",count);

  return 0;
}