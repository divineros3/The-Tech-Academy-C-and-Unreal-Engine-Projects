// OOPSubmissionAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Dog {
private:
    string breed;
    string color;
    double height;
    double weight;

public:
    //Constructor
    Dog(string breed, string color, double height, double weight)
        : breed(breed), color(color), height(height), weight(weight) {}

    //Methods
    void shake() {
        cout << "Dog is shaking hands!" << endl;
    }

    void sit() {
        cout << "Dog is sitting!" << endl;
    }

    void layDown() {
        cout << "Dog is laying down!" << endl;
    }

    //Getters for properties
    string getBreed() const {
        return breed;
    }

    string getColor() const {
        return color;
    }

    double getHeight() const {
        return height;
    }

    double getWeight() const {
        return weight;
    }
};

int main()
{
    //Creating an instance of the Dog class
    Dog myDog("Hound", "Brown", 2, 60);

    //Accessing properties and calling methods
    cout << "Breed: " << myDog.getBreed() << endl;
    cout << "Color: " << myDog.getColor() << endl;
    cout << "Height: " << myDog.getHeight() << " feet" << endl;
    cout << "Weight: " << myDog.getWeight() << " lbs" << endl;

    myDog.shake();
    myDog.sit();
    myDog.layDown();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
