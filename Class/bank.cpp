#include <iostream>
using namespace std;

class Banka{

 public:
 int hesapNo;
 string sahipAdi;
 float bakiye;

 void paraYatir(float miktar){
	bakiye = bakiye + miktar;
	cout<<miktar<<" tl yatirildi"<<endl;	
 }
 void paraCek(float miktar){
  if(miktar > bakiye)
	cout<<"bakiye yetersiz"<<endl;
  else{
	bakiye = bakiye - miktar;
 	cout<<miktar<<" tl cekildi"<<endl;

 }	

 }
 void bakiyeGoster(){
	cout<<"guncel bakiye: "<<bakiye<<" tl"<<endl;
 }

};

int main()
{

 Banka hesap1 = {12345,"Mehmet Yılmaz",5000};
 hesap1.paraYatir(250);
 hesap1.bakiyeGoster();
 hesap1.paraCek(500);
 hesap1.bakiyeGoster();
 
 return 0;
}
