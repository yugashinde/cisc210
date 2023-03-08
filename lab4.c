#include <stdio.h>
#include <stdlib.h>


int main(int argc,char** argv){
        
        int sum = 0 ;
        int i = 0;
        if (argc > 5 || argc == 1){
                return 0;
        }
        else if (argc <= 5 && argc > 1)
        {
                for (i=1;i<argc;i++){
                sum=sum + atoi(argv[i]);
                }
        return sum;
        }
        
}
