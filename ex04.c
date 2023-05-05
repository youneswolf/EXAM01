#include <unistd.h>

void rot_13(char *str){
  int i=0;
  while(str[i]){
      if(str[i]>="a" && str[i]<"z" || str[i]>="A" && str[i]<"Z"){
          str[i]+=1;
      }
      if(str[i]=="z" || str[i]=="Z"){
          str[i]-=25;
      }
      write(1,str[i],1);
      i++;
  }
  
}
