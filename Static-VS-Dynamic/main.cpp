#include <iostream>

/*
* Dynamic and Static Binding Example
* CJ Busca
*/


//Dynamic Binding
class Bravo
{
    public:

    // The Virtual Function
    virtual void function(){
        std::cout << "The base class function is called.\n";
    }
};

class Delta: public Bravo{
    public:
    void function(){
        std::cout << "The derived class function is called.\n";
    }
};

//Static Binding

class ComputeSum{
    public:

    int sum(int x, int y){
        return x + y;
    }

    int sum(int x, int y, int z){
        return x + y + z;
    }
};

int main()
{
    //Dynamic
    Bravo base;
    Delta derived;

    Bravo *basePointer = &base;
    basePointer->function();

    basePointer = &derived;
    basePointer->function();

    //Static
    ComputeSum obj;
    std::cout << "Sum is " << obj.sum(10, 20) << std::endl;
    std::cout << "Sum is " << obj.sum(10, 20, 30) << std::endl;

    return 0;
}
