#include <iostream>
using namespace std;

int main(){

int *p1 = new int;
int *p2 = new int;
int *p3 = new int;

cout<<"1.sayıyı giriniz: "<<endl;
cin>>*p1;

cout<<"2.sayıyı giriniz: "<<endl;
cin>>*p2;

cout<<"3.sayıyı giriniz: "<<endl;
cin>>*p3;

int *toplam = new int;
*toplam = *p1 + *p2 + *p3;
cout<<"Toplam: "<<*toplam<<endl;

delete p1;
delete p2;
delete p3;
delete toplam;

}
