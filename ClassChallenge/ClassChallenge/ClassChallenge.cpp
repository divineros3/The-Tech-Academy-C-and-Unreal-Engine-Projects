// ClassChallenge.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//Superclass Shape
class Shape {
protected:
    string color;

public:
    //Constructor
    Shape(string color) : color(color) {}

    //Method to calculate area (to be overridden by subclasses)
    virtual double getArea() const = 0;
};

//Subclass Rectangle
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    //Constructor
    Rectangle(string color, double width, double height)
        : Shape(color), width(width), height(height) {}

    //Overriding getArea method for Rectangle
    double getArea() const override {
        return width * height;
    }
};

//Subclass Triangle
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    //Constructor
    Triangle(string color, double base, double height)
        : Shape(color), base(base), height(height) {}

    //Overriding getArea method for Triangle
    double getArea() const override {
        return 0.5 * base * height;
    }
};

//Subclass Circle
class Circle : public Shape {
private:
    double radius;

public:
    //Constructor
    Circle(string color, double radius)
        : Shape(color), radius(radius) {}

    //Overriding getArea method for Circle
    double getArea() const override {
        return 3.14159 * radius * radius;
    }
};

int main()
{
    //Creating instances of shapes
    Rectangle rectangle("Red", 5.0, 3.0);
    Triangle triangle("Blue", 4.0, 6.0);
    Circle circle("Green", 7.0);

    //Getting areas of shapes
    cout << "Area of Rectangle: " << rectangle.getArea() << endl;
    cout << "Area of Triangle: " << triangle.getArea() << endl;
    cout << "Area of Circle: " << circle.getArea() << endl;

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
