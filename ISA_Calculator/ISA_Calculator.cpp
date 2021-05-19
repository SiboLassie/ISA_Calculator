#include <iostream>
#include "ISA_Calc.h"
#include <string>
using namespace std;
using namespace ISA;


void isaCalculator()
{
    ISA_Calc isaCalc;
    int input;
    bool calcMore = true;
    string ans;

    std::cout << "This is an International Standard Atmosphere Calculator for a single value.\n";
    std::cout << "Enter your altitude as an integer between 0 to 25000 to calculate the temperature.\n\n";

    while (calcMore) { 
        
        while (true)
        {
            std::cout << "Enter your Altitude: ";
            std::cin >> input;
            if (input < 0 || input > 25000 || !cin.good()) {
                std::cout << "\n*Error: Please your altitude value as an Integer between 0 to 25000 \n\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            else
                break;
        }
        std::cout << "Your Temperature at Altitude " << input << "m is: " << isaCalc.getTemperature(input) << " C \n";
        
        std::cout << "\n Calculate again?: (Y, N) \n";
        std::cin >> ans;
       
        if (ans == "N" || ans == "n")
        {
            calcMore = false;
            break;
        }
        while (ans != "y" || ans != "Y")
        {
            std::cout << "\n Calculate again?: (Y, N) \n";
            std::cin >> ans;
            if (ans == "N" || ans == "n")
            {
                calcMore = false;
                break;
            }
            else if (ans == "y" || ans == "Y") {
                break;
            }
        }
    }
}


