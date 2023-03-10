#include <stdio.h>

#define MAX_NUMBER 100
int main(int argc ,char** argv){
        char remainders[MAX_NUMBER];
        int number;
       
        int x = 0;
        scanf("%d",&number);
        while(number > 0 ){
                remainders[x] = number % 2 ;
                number = number / 2;
                x++;
        } 
        for(int i = x - 1, i >= 0, i--){
                printf("%d",remainders[i]);
        }               
        return 0;
} 
