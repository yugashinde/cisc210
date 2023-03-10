#include <stdio.h>

#define MAX_NUMBER 100
int main(int argc ,char** argv){
        char remainders[MAX_NUMBER];
        int number;
        int x = 0;
        scanf("%d",&number);
        int i = 1 ;
        while(number > 0 ){
                remainders[i] = number % 2 ;
                number = number / 2;
                i++;
        } 
        for(x = i-1 ;x > 0;x--){
                printf("%d",remainders[x]);
        }               
        return 0;
} 
