#include <stdio.h>
#include <unistd.h>
int doubles(char *str,char c,int p){
    int i=0;
    while(i<p){
        if(str[i]==c){
            return 0;
        }
        i++;
    }
    return 1;
}

void inter(char *str1,char *str2){
  int i=0;
  int j;
while(str1[i]){
    j=0;
      while(str2[j]){
            if(str1[i]==str2[j]){
                if(doubles(str1,str1[i],i)){
               write(1,&str1[i],1);
                }
                            }
                 j++;
                    }
                i++;
               }
               
  
}


int main(int argc,char *argv) {
  char a[]="test";
  char b[]="tsex";
  inter(a,b);
    
    return 0;
}
