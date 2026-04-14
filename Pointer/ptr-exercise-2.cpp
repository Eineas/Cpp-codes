#include <iostream>
using namespace std;

int main(){
    
int *lp;
lp = new int;
*lp = 75;
cout<<*lp<<endl;
cout<<lp<<endl;

int *lp2;
lp2 = new int[5];


delete lp;
cout<<"Silme islemi sonrası degerler: "<<endl;
lp=nullptr;
cout<<*lp<<endl;//bu olunca nullptr sonrası segmentation fault gelir.çünkü artık öyle bir adres yoktur.
cout<<lp<<endl;

    return 0;
}
