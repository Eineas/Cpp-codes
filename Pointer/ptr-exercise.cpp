#include <iostream>
using namespace std;

int main(){
    
int ilkdeger=5,ikincideger = 15;
int *p1,*p2;
p1 = &ilkdeger;
p2 = &ikincideger;

cout<<p1<<endl;
cout<<p2<<endl;

cout<<ilkdeger<<endl;
cout<<ikincideger<<endl;

*p1 = 10;  
cout<<ilkdeger<<endl;

*p2 = *p1;
cout<<"İkinci deger: "<<ikincideger<<endl;
cout<<p1<<endl;
cout<<p2<<endl;

p1 = p2;
cout<<p1<<endl;
cout<<p2<<endl;
//*p1 = 20;



}
