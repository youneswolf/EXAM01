#include <stdio.h>
#include <unistd.h>
int	ft_strlen(char *str){
  int i=0;
  while(str[i]){
      i++;
  }
  return i;
}
int main() {
  char a[]="adnajn";
  printf("%d",ft_strlen(a));
    return 0;
}
