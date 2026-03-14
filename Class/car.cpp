#include <iostream>
using namespace std;

class Araba{
 public:

 string marka;
 string model;
 float hiz;

 Araba(string m,string mo,int h){
   marka = m;
   model = mo;
   hiz = h;
 }
 Araba(){}

 void gazVer(int miktar){
	hiz = hiz + miktar;
	cout<<miktar<<"hizlandi"<<endl;
 }

 void Yavasla(int miktar){
   hiz = hiz - miktar;
   if(hiz<0)
   { 
     hiz=0;
   }
   cout<<miktar<<"hizlandi"<<endl;
 }

 void arabaDurumu(){
  cout<<"--------------------";
  cout<<"Marka: "<<marka<<endl;
  cout<<"Model: "<<model<<endl;
  cout<<"Hiz: "<<hiz<<endl;
  }

};
int main(){
  Araba a2;
  cout<<"Arabanin markasini girin: "<<endl;
  cin>>a2.marka;

  cout<<"Arabanin modelini girin: "<<endl;
  cin>>a2.model;

  a2.arabaDurumu();
  a2.gazVer(80);
  a2.arabaDurumu();
  a2.Yavasla(30);
  a2.arabaDurumu();


  cout<<"Arabanin baslangic hizi nedir?"<<endl;
  cin>>a2.hiz;

  Araba a1("Renault","Clio",0);

  a1.arabaDurumu();
  a1.gazVer(80);
  a1.arabaDurumu();
  a1.Yavasla(30);
  a1.arabaDurumu();


 return 0;
}
