#include <iostream>

class BaseClass{
public:
    void disp(){
        std::cout<<"Parent Class function (overridden)";
    }
};
class DerivedClass: public BaseClass{
public:
    void disp() {
    std::cout<<"Child Class function (overridding)";
    }
};
int main() {
    DerivedClass obj = DerivedClass();
    obj.disp();
    return 0;
}
