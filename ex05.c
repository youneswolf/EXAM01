void inter(char *str1,char *str2){
  int i=0;
  int j=0;
while(str1[i]){
      while(str2[j]){
            if(str1[i]==str2[j]){
               write(1,str1[i],1);
                i++;
                j=0;
                            }
            j++;
                    }
            i++;
               }
  
}
