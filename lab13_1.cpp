#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(double const A[], int N , double B[]){
double mn = 0 , sd = 0 , gm = 1.0 , hm , max = A[0] , min = A[0]   ;
for(int i = 0 ; i <  N ; i++ ){
 mn += A[i] ;
 gm *= A[i] ;
 hm += 1/A[i] ;
 if( max < A[i+1]) max = A[i+1] ;
 if( min > A[i]) min = A[i];
} 
B[0] = mn / N ;
for(int j = 0 ; j <  N ; j++ ){
sd += pow(A[j]-B[0],2) ;
}
B[1] = pow(sd/N,1.0/2.0) ;
B[2] = pow(gm,1.0/N) ;
B[3] = N/hm ;
B[4] = max ;
B[5] = min ;


}
    