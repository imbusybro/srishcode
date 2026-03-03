#include <iostream>
using namespace std;
class Animal 
{
public:
    virtual void speak(int ind) 
    { 
        cout << "Alice hears a sound..." << endl; 
    }
};
class Owl : public Animal 
{
public:
    void speak(int ind) override
    {
        string msg[] = 
        {
            "Owl: You know my dear Alice, the scope of a variable extends from the point of its declaration till the end of the block containing the declaration.",
            "Owl: C++ allows common functions to be made friendly with classes using the keyword friend.",
            "Owl: The dereferencing operator ->* is used with pointers to members.",
            "Owl: Operator overloading is done using special operator functions.",
            "Owl: A derived class inherits properties of a base class.",
            "Owl: In multiple inheritance, base classes are constructed in the order declared.",
            "Owl: Compile time polymorphism is achieved using function and operator overloading."
        };
        cout << msg[ind] << endl;
    }
};
class Fish : public Animal 
{
public:
    void speak(int ind) override
    { 
        string msg[] = 
        {
            "Fish: The scope resolution operator :: allows access to global variables.",
            "Fish: Private functions can only be called by member functions of the same class.",
            "Fish: A constructor initializes objects automatically when created.",
            "Fish: Operator overloading must involve at least one user-defined type.",
            "Fish: Multilevel and hierarchical inheritance are forms of inheritance.",
            "Fish: Object pointers can access members using the arrow operator.",
            "Fish: Run time polymorphism uses dynamic binding and virtual functions."
        };

        cout << msg[ind] << endl;
    }
};
class Cat : public Animal 
{
public:
    void speak(int ind) override
    { 
        string msg[] = 
        {
            "Cat: Member functions can be defined inside or outside the class.",
            "Cat: Public data is accessible everywhere.",
            "Cat: Copy constructors and destructors manage object lifecycle.",
            "Cat: Casting operator functions enable user-defined type conversion.",
            "Cat: Private members cannot be inherited.",
            "Cat: Objects can be created dynamically using new operator.",
            "Cat: I hope this talk was rewarding for you!"
        };
        cout << msg[ind] << endl;
    }
};

class Mole : public Animal 
{
public:
    void speak(int ind) override
    { 
        string msg[] =
        {
            "Mole: Functions defined inside a class are treated as inline.",
            "Mole: Protected members are accessible in derived classes.",
            "Mole: Operator overloading enhances extensibility of C++.",
            "Mole: Casting operator functions must not specify a return type.",
            "Mole: Friend functions can access private and protected data.",
            "Mole: The keyword this represents the calling object.",
            "Mole: Remember everything we have taught you for the maze ahead!"
        };

        cout << msg[ind] << endl;
    }
};
class Turtle : public Animal 
{
public:
    void speak(int ind) override
    { 
        string msg[] = 
        {
            "Turtle: Member functions have special characteristics in program development.",
            "Turtle: It is possible to take the address of a class member using &.",
            "Turtle: Most C++ operators can be overloaded except a few like :: and sizeof.",
            "Turtle: Inheritance provides reusability of code.",
            "Turtle: Multipath inheritance duplication can be avoided using virtual base classes.",
            "Turtle: Polymorphism means one name, multiple forms.",
            "Turtle: All the best finding your way out!"
        };

        cout << msg[ind] << endl;
    }
};
int main()
{
    Owl owl;
    Fish fish;
    Cat cat;
    Mole mole;
    Turtle turtle;

    for(int i = 0; i < 7; i++)
    {
        owl.speak(i);
        fish.speak(i);
        cat.speak(i);
        mole.speak(i);
        turtle.speak(i);
        fish.speak(i);  
        cout << endl;
    }
    return 0;
}
