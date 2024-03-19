#include<stdio.h>
#include<math.h>

main()
{
  int a[3],i,c,temp,n,cn_n;
  scanf("%d",&n);
  int ans[n];
  for(cn_n=0;cn_n<n;cn_n++){
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
  
    for(i=3;i>0;i--){
      for(c=0;c<i;c++){
	if(a[c+1]>a[c]){
	  temp=a[c+1];
	  a[c+1]=a[c];
	  a[c]=temp;
	}
      }
    }
    if(a[0]==sqrt(pow(a[1],2)+pow(a[2],2))){
      ans[cn_n]=1;
    }else{
      ans[cn_n]=0; 
    }

  }
  for(i=0;i<n;i++){
    if(ans[i]==1){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  //  printf("%d %d %d\n",a[0],a[1],a[2]);
  return 0;
}