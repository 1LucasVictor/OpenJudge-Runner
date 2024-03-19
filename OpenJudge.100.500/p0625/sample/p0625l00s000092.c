#include<stdio.h>
#include<stdlib.h> 
int main (int argc, char *argv[]) {
    int p;
    int q;
    int temp;
    while((p<=0||q<=0||(p+q)>16||p>16||q>16)){
      
      scanf("%d",&p);
      
      scanf("%d",&q);
    }

    if(p-q>=0){//pのほうが大きい時
      temp=q;
      q=p;
      p=temp;
    }
    if(8>=q){
      printf("Yay!");
    }else{
      printf(":(");
    }
}