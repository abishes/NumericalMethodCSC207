//Q. no:3 write a program to find root of non-linear equation using secant method.
#include <stdio.h>
#include <math.h>
#define f(x) (exp(x)-x -2)
#define e 0.0001
#define MAX 20
int main(){
    float x1, x2, x3, f1, f2;
    printf("Enter initial guess x1 and x2\n");
    scanf("%f%f",&x1, &x2);
    int count=1;
    while(1){
        f1=f(x1);
        f2=f(x2);
        x3=x2-f2*(x2-x1)/(f2-f1);
        if(fabs((x3-x2)/x3)<e){
            printf("The root is %f\n",x3);
            printf("No. of iteration %d",count);
            return 0;
        }
        else{
            x1=x2;
            x2=x3;
        }
        count++;
        if(count>20){
            printf("The process doesn\'t converge\n");
            return 1;
    }
    }
}
