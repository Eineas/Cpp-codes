#include <iostream>
#include <string>
using namespace std;

class SinemaBileti{
    
    private:
     string filmAdi;
     int salonNo;
     int koltukNo;
     double fiyat;
     int adet;

     
    public:
    
    SinemaBileti(){
        cout<<"Bilet olusturuldu!"<<endl;
    }
    
    ~SinemaBileti(){}
    
    string getFilmAdi(){
        return filmAdi;
    }
    
    int getSalonNo(){
        return salonNo;
    }
    
    int getKoltukNo(){
        return koltukNo;
    }
    
    double getFiyat(){
        return fiyat;
    }
    
    int getAdet(){
        return adet;
    }
    
    void setBilgi(string filmAdi,int koltukNo,int salonNo,double fiyat,int adet){
        if(filmAdi == " "){
            cout<<"Film adı boş olamaz!"<<endl;
        }
        else{
        this->filmAdi = filmAdi;
        }
        
        if(koltukNo < 0 || koltukNo > 80){
            cout<<"Koltuk no negatif veya 80'den büyük olamaz!"<<endl;}
            
            else{
        this->koltukNo = koltukNo;
                
            }
        if(salonNo < 0){
            cout<<"Salon no negatif olamaz!"<<endl;}
            
            else{
        this->salonNo = salonNo;
                
            }
        if(fiyat < 0){
            cout<<"Fiyat negatif olamaz!"<<endl;
        }
        
            else{
        this->fiyat = fiyat;
                
            }
            if(adet < 0){
                cout<<"Adet negatif olamaz!"<<endl;
            }
            else{
        this->adet = adet;
            }
    }
    
    void bilgiGoster(){
        double toplam = fiyat*adet;
        
        cout<<"Film Adi: "<<filmAdi<<endl;
        cout<<"Salon No: "<<salonNo<<endl;
        cout<<"Koltuk No: "<<koltukNo<<endl;
        cout<<"Bilet Fiyatı: "<<fiyat<<" TL"<<endl;
        if(adet>=2){
            cout<<"%10 indirim uygulandı."<<endl;
            toplam = toplam * 0.9;
        }
        cout<<"Toplam Fiyat: "<<toplam<<" TL"<<endl;
        cout<<endl;
    }
    
};

int main() {
    
    SinemaBileti bilet1;
    bilet1.setBilgi("Dune",34,29,300,1);
    bilet1.bilgiGoster();

    SinemaBileti bilet2;
    bilet2.setBilgi("Yüzüklerin Efendisi",20,15,300,2);
    bilet2.bilgiGoster();
    
    SinemaBileti bilet3;
    bilet3.setBilgi(" ",82,-5,-10,-1);


    return 0;
}
