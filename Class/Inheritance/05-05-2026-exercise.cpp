#include <iostream>
using namespace std;

class Sekil{
  public:
    
    virtual void ciz(){
        cout<<"Sekil ciziliyor"<<endl;
    }
    
    virtual double alanHesapla(){
        return 0;
    }
    
};

class Dikdortgen : public Sekil{
    private:
        int en;
        int boy;
        
    public:
        Dikdortgen(double e,double b) : en(e),boy(b){}

    void ciz() override{
        cout<<"Dikdortgen cizliyor"<<endl;
    }
    
    double alanHesapla() override{
        return en*boy;
    }
};

class Daire : public Sekil{
    private:
        double yaricap;
    
    public:
        Daire(double r) : yaricap(r) {}
        
        void ciz() override{
            cout<<"Daire ciziliyor"<<endl;
        }
    
        double alanHesapla() override{
            return 3.14* yaricap * yaricap;
        }

};

int main() {
    
    Dikdortgen d1(4,5);
    Daire daire1(3);
    
    Sekil* sekiller[2];
    sekiller[0] = new Dikdortgen(4,5);
    sekiller[1] = new Daire(3);
    
    for(int i=0;i<2;i++){
        sekiller[i]->ciz();
        cout<<"Alan: "<<sekiller[i]->alanHesapla()<<endl;
    }
    
    return 0;
}
