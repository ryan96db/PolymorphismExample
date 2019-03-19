#include <iostream>

using namespace std;

class Animal {
    public:


    virtual void MakeNoise(){};
};

class Cat: public Animal
{

public:

    virtual void MakeNoise()
    {
        cout << "Meow!" << endl;
    }
};

class Dog: public Animal
{
public:

    virtual void MakeNoise()
    {
        cout << "Woof!" << endl;
    }
};

int main()
{
    Cat paul;
    Dog krypto;
    paul.MakeNoise();
    krypto.MakeNoise();

    return 0;
}
