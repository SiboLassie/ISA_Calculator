
#include <iostream>
#include "ISA_Calc.h"
#include <string>
using namespace std;
using namespace ISA;



int main()
{
    ISA_Calc calc;
    bool calcSingle = true;
    string ans;

    std::cout << "This is an International Standard Atmosphere Model \n";
    std::cout << "This model calculate the temperature of altitude between 0 to 25000 m\n\n";

    std::cout << "Calculating the temperature of altitude in Meters\n\n";

    for (size_t i = 0; i <= 25000; i = i+10)
    {
        std::cout << "Temperature at Altitude " << i << " [m] is: " << calc.getTemperature(i) << " [C] \n";
        
        //uncomment to display the results as points ex: (x,y). for an easy transform into a Plot graph.
        //std::cout << "(" << calc.getTemperature(i) << "," << i << ") \n";

    }

    std::cout << "\n\n-------------------------------------------------------------------------------------------------\n";
    std::cout << "Calculating the temperature of altitude in Feets\n\n";

    for (size_t i = 0; i < 82020; i = round(i+(10 * 3.28084)))
    {
        std::cout << "Temperature at Altitude " << i << " [ft] is: " << calc.getTemperature(calc.feetToMeter(i)) << " [C] \n";
        
        //uncomment to display the results as points ex: (x,y). for an easy transform into a Plot graph.
        //std::cout << "(" << calc.getTemperature(calc.feetToMeter(i)) << "," << i << ") \n";
    }

    system("pause");
    return 0;
}
