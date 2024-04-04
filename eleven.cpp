#include <iostream>

int main(){

    double temp;
    char unit; 

    std::cout << "What unit would you like to convert to ?" << '\n';
    std::cout << "F = Fahrenheit" << '\n';
    std::cout << "C = Celsius" << '\n';
    std:: cin >> unit;

    if (unit == 'F' || unit == 'f'){
        std::cout << "Please enter the temperature in celsius: ";
        std::cin >> temp;
        temp =  (1.8 * temp) + 32.0;
        std::cout << "The temperature is: " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Please enter the temperature in fahrenheit: ";
        std:: cin >> temp;

        temp = (temp - 32) / 1.8; 
        std::cout << "The temperature is: " << temp << "C\n";
    }
    else{
        std::cout << "Please enter a proper unit. Fahrenheit or Celsius";
    }
    
    return 0;
}