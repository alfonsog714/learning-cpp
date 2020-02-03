/*
    Frank's Carpet Cleaning Service
    Charges $30 per room
    Sales tax rate is 6%
    Estimates are valid for 30 days
    
    Prompt the user for the number of frooms they would like cleaned
    and provide an estimate such as:
     
    Estimate for carpet cleaning service:
    Number of rooms: 2
    Price per room: $30
    Cost: $60
    Tax: $3.6
     
====================================================================
    Total estimate: $63.6
    This estimate is valid for 30 days
    
    Pseudocode:
     * Prompt the user to enter the number of rooms
     * Display the number of rooms
     * Displayn price per room
     * 
     * Display cost: (number of rooms * price per room)
     * Display tax: number of rooms * price per room * tax rate
     * Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
     * Display estimate expiration date
*/

#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Frank's Carpet Cleaning Service." << endl;
    cout << "==================================================" << endl;
    cout << "How many rooms would you like cleaned?";
    
    int number_of_rooms{0};
    cin >> number_of_rooms;
    
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    
    cout << endl;
    return 0;
}