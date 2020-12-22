//
//  4_4_1_2_Instruction_switch.cpp
//  Part_4
//
//  Created by German on 22/12/2020.
//  Copyright © 2020 German. All rights reserved.
//

#include <iostream>

int main()
{
    constexpr double cm_per_inch = 2.54;
    double lenght = 1;
    char unit = 'a';
    std::cout << "Please, writhe the lenght value"
    << " and unit (c or i): \n";
    std::cin >> lenght >> unit;
    switch (unit) {
        case 'i' :
            std::cout   << lenght << " in == "
                        << cm_per_inch*lenght << " cm\n";
            break;
        case 'c' :
            std::cout   << lenght << " cm == " << lenght/cm_per_inch << "in\n";
            break;
        default:
            std::cout << "Sorry, I don't know what '" << unit << "' is\n";
            break;

    }
    return 0;
}
