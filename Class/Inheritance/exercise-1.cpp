#include <iostream>
using namespace std;

class A{
  public:
    int x;
  protected:
    int y;
    
};

class B : protected A {
  public:
    void test(){
        x = 10;
        y = 20;
    } 
    int getY(){
        return y;
    }
    void setY(int a){
        y = a;
    }
    int getX(){
        return x;
    }
    void setX(int a){
        x = a;
    }
};

int main() {

    B b;
    //b.x = 5;
    b.setX(5);
    cout<<b.getX()<<endl;
    // b.test();
    // b.setY(4);
    cout<<b.getY()<<endl;

    return 0;
}
