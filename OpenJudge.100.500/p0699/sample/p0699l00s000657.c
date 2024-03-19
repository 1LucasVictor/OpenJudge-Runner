#include<stdio.h>

void change(int n[])
{
  int i,j,temp;
  for(i=0;i<3;i++){
    for(j=0;j<2;j++){
      if(n[j]>n[j+1]){
        temp=n[j];
        n[j]=n[j+1];
        n[j+1]=temp;
      }
    }
  }
}

  
    
int main(void)
{
  int n[3];
  int i;
  for(i=0;i<3;i++)
    scanf("%d",&n[i]);
  
  change(n);
  
  if(n[0]==5 && n[1]==5 && n[2]==7)
    puts("YES");
  else
    puts("NO");
  
  return 0;
}
