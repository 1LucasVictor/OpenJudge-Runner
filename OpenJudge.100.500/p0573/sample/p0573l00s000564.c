        #include<stdio.h>
        #include<stdbool.h>
         
        bool judge(char a, char b, char c, char d){  
          if(a == b){
            if(c == d){
              return true;
            }
          }
          return false;
        }
         
        int main(){
          char str[4];
          bool yesFlag;
          int i;
          
          scanf("%s", str);
          
          yesFlag = judge(str[0], str[1], str[2], str[3]);
          if(yesFlag == true){
            printf("Yes");
            return 0;
          }
          yesFlag = judge(str[0], str[2], str[3], str[1]);
          if(yesFlag == true){
            printf("Yes");
            return 0;
          }
          yesFlag = judge(str[0], str[3], str[1], str[2]);
          if(yesFlag == true){
            printf("Yes");
            return 0;
          }
          
          if(yesFlag == false){
            printf("No");
          }
         
          return 0;
        }