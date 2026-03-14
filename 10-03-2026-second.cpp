#include <iostream>
#include <cmath>

using namespace std;

class Ucgen{
 private:
  double a,b,c;
 
 public:
  Ucgen(){
      a = 0;
      b = 0;
      c = 0;
  }
  
  Ucgen(double kenar){
    if(kenar > 0){
      a = kenar;
      b = kenar;
      c = kenar;
      }
      else{
          a = 0;
          b = 0;
          c= 0;
      }
  }
  
  Ucgen(double bir,double iki,double uc){
      if(bir>0 && iki>0 && uc>0)
      {
          a = bir;
          b = iki;
          c = uc;
      }
      else{
          a = 0;
          b = 0;
          c = 0;
      }
  }
  
  void setA(double bir){
      if(bir > 0)
          a = bir;
  }
  
  void setB(double iki){
      if(iki > 0)
          b = iki;
  }
  
  void setC(double uc){
      if(uc > 0)
          c = uc;
  }
  
  double getA(){
      return a;
  }
  
  double getB(){
      return b;
  }
  
  double getC(){
      return c;
  }
  
  bool ucgenMi(){
      if((a > 0 && b > 0 && c > 0) && (a + b > c) && (a + c > b) && (b + c > a)){
          return true;
      }
      return false;
  }
  
  double cevre(){
      return a+ b +c;
  }
  
  double alan(){
      if(!ucgenMi()){
          return 0;
      }
      double u = cevre() / 2.0;
      return sqrt(u * (u - a) * (u - b) * (u - c));
  }
  
  void yazdir(){
      cout<<"Ucgen kenarlari a="<<a<<", b="<<b<<", c="<<c<<endl;
      if(ucgenMi()){
          cout<<"Cevre: "<<cevre() <<endl;
          cout<<"Alan: "<<alan() <<endl;
      }
      else{
          cout<<"Bu kenar uzunluklari gecersiz!"<<endl;
      }
      cout<<"-----------------------------------"<<endl<<endl;
  }
  
};

int main() {
    cout<<"1. parametresiz constructor:"<<endl;
    Ucgen u1;
    u1.yazdir();
    
    cout<<"2. tek parametreli constructor:"<<endl;
    Ucgen u2(6.0);
    u2.yazdir();
    
    cout<<"3. birden çok parametreli constructor:"<<endl;
    Ucgen u3(3.0,4.0,5.0);
    u3.yazdir();
    
    cout<<"4. sonradan değer atama:"<<endl;
    Ucgen u4;
    u4.setA(5.0);
    u4.setB(12.0);
    u4.setC(13.0);
    u4.yazdir();
    
    cout<<"5. gecersiz ucgen denemesi"<<endl;
    Ucgen u5(1.0,2.0,10.0);
    u5.yazdir();
    
    return 0;
}
