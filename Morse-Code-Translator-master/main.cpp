#include <iostream>
#include <string>
#include <map>
using namespace std;

string get_morse(string english){

    string fullMorse;
    map<char, string>morse;
    morse.insert(std::make_pair('A', ".-"));
    morse.insert(std::make_pair('B', "-..."));
    morse.insert(std::make_pair('C', "-.-."));
    morse.insert(std::make_pair('D', "-.."));
    morse.insert(std::make_pair('E', "."));
    morse.insert(std::make_pair('F', "..-."));
    morse.insert(std::make_pair('G', "--."));
    morse.insert(std::make_pair('H', "...."));
    morse.insert(std::make_pair('I', ".."));
    morse.insert(std::make_pair('J', ".---"));
    morse.insert(std::make_pair('K', "-.-"));
    morse.insert(std::make_pair('L', ".-.."));
    morse.insert(std::make_pair('M', "--"));
    morse.insert(std::make_pair('N', "-."));
    morse.insert(std::make_pair('O', "---"));
    morse.insert(std::make_pair('P', ".--."));
    morse.insert(std::make_pair('Q', "--.-"));
    morse.insert(std::make_pair('R', ".-."));
    morse.insert(std::make_pair('S', "..."));
    morse.insert(std::make_pair('T', "-"));
    morse.insert(std::make_pair('U', "..-"));
    morse.insert(std::make_pair('V', "...-"));
    morse.insert(std::make_pair('W', ".--"));
    morse.insert(std::make_pair('X', "-..-"));
    morse.insert(std::make_pair('Y', "-.--"));
    morse.insert(std::make_pair('Z', "--.."));

    //Convert String to Char
    for(std::string::size_type i = 0; i < english.size(); i++){
        fullMorse += morse.at(toupper(english[i])) + " ";
    }
    return "Morse: " + fullMorse;
}

int main()
{
    string input;
    cout << "\nMORSE CODE";
    cout << "\n==========\n";
    while(true){
        cout << "\nText: ";
        cin >> input;
        cout << get_morse(input) << "\n";
    }

    return 0;
}
