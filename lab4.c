#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
        int sum = 0 ;
        int i = 0;
        if (argc < 4 || argc > 4){
                return 0;
        }
        else if (argc == 4 ){
                for (i=0;i<=argc;i++){
                sum=sum + atoi(argv[i]);
                }
                return sum;
        }
        else {
                return 0;
        }
        
      
}
