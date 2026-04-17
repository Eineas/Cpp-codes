#include <iostream>
using namespace std;

int main() {

    double* yaricap = new double;
    double* yukseklik = new double;
    double *hacim = new double;
    double pi = 3.14;
    
    cout<<"Silindirin yaricapini giriniz: "<<endl;
    cin >> *yaricap;
    
    cout<<"Silindirin yuksekliğini giriniz: "<<endl;
    cin>> *yukseklik;
    
    *hacim = pi * (*yaricap) * (*yaricap) * (*yukseklik);
    
    cout<<"Silindirin hacmi: "<<*hacim<<endl;

    delete yaricap;
    delete yukseklik;
    delete hacim;
    
    return 0;
}
