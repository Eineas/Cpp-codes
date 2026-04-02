#include <iostream>
using namespace std;

class Saat{
    private:
        int saniye;
        int dakika;
        int saat;

    public:
    Saat(){
        saniye = 00;
        dakika = 00;
        saat = 00;
    }

    Saat(int saat,int dakika,int saniye){
        setSaat(saat);
        setDakika(dakika);
        setSaniye(saniye);
    }

    int getSaniye(){
        return saniye;
    }

    int getDakika(){
        return dakika;
    }

    int getSaat(){
        return saat;
    }

    void setSaniye(int saniye){
        if(saniye>= 0 && saniye <= 59){
        this->saniye = saniye;
        }
        else{
            this->saniye = 0;
        }
    }

    void setDakika(int dakika){
        if(dakika <= 59 && dakika >= 0){
            this->dakika = dakika;
        }
        else{
            this->dakika = 0;
        }
    }

    void setSaat(int saat){
        if(saat>= 0 && saat <=23){
            this->saat = saat;
        }
        else{
            this->saat = 0;
        }
    }

    void bilgileriYazdir(){
        cout<<"Saat: "<<saat<<":"<<dakika<<":"<<saniye<<" "<<endl;
    }




};

int main(){
    Saat s1;
    s1.setSaniye(15);
    s1.setDakika(35);
    s1.setSaat(19);
    s1.bilgileriYazdir();

    Saat s2(13,24,55);
    s2.bilgileriYazdir();


    return 0;
}
