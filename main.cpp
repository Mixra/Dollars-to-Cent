#include <iostream>
#include <math.h>
int main(int quarter, int dime, int nickel, int penny, int coins)
{
    double dollars;
    //Get user input & store variables
    std::cout << "Enter amount of dollar(s): $";
    std::cin >> dollars;

    //Convert dollar(s) to coins
    coins = dollars * 100;

    //Finding quarter(s)
    quarter = coins / 25;
    coins %= 25;

    //Finding dime(s)
    dime = coins / 10;
    coins %= 10;

    //Finding nickel(s)
    nickel = coins / 5;
    coins %= 5;

    //Finding penny(ies)
    penny = coins / 1;


    //Print
    if(quarter < 1 or quarter == 1) {
        std::cout << "Quarter: " << quarter << "\n";
    }else{
        std::cout << "Quarters: " << quarter << "\n";
    }
    if(dime < 1 or dime ==1){
        std::cout << "Dime: " << dime << "\n";
    }else{
        std::cout << "Dimes: " << dime << "\n";
    }
    if(nickel < 1 or nickel ==1){
        std::cout << "Nickel: " << nickel << "\n";
    }else{
        std::cout << "Nickels: " << nickel << "\n";
    }
    if(penny < 1 or penny ==1){
        std::cout << "Penny: " << penny << "\n";
    }else{
        std::cout << "Pennies: " << penny << "\n";
    }
}
