#include <iostream>
using namespace std;

class Sporcu{
  private:

string sporcuAdi;
int yas;
double puan;



  public:

void bilgiYazdir(){
cout<<"Sporcu : "<<sporcuAdi<<endl;
cout<<"Yaşı : "<<yas<<endl;
cout<<"Puanı : "<<puan<<endl;
}


};


int main(){

Sporcu* s1 = new Sporcu;
Sporcu* s2 = new Sporcu;

s1->setBilgi("Ali",20,100);
s2->setBilgi("Ayse",22,150);

s1->bilgiYazdir();
s2->bilgiYazdir();

s1->puanGuncelle();
cout<<"s1 nesnesinin puanı güncellendi. "<<endl;
s1->bilgiYazdir();

delete s1;
delete s2;

  return 0;
}
