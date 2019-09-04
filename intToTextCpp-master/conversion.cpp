#include <iostream>
#include <map>
#include "conversion.h"

int Conversion::get_integerValue() const{
    return integerValue;
}

Conversion::Conversion(int integerValueP){
    this->set_integerValue(integerValueP);
    this->convertIntToString();
}

std::string Conversion::get_stringValue() const{
    return stringValue;
}

void Conversion::set_integerValue(int integerValueP){
    integerValue = integerValueP;
}

void Conversion::set_stringValue(std::string stringValueP){
    stringValue = stringValueP;
}

std::string Conversion::convertIntToStringHelper(int number){
    std::map<int, std::string> numDigit;
    numDigit.insert(std::make_pair(0, ""));
    numDigit.insert(std::make_pair(1, "One"));
    numDigit.insert(std::make_pair(2, "Two"));
    numDigit.insert(std::make_pair(3, "Three"));
    numDigit.insert(std::make_pair(4, "Four"));
    numDigit.insert(std::make_pair(5, "Five"));
    numDigit.insert(std::make_pair(6, "Six"));
    numDigit.insert(std::make_pair(7, "Seven"));
    numDigit.insert(std::make_pair(8, "Eight"));
    numDigit.insert(std::make_pair(9, "Nine"));
    numDigit.insert(std::make_pair(10, "Ten"));
    numDigit.insert(std::make_pair(11, "Eleven"));
    numDigit.insert(std::make_pair(12, "Twelve"));
    numDigit.insert(std::make_pair(13, "Thirteen"));
    numDigit.insert(std::make_pair(14, "Fourteen"));
    numDigit.insert(std::make_pair(15, "Fifteen"));
    numDigit.insert(std::make_pair(16, "Sixteen"));
    numDigit.insert(std::make_pair(17, "Seventeen"));
    numDigit.insert(std::make_pair(18, "Eighteen"));
    numDigit.insert(std::make_pair(19, "Nineteen"));
    std::map<int, std::string> doubleDigit;
    doubleDigit.insert(std::make_pair(2, "Twenty"));
    doubleDigit.insert(std::make_pair(3, "Thirty"));
    doubleDigit.insert(std::make_pair(4, "Forty"));
    doubleDigit.insert(std::make_pair(5, "Fifty"));
    doubleDigit.insert(std::make_pair(6, "Sixty"));
    doubleDigit.insert(std::make_pair(7, "Seventy"));
    doubleDigit.insert(std::make_pair(8, "Eighty"));
    doubleDigit.insert(std::make_pair(9, "Ninety"));
    if(number == 0){
        return "";
    }
    else if(number < 20){
        return numDigit.at(number)+" ";
    }
    else if(number < 100){
        return doubleDigit.at(number/10)+" "+convertIntToStringHelper(number%10);
    }
    else{
        return numDigit.at(number / 100) + " Hundred " + convertIntToStringHelper(number %100);
    }
}

void Conversion::convertIntToString(){
    std::string trippleDigit[] = {"", "Thousand", "Million", "Billion"};
    std::string stringTemp = "";
    int intTemp = this->get_integerValue();

    if(intTemp < 0){
        stringTemp += "Negative ";
        intTemp *= -1;
    }

    intTemp = this->get_integerValue();
    if(intTemp < 0){
        intTemp *= -1;
    }

    int i = 0;
    while (intTemp > 0){
        if(intTemp % 1000 != 0){
            stringTemp = convertIntToStringHelper(intTemp % 1000) + trippleDigit[i] + " " + stringTemp;
        }
            intTemp /= 1000;
            i++;
        }
    if(stringTemp==""){
        stringTemp = "Zero";
    }
    set_stringValue(stringTemp);
}

void Conversion::toString() const{
    std::cout << "\nInteger Value: " << this->get_integerValue();
    std::cout << "\nEnglish Text: " << this->get_stringValue();
}
