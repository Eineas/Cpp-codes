#include <iostream>
using namespace std;

class Calisan{
  private:
    string isim;
  
  public:
    Calisan(string i){
        isim = i;
        cout<<"Calisan const "<<isim<<endl;
    }
  
};

class Departman{
    public:
        string depAd;
        
        Departman(string d){
            depAd = d;
            cout<<"Dep const "<<depAd<<endl;
        }
};

class Mudur : public Calisan, public Departman{
    public:
        int maas;
    
    Mudur(string i,string d,int m): Calisan(i),Departman(d){
        maas = m;
        cout<<"Mudur const "<<depAd<<endl;
    }
};

int main(){
    
    Mudur m ("Hasan","Yazılım",80000);

    return 0;
}
