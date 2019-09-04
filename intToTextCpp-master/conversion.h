#ifndef CONVERSION_H
#define CONVERSION_H
#include <string>

class Conversion{
public:
    Conversion(int integerValueP); //Done
    //Accessors
    int get_integerValue() const; //Done
    std::string get_stringValue() const; //Done
    int get_tallyOfDigits() const; //Done
    //Mutators
    void set_integerValue(int integerValueP); //Done
    void set_stringValue(std::string stringValueP);
    //Output
    void toString() const; //Done
    //Conversion member functions
    void convertIntToString(); //Done
    std::string convertIntToStringHelper(int number); //Done

private:
    int integerValue;
    std::string stringValue;
};

#endif // CONVERSION_H
