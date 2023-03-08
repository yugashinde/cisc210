#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
        
        int sum = 0 ;
        int i = 0;
        if (argc > 4){
                return 0;
        }
        else{
                for (i=1;i<argc-1;++i){
                sum=sum + atoi(argv[i]);
                }
        return sum;
        }
        
}
