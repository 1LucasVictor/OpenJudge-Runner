/** stable sort by ascending order **/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int flag=1,i,j,N,N2,cnt=0,swap,minj;

  //scanf N
  scanf("%d",&N);

  //making array
  N2 = N*2 + 1; //?????? + ??°??? ???????????????
  char A_in[N2], A_out_b[N2], A_out_s[N2]; //+1???A_in[]????????????????´?????????¨?????????????????????????¬????2????????????????????????????????????

  //complete A_in[]
  for(i=0;i<N*2;i++){
    scanf("%c ",&A_in[i]); //getc???????????°????????????????????????????????¨
//    printf("%d\n", i);
//    printf("%c\n", A_in[i]);
  }
  scanf("%c",&A_in[i]); //?????????????????? ??????????????????????????£???????????????
//  printf("%d\n",i);
//  printf("%c\n", A_in[i]);

//  printf("A_in: %s\n",A_in);

  //copying A_in[] to each output Arrays
  for(i=0;i<N2;i++){
    A_out_b[i] = A_in[i]; //bubble
    A_out_s[i] = A_in[i]; //selection
  }

//  printf("A_out_b before: %s\n",A_out_b);
//  printf("A_out_s before: %s\n",A_out_s);
  
  //bubbling 
  i=0;
  while(flag){
    flag = 0;
    for(j=N2-1;j>i;j-=2){ //?????????????????????????????°??????????????????????????????
//      printf("j: %d\n",j);
      if(A_out_b[j]<A_out_b[j-2]){
//        printf("enter");
        //int
        swap = A_out_b[j];
        A_out_b[j] = A_out_b[j-2];
        A_out_b[j-2] = swap;
        //char
        swap = A_out_b[j-1];
        A_out_b[j-1] = A_out_b[j-3];
        A_out_b[j-3] = swap;
        cnt++; //count
        flag = 1; //to be continue
      }
    }
    i++;
  }

//  printf("A_out_b after: %s", A_out_b);

  //print Array
  for(i=1;i<N2;i++){
    printf("%c", A_out_b[i]);
    if(i!=0 && i%2==0 && i<N2-1){ //1,3,5...?????¨???
      printf(" ");
    }
  }
  printf("\n");
  //print Stablily 
  printf("Stable"); //always 'Stable'
  
  
  //selecting
  for(i=2;i<N2-1;i+=2){ //?????????1???????????????????????????2??????(??????)????£???°??????3????????????
    minj = i; //first
    for(j=i;j<N2;j+=2){
      if(A_out_s[j]<A_out_s[minj]){ //update minj
        minj = j;
      }
    }
    //changing
    if(minj != i) {
      //int
      swap = A_out_s[i];
      A_out_s[i] = A_out_s[minj];
      A_out_s[minj] = swap;
      //char
      swap = A_out_s[i-1];
      A_out_s[i-1] = A_out_s[minj-1];
      A_out_s[minj-1] = swap;

      cnt++; //count
    }
  }

//    printf("A_out_b after: %s", A_out_s);

  //printing
  for(i=0;i<N2;i++){
    printf("%c", A_out_s[i]);
    if(i!=0 && i%2==0 && i<N2-1){ //1,3,5...?????¨???
      printf(" ");
    }
  }
  printf("\n");
  
  //printf("cpm : %d\n",strcmp(A_out_b, A_out_s));
  //print Stablity
  if(strcmp(A_out_b, A_out_s) == 0){
    printf("Stable\n");
  }else{
    printf("Not stable\n");
  }

  return 0;
}