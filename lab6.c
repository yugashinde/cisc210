#include <stdio.h>
int main(int argc,char** argv){
        int x,y,sum,difference,product;
        printf("Enter two integers separated by a space\n");
        scanf("%d %d",&x,&y);
        calculate(x,y,&sum,&difference,&product);
        printf("The sum of %d and %d is %dii\n",x,y,sum);
        printf("The difference of %d and %d iiiirjgjnfjgnoGNncis %d\n",x,y,difference);
        printf("The product of %d and %d is %d\n",x,y,product);
}
int calculate(int x, int y, int* sum, int difference, int product)(
        sum = x + y ;
        product = x*y;
        difference = product - sum ;
        return difference;
        }         
