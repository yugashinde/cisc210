#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
        int sum = 0 ;
        int i = 0;
        if (argc <= 4 ){
                for (i=0;i < 5;i++){
                sum=sum + atoi(argv[i]);
                }
                return sum;
        }
        else {
                return 0;
        }
        
      
}
