#include <unistd.h>

void rot_13(char *str){
  int i=0;
  while(str[i]){
      if(str[i]>="a" && str[i]<="m" || str[i]>="A" && str[i]<="M"){
          str[i]+=13;
      }
      if(str[i]>="n" && str[i]<="z" || str[i]>="N" && str[i]<="Z"){
          str[i]-=13;
      }
      write(1,&str[i],1);
      i++;
  }
  
}
