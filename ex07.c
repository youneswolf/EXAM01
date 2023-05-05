void last_word(char *str){
    int y=0;
    char temp;
    int z=0;
    int a=0;
    int i=0;
    char b[]="";
    while(str[i]!='\0'){
        i++;
    }
    i=i-1;
    while(str[i]==32){
        i--;
        
    }
    while(str[i]!=32 && str[i]!='\t'){
        b[y]=str[i];
       
        y++;
        i--;
    }
    b[y]='\0';
    while(b[a]){
        temp=b[a];
        b[a]=b[y];
        b[y]=temp;
       
        a++;
        y--;
    }
    while(b[z]){
         write(1,&str[z],1);
         z++;
    }
}


int main(int argc,char *argv) {
    char a[]="hello test   ";
    last_word(a);
    return 0;
}
