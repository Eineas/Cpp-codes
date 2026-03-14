#include <iostream>
using namespace std;

class Batarya {
private:
    double kapasite;
    double doluluk;
    double tuketim;

public:
    Batarya() {
        kapasite = 0;
        doluluk = 0;
        tuketim = 0;
    }

    Batarya(double yeniKapasite) {
        if (yeniKapasite > 0) {
            kapasite = yeniKapasite;
        } else {
            kapasite = 0;
        }
        doluluk = 0;
        tuketim = 0;
    }

    Batarya(double yeniKapasite, double yeniDoluluk, double yeniTuketim) {
        if (yeniKapasite > 0 && yeniDoluluk > 0 && yeniTuketim > 0) {
            kapasite = yeniKapasite;
            doluluk = yeniDoluluk;
            tuketim = yeniTuketim;
        } else {
            kapasite = 0;
            doluluk = 0;
            tuketim = 0;
        }
    }

    void setKapasite(double yeniKapasite) {
        if (yeniKapasite > 0) kapasite = yeniKapasite;
    }

    void setDoluluk(double yeniDoluluk) {
        if (yeniDoluluk > 0) doluluk = yeniDoluluk;
    }

    void setTuketim(double yeniTuketim) {
        if (yeniTuketim > 0) tuketim = yeniTuketim;
    }

    double getKapasite() {
        return kapasite;
    }

    double getDoluluk() {
        return doluluk;
    }

    double getTuketim() {
        return tuketim;
    }

    double yuzde() {
        if (kapasite <= 0) return 0;
        return (doluluk / kapasite) * 100.0;
    }

    double kalanSure() {
        if (tuketim <= 0) return 0;
        return doluluk / tuketim;
    }

    void yazdir() {
        cout << "Batarya kapasitesi: " << kapasite << " mAh" << endl;
        cout << "Mevcut doluluk: " << doluluk << " mAh" << endl;
        cout << "Anlik tuketim: " << tuketim << " mAh" << endl;
        cout << "Doluluk yuzdesi: %" << yuzde() << endl;
        cout << "Kalan sure: " << kalanSure() << " saat" << endl;
        cout << "---------------------" << endl << endl;
    }
};

int main() {
    cout << "1. parametresiz constructor: " << endl;
    Batarya b1;
    b1.yazdir();

    cout << "2. tek parametreli constructor: " << endl;
    Batarya b2(5000.0);
    b2.yazdir();

    cout << "3. uc parametreli constructor: " << endl;
    Batarya b3(4000.0, 3000.0, 500.0);
    b3.yazdir();

    cout << "4. deger atama constructoru: " << endl;
    b1.setKapasite(6000.0);
    b1.setDoluluk(1500.0);
    b1.setTuketim(300.0);
    b1.yazdir();

    cout << "5. gecersiz constructor:" << endl;
    Batarya b4(-1000.0, 500.0, -200.0);
    b4.yazdir();

    return 0;
}
