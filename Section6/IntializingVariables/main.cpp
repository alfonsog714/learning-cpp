#include <iostream>

using namespace std;

// This program will calculate the area of a room in square feet.

int main() {
    
    //int age{21}; // curly brackets is one way we can intitialize a variable
    //cout << age << endl;
    
    int room_width = 0;
    int room_height = 0;
    
    cout << "Enter the width of the room: " << endl;
    cin >> room_width;
    cout << "Enter the height of the room: " << endl;
    cin >> room_height;
    
    cout << "The area of the room is " << room_width * room_height << " square feet." << endl;
    return 0;
}