#include <iostream>
using namespace std;

class Canli{
  private:
    string tur;
  
  public:
    Canli(string t){
        tur = t;
        cout<<"Canli constructor: "<<tur<<endl;
    }
    
    void setTur(string t){
        tur = t;
    }
    
    string getTur(){
        return tur;
    }
};

class Surungen : public Canli{
    private:
        string yasadigiOrtam;
        
    public: 
        Surungen(string t,string y): Canli(t){
            yasadigiOrtam = y;
            cout<<"Surungen constrcutor: "<<yasadigiOrtam<<endl;
        }
        
    void setYasadigiOrtam(string y){
        yasadigiOrtam = y;
    }
    string getYasadigiOrtam(){
        return yasadigiOrtam;
    }
    
};

class Kaplumbaga : public Surungen{
    private:
        int kabukCapi;
        
    public:
        Kaplumbaga(string t,string y,int k) : Surungen(t,y){
            kabukCapi = k;
            cout<<"Kaplumbaga constructor: "<<kabukCapi<<"cm\n"<<endl;
        }
        
    void setKabukCapi(int k){
        kabukCapi = k;
    }    
    
    int getKabukCapi(){
        return kabukCapi;
    }
    
    void bilgiGoster(){
        cout<<"--Bilgi Goster Fonksiyonu--\n"<<"Tur: "<<getTur() << ", Ortam: "<<getYasadigiOrtam() << ", Kabuk Capi: "<<getKabukCapi()<<" cm\n"<<endl;
    }
    
};

int main(){
    Kaplumbaga k("Surungen","Kara",20);
    k.bilgiGoster();
    
    k.setTur("Omurgali");
    k.setYasadigiOrtam("Su");
    k.setKabukCapi(25);
    k.bilgiGoster();
    return 0;
}
