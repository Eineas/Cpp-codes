#include <iostream>
using namespace std;

class Saat{
  private:
	int saat;
	int dakika;
	int saniye;

  public:
	
	Saat(){
	saat=0;
	dakika=0;
	saniye=0;
	}
	
	Saat(int s,int d){
	saniye = 0;
	saatAta(s);
	dakikaAta(d);
	}
	
	Saat(int s,int d,int sn){
	saatAta(s);
	dakikaAta(d);
	saniyeAta(sn);
	}

	void saatAta(int s){
	if(s>=0 && s<24)
	   saat=s;
	else
	   cout<<"Gecersiz deger! "<<endl;
	}

	void dakikaAta(int d){
	if(d>=0 && d<60)
	   dakika=d;
	else
	   cout<<"Gecersiz deger! "<<endl;
	}

	void saniyeAta(int sn){
	if(sn>=0 && sn<60)
	   saniye=sn;
	else
	   cout<<"Gecersiz deger! "<<endl;
	}

	int saatAl(){
	   return saat;
	}

	int dakikaAl(){
	   return dakika;
	}

	int saniyeAl(){
	   return saniye;
	}

	void yazdir(){
	cout<<(saat < 10 ? "0":"")<<saat<<(dakika < 10 ? "0":"")<<dakika<<":"<<(saniye < 10 ?"0":"")<<saniye<<endl;

	}
};

int main()
{
   Saat s1;
   cout<<"(ilk) varsayilan saat: ";
   s1.yazdir();
	
   Saat s2(14,30);
   cout<<"2. saat degeri: ";
   s2.yazdir();

   Saat s3(5,8,30);
   cout<<"3. saat değeri (tum degerler girildi): ";
   s3.yazdir();

   Saat s4(25,70,30);
   s4.yazdir();
 return 0;
}
