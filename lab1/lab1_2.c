//Q. no:2 write a program to find root of non-linear equation using newton Rapshon method.
#include <stdio.h>
#include <math.h>
#define F(x) (exp(x)-x -2)
#define f(x) (exp(x)-1)
#define e 0.0001
#define MAX 20
int main(){
    float x0, x1;
    printf("Enter initial guess\n");
    scanf("%f",&x0);
    if(f(x0)==0){
        printf("derivative is zero at this point\n");
        return 1;
    }
    int count=1;
    while(1){
        x1=x0-F(x0)/f(x0);
        if(fabs((x1-x0)/x1)<e){
            printf("The root is %f",x1);
            printf("No. of iteration %d",count);
            return 0;
        }
        else
            x0 =x1;
        count++;
        if(count>20){
            printf("The process doesn\'t converge\n");
            return 1;
    }
    }
}
