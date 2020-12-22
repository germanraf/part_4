//
//  4_4_1_Instructions_in.cpp
//  Part_4
//
//  Created by German on 15/12/2020.
//  Copyright © 2020 German. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
//    int a = 0;
//    int b = 0;
//    cout << "Please, write two integers:\n";
//    cin >> a >> b;
//    if(a<b) //Условие 1-я альтернатива (выбирается, если условие истинно)
//        cout << "max(" << a << "," << b
//        << ") equally to " << b <<"\n";
//    else
//        //2-я альтернатива (выбирается, когда условие ложно)
//        cout << "max(" << a << "," << b
//        << ") equally to" << a <<"\n";
//=============================================================================
    // Преобра зование дюймов в сантиметры и наоборот
    // Суффикс ' i ' или ' с ' озна чает единицу измерения на входе
//    constexpr double cm_per_inch = 2.54;    // Сантиметров в дюйме
//    double lenght = 1;                      // Длина (дюймы или см)
//    char unit = 0;
//    cout << "Please, write the lenght"
//    << " and unit (c or i):\n";
//    cin >> lenght >> unit;
//    if (unit == 'i')
//        cout    << lenght << " in == "
//                << cm_per_inch << " cm\n";
//    else if (unit == 'c')
//        cout    << lenght << " cm == "
//                << lenght/cm_per_inch << " in\n";
//    else
//        cout    << "Sorry, I don't know what '" << unit << "' is\n";
//==============================================================================
    //Используя приведенный выше пример, напишите программу для
    //перевода гривен, рублей и юаней в доллары. Если вы любите реализм,
    //уточните обменные курсы в Интернете .
    constexpr double roubl = 0.014;
    constexpr double grivna = 0.036;
    constexpr double yuan = 0.15;
    double amount_of_money;
    char currency;
    cout    << "Please, write how much money you have,"
            << " and which currency ('r', 'g' or 'y')?\n";
    cin >> amount_of_money >> currency;
    if (currency == 'r')
        cout << "You can change your money and have " << amount_of_money * roubl << " dollars\n";    
        else if (currency == 'g')
            cout << "You can change your money and have " << amount_of_money * grivna << " dollars\n";
    else if (currency == 'y')
        cout << "You can change your money and have " << amount_of_money * yuan << " dollars\n";
    else
        cout << "Sorry, I don't know what currency '" << currency << "' is\n";
    return 0;
}
