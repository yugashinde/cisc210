#include <stdio.h>
#include <stdlib.h>

int main(int argc,char** argv){
        if (argc < 4 || argc > 4){
                return 0;
        }
        int sum = 0 ;
        int i = 0;

        if (argc == 4 ){
                for (i=0;i<argc + 1;i++){
                sum=sum + atoi(argv[i]);
                }
        }
        return sum;
}
