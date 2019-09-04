#include <iostream>
#include "conversion.h"
using namespace std;

int main()
{
    int number;
    bool loop = true;
    while(loop){
        std::cout << "\nEnter a number: ";
        std::cin >> number;
        Conversion obj(number);
        obj.toString();

        std::cout << "\n\nContinue (1)Yes, (0)No: ";
        std::cin >> loop;
        if(!loop){
            break;
        }
    }
    return 0;
}
