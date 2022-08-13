//Q.no:1 write a program to find root using Lagrange's interpolation formula
#include <stdio.h>
#define x 2.5
int main(){
    int X[3]={2,3,4};
    float Y[3]={1.4142,1.7321,2};
    float y=0,l[3];
    for(int i=0; i<3;i++){
        l[i]=1;
        for(int j=0;j<3;j++){
            if(i!=j){
                l[i] *=(x-X[j])/(X[i]-X[j]);
            }
        }
    }
    for(int i=0;i<3;i++){
      y += Y[i]*l[i];
    }
    printf("f(%.1f) = %.4f",x,y);
}
