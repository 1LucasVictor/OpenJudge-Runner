#include<stdio.h>
#include<string.h>

void insert(char *);
int find(char *);


char dic[100000][12];
int x = 0;

int main(){

  int n;
  char str[13],op[7],i;

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){
    
    scanf("%s",op);
    scanf("%s",str);



    if(strcmp(op,"insert")==0) insert(str);
    
    else if(strcmp(op,"find")==0){
      if(find(str)==1) printf("yes\n");
      else printf("no\n");
    }
    
  }



  return 0;

}

  
void insert(char *s){

  int j;

  if(strlen(s)==1) {
    dic[x][0] = s[0];
    dic[x][1] = '\0';
  }

  else strcpy(dic[x],s);



  x++;


}


int find(char *s){

  int i = 0,key;

 
      strcpy(dic[x],s);
      
      while(strcmp(dic[i],s)!=0){
	i++;
      }
      
      if(i == x) return 0;
      
      return 1;
  
    

}