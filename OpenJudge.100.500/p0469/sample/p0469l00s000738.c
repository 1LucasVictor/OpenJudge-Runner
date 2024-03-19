int main(){
int a;
int s,t;
 
scanf("%d%d%d",&a,&s,&t);
 
  for(int i = s; i<=t; i++){
    if(i%a == 0){
      printf("OK");
      return 0;
    }else if(i==t){
    	printf("NG");
      return 0;
    }
  } 
}