#include <iostream>
#include <string>
using namespace std;

class Kitap {
private:
    string kitapAdi;
    int sayfaSayisi;
    float fiyat;
    string yazarAdi;
    int basimYili;

public:
    Kitap(string yazarAdi, int basimYili) {
        this->yazarAdi = yazarAdi;
        this->basimYili = basimYili;
    }

    void setKitapAdi(string kitapAdi) {
        this->kitapAdi = kitapAdi;
    }

    void setSayfaSayisi(int sayfaSayisi) {
        this->sayfaSayisi = sayfaSayisi;
    }

    void setFiyat(float fiyat) {
        this->fiyat = fiyat;
    }

    void bilgileriGoster() {
        cout << "\n----------------Girilen Kitap Bilgileri-----------" << endl;
        cout << "Kitap Adi: " << kitapAdi << endl;
        cout << "Yazar Adi: " << yazarAdi << endl;
        cout << "Sayfa Sayisi: " << sayfaSayisi << endl;
        cout << "Fiyat: " << fiyat << " TL" << endl;
        cout << "Basim Yili: " << basimYili << endl;
    }
};

int main() {
    string m_kitapAdi, m_yazarAdi;
    int m_sayfaSayisi, m_basimYili;
    float m_fiyat;

    cout << "Yazar adini giriniz: "<<endl;
    cin >> m_yazarAdi;

    cout << "Basim yilini giriniz: "<<endl;
    cin >> m_basimYili;

    Kitap* kitapPtr = new Kitap(m_yazarAdi, m_basimYili);

    cout << "Kitap adini giriniz: "<<endl;
    cin >> m_kitapAdi;
    kitapPtr->setKitapAdi(m_kitapAdi);

    cout << "Sayfa sayisini giriniz: "<<endl;
    cin >> m_sayfaSayisi;
    kitapPtr->setSayfaSayisi(m_sayfaSayisi);

    cout << "Fiyatini giriniz: "<<endl;
    cin >> m_fiyat;
    kitapPtr->setFiyat(m_fiyat);

    kitapPtr->bilgileriGoster();

    cout << "\nNesnenin bellek adresi: " << kitapPtr << endl;

    delete kitapPtr;

    return 0;
}
