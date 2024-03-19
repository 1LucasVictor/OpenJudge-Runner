#include<stdio.h>
#include<string.h>
int main(void){
  int i,x;
  int n,m,k;
  int af=-1,bf=-1;
  int ac=-1,bc=-1;
  int a[200002] = {0};
  int b[200002] = {0};
  
  scanf("%d %d %d",&n,&m,&k);
  
  
  scanf("%d",&a[0]);
  if(a[0]>k){
   ac=0;
    af=1;
  }
  for(i=1;i<n;i++){
   scanf("%d",&x); 
    a[i] = a[i-1]+x;  
    if(a[i] >1000000000){
      a[i]=1000000001;
    }
    if(af==-1&&a[i]>k){
       ac=i;
        af=1;
      }
  }
  
  //r
  scanf("%d",&b[0]);
  if(b[0]>k){
   bc=0;
    bf=1;
  }
  for(i=1;i<m;i++){
   scanf("%d",&x);
    b[i] = b[i-1]+x;
    if(b[i] >1000000000){
      b[i]=1000000001;
    }
    if(bf==-1&&b[i]>k){
       bc=i;
        bf=1; 
      }
  }
  
  if(ac==-1){
    ac=n;
  }
  if(bc==-1){
   bc=m; 
  }
  
  //printf("ac = %d bc = %d",ac,bc);
  //printf("%d %d %d\n\n",b[0],b[1],b[2]);
  
  //r
  
  if(ac==0&&bc==0){
    printf("%d",0);
    return 0;
  }
  if(ac==0){
    if(b[m-1]<=k){
       printf("%d",m);
        return 0;
      }
   for(i=0;i<m;i++){
    if(b[i]>k){
     printf("%d",i);
      return 0;
    }
   }
  }
    if(bc==0){
      if(a[n-1]<=k){
       printf("%d",n);
        return 0;
      }
   for(i=0;i<n;i++){
    if(a[i]>k){
     printf("%d",i);
      return 0;
    }
   }
  }
  
  
  for(i=0;i<(ac+bc)+499999;i++){
    
    
    //printf("ac = %d bc = %d",ac,bc);
    //printf("%d %d %d",a[0],a[1],a[2]);
   if(a[ac-1]+b[bc-1]>=k){
     //printf("EE");
   	if((ac>=2&&bc>=2)&&(a[ac-1]-a[ac-2]>=b[bc-1]-b[bc-2])){
     ac=ac-1; 
    }else if(ac==1&&(a[0]>=b[bc-1]-b[bc-2])){
      ac--;
    }else if(bc==1&&(a[ac-1]-a[ac-2]>=b[0])){
      ac--;
      }
     else{
      bc=bc-1;
      //printf("R ");
    }
   }else{
    printf("%d",ac+bc);
     return 0;
   }
    
    if(ac==0){
     printf("%d",bc); 
      return 0;
    }
    if(bc==0){
     printf("%d",ac); 
      return 0;
    }
    
  }
  
  //printf("EEEEE");
  //printf("%d %d %d\n",b[0],b[1],b[2]);
  //printf("%d %d",ac,bc);
 return 0; 
}