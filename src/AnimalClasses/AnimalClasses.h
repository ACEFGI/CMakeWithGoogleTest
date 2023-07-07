#include <string>
#include <iostream>

// base abstract class. that is what we use as the interface
class Animal
{
public:
    Animal(){}

    // this is required to properly delete virtual classes
    virtual ~Animal() {}

    // with this strange syntax we define an unimplemeted "interface" function
    virtual std::string make_sound() = 0;

};


class Dog: public Animal
{
public:
    Dog() {}

    // here we implement the interface
    std::string make_sound() override
    {
        return "bark!";
    }

    // type-specific method
    std::string wag()
    {
        return "*wags*";
    }
};


class Cat: public Animal
{
public:
    Cat() {}

    // here we implement the interface
    std::string make_sound() override
    {
        return "Meow!";
    }

    // type-specific method
    std::string purr()
    {
        return "*purrs*";
    }
};



// dispatch  via templates (duck typing), we could have an array with cats and dogs!
template <typename T>
std::string animal_sound(T& a)
{
    return a.make_sound();
}
