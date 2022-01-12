//This is a demonstration of the difference between function overloading vs. function overriding in C++

#include <iostream>

//Overloaded functions
void test(int);
void test(float);
void test(int, float);


class BaseClass{
public:
    virtual void Display()
    {
        std::cout << "\nThis is the Display() method"
                    "of BaseClass";
    }
    void Show(){
        std::cout << "\nThis is the Show() method "
                    "of BaseClass\n";
    }
};

class DerivedClass : public BaseClass{
public:
    //Overriding method - new working of base class' display method
    void Display()
    {
        std::cout << "\nThis is Display() method"
                    "of DerivedClass ";
    }
};

//Driver code
int main() {

    int apples = 5;
    float dollars = 5.50;

    // Overloaded functions w/ different type and numbers parameters
    test(apples);
    test(dollars);
    test(apples, dollars);

    DerivedClass dr;
    BaseClass &bs = dr;
    bs.Display();
    dr.Show();

    return 0;

}

//Method 1
void test(int variable) {
    std::cout << "Apples number: " << variable << std::endl;
}

//Method 2
void test(float variable) {
    std::cout << "Dollars number: " << variable << std::endl;
}
//Method 3
void test(int variable1, float variable2) {
    std::cout << "Apples number: " << variable1;
    std::cout << " and dollars number: " << variable2 << std::endl;
}
