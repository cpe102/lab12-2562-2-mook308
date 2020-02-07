#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

//Write definition of stat() here 
void stat(const double x[],int y,double z[]){
    double max=x[0],min=x[0],sum =0,d=0,f;
    for(int i;i<y;i++){
        if(x[i]>max)max=x[i];
        if(x[i]<min)min=x[i];
        sum+=x[i];
        d+=pow(x[i],2);
    }
    z[2]=max;
    z[3]=min;
    z[0]=sum/y;
    f=(d/y)-pow(z[0],2);
    z[1]=sqrt(f);

    

}