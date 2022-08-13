//Q. no:4 write a program to find root of non-linear equation using fixed point method.
#include <stdio.h>
#include <math.h>
//f(x)=(exp(x)-x -2) =>exp(x)-x-2=0 =>x=exp(x)-2 =>g(x)=x=exp(x)-2
#define g(x) (exp(x)-2)
#define e 0.0001
#define MAX 20
int main(){
    float x0, x1;
    printf("Enter initial guess\n");
    scanf("%f",&x0);
    int count=1;
    while(1){
        x1=g(x0);
        if(fabs(x1-x0)<e){
            printf("The root is %f\n",x1);
            printf("No. of iteration %d",count);
            return 0;
        }
        else
            x0=x1;
        count++;
        if(count>20){
            printf("The process doesn\'t converge\n");
            return 1;
    }
    }
}
