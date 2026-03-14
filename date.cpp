#include <iostream>
using namespace std;

class Tarih{

 private:
     int gun,ay,yil;
 
 public:

	void tarihAta(int g,int a,int y){
	gun=g;
	ay=a;
	yil=y;	
	}

	int gunAl(){
	  return gun;	
	}

	int ayAl(){
	return ay;
	}

	int yilAl(){
	return yil;
	}

	void gunAta(int g){
	if(g<0 | g>31)
	    cout<<"yanlis gun bilgisi girdiniz."<<endl;
	else
	    gun=g;
	}

	void ayAta(int a){
	if(a<0 | a>12)
	   cout<<"yanlis ay bilgisi girdiniz"<<endl;
	else 
	   ay = a;
	}

	void yilAta(int y){
	if(y<1)
	   cout<<"yanlis yil bilgisi girdiniz"<<endl;
	else 
	   yil = y;
	}
 };

int main()
{
 Tarih T1;
 T1.tarihAta(4,5,1990);

 cout<<"tarih bilgisi: "<<T1.gunAl()<<"/"<<T1.ayAl()<<"/"<<T1.yilAl()<<endl;

 Tarih T2;
 T2.gunAta(3);
 T2.ayAta(3);
 T2.yilAta(2026);

 return 0;
}
