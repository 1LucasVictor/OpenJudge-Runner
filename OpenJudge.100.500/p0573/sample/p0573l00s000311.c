    #include<stdio.h>
         
    int main(){
      char str[4];
     
      scanf("%s", str);
       
      if(str[0] == str[1]){
        if(str[2] == str[3]){
          printf("Yes");
        }
      }else if(str[0] == str[2]){
        if(str[1] == str[3]){
          printf("Yes");
        }
      }else if(str[0] == str[3]){
        if(str[1] == str[2]){
          printf("Yes");
        }
      }else{
        printf("No");
      }
          
      return 0;
    }