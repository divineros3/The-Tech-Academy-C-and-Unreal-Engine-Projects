// C++Challenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

////Utilize these keywords: try, throw and catch.
//double division(int a, int b) {
//    if (b == 0) {
//        throw "Division by zero error"; // Throwing an exception
//    }
//    return static_cast<double>(a) / b;
//}



////Write code in C++ that utilizes polymorphism.
////Base class with a virtual function
//class Shape {
//public:
//    virtual void draw() {
//        cout << "Drawing a shape" << endl;
//    }
//};
//
////Derived classes overriding the virtual function
//class Circle : public Shape {
//public:
//    void draw() override {
//        cout << "Drawing a circle" << endl;
//    }
//};
//
//class Square : public Shape {
//public:
//    void draw() override {
//        cout << "Drawing a square" << endl;
//    }
//};



////Deriving a class from more than one base class
////First base class
//class FirstBase {
//protected:
//    int firstVar;
//};
//
////Second base class
//class SecondBase {
//protected:
//    int secondVar;
//};
//
////Derived class inheriting from multiple base classes
//class DerivedClass : public FirstBase, public SecondBase {
//public:
//    void setVariables(int firstValue, int secondValue) {
//        firstVar = firstValue;
//        secondVar = secondValue;
//    }
//
//    void displayVariables() {
//        cout << "First variable: " << firstVar << endl;
//        cout << "Second variable: " << secondVar << endl;
//    }
//};


////Multilevel inheritance
////Base class
//class BaseClass {
//public:
//    int baseVar;
//};
//
////Intermediate class inheriting from BaseClass
//class IntermediateClass : public BaseClass {
//public:
//    void setBaseVar(int value) {
//        baseVar = value;
//    }
//};
//
////Derived class inheriting from IntermediateClass
//class DerivedClass : public IntermediateClass {
//public:
//    void displayBaseVar() {
//        cout << "Base variable value: " << baseVar << endl;
//    }
//};


////Inheriting from a class using the : symbol
////Base Class
//class BaseClass {
//public:
//    int baseVar;
//
//    void displayBaseVar() {
//        cout << "Base variable value: " << baseVar << endl;
//    }
//};
//
////Derived class inheriting from BaseClass
//class DerivedClass : public BaseClass {
//public: 
//    void setBaseVar(int value) {
//        baseVar = value;
//    }
//};



////Utilize the protected keyword.
////Base class with protected member
//class BaseClass {
//protected:
//    int protectedVar; // Protected member variable
//
//public:
//    void setProtectedVar(int value) {
//        protectedVar = value;
//    }
//
//    void displayProtectedVar() {
//        cout << "Protected variable value: " << protectedVar << endl;
//    }
//};
//
////Derived class inheriting from the base class
//class DerivedClass : public BaseClass {
//public:
//    void accessProtected() {
//        //Accessing the protected member variable from the derived class
//        protectedVar = 50; //Allow within the derived class
//    }
//};




////Utilize the private keyword.
//class MyClass {
//private:
//    int privateVar; //Private member variable
//
//public:
//    //Public member function to access the private variable
//    void setPrivateVar(int value) {
//        privateVar = value;
//    }
//
//    void displayPrivateVar() {
//        cout << "Private variable value: " << privateVar << endl;
//    }
//};



////Create a constructor with parameters. Define a constructor outside a class.
////Class declaration
//class MyClass {
//public:
//    int myVar;
//
//    //Constructor with parameters inside the class definition
//    MyClass(int value) {
//        myVar = value;
//    }
//
//    void display() {
//        cout << "Value of myVar: " << myVar << endl;
//    }
//};


//class MyClass {
//public:
//    int myVar;
//
//    //Constructor declaration inside the class
//    MyClass(int value);
//
//    void display() {
//        cout << "Value of myVar: " << myVar << endl;
//    }
//};
//
////Constructor definition outside the class
//MyClass::MyClass(int value) {
//    myVar = value;
//}



//// Define a function that belongs to a class inside the class definition. Define a function that belongs to a class outside the class definition.
////Class declaration
//class MyClass {
//public:
//    int myVar; //Public member variable
//
//    //Function defined inside the class
//    void displayInside() {
//        cout << "Value of myVar (inside): " << myVar << endl;
//    }
//};

//class MyClass {
//public:
//    int myVar; //Public member variable
//
//    //Function declaration inside the class
//    void displayOutside(); //Function defined outside the class
//};
//
////Function definition outside the class
//void MyClass::displayOutside() {
//    cout << "Value of myVar (outside): " << myVar << endl;
//}



////Create a class (use the class keyword). Utilize the public keyword. Create multiple objects within a single class.
////Class declaration
//class MyClass {
//public:
//    int myVar; //Public member variable
//
//    void display() {
//        cout << "Value of myVar: " << myVar << endl;
//    }
//};


////Call a function without an argument. Declare a function with multiple parameters. Utilize the return keyword inside a function. Pass a reference to a function. Use function overloading(name multiple functions with different parameters).
////Function without an argument
//void functionWithoutArg() {
//    cout << "Function without argument called!" << endl;
//}
//
////Function with multiple parameters
//int add(int a, int b) {
//    return a + b;
//}
//
////Function using the return keyword
//double calculateCircleArea(double radius) {
//    const double pi = 3.14159;
//    return pi * radius * radius;
//}
//
////Function accepting a reference
//void doubleValue(int& num) {
//    num *= 2;
//}
//
////Function overloading (same name with different parameters)
//int add(int a, int b, int c) {
//    return a + b + c;
//}



////Utilize the main() function. Declare your own function. Call a function.
//// Function declaration
//void myFunction() {
//    std::cout << "Inside myFunction() - Hello from your own function!" << std::endl;
//}



int main()
{ 
    ////Utilize these keywords: try, throw and catch.
    //int x = 10, y = 0;
    //double result = 0;

    //try {
    //    //Attempting division, potential for exception
    //    result = division(x, y);
    //    cout << "Result of division: " << result << endl;
    //}
    //catch (const char* error) { //Catching the exception
    //    cout << "Exception caught: " << error << endl;
    //}

    //return 0;


    ////Write code in C++ that utilizes polymorphism.
    ////Creating objects of different derived classes
    //Shape* shape1 = new Circle();
    //Shape* shape2 = new Square();

    ////Calling the draw function polymorphically
    //shape1->draw(); //calls draw() of circle
    //shape2->draw(); //calls draw() of square

    //delete shape1;
    //delete shape2;

    //return 0;



    ////Deriving a class from more than one base class
    //DerivedClass obj;
    //obj.setVariables(10, 20);
    //obj.displayVariables();

    //return 0;


    ////Multilevel inheritance
    //DerivedClass obj;
    //obj.setBaseVar(42);
    //obj.displayBaseVar();

    //return 0;



    ////Inheriting from a class using the : symbol
    //DerivedClass obj;
    //obj.setBaseVar(42);
    //obj.displayBaseVar();

    //return 0;



    ////Utilize the protected keyword.
    //DerivedClass obj;

    ////Accessing or modifying the protected member variable from outside the class will cause a compilation error
    ////obj.protectedVar = 10; //This line will cause an error

    //obj.setProtectedVar(30);
    //obj.displayProtectedVar();

    //obj.accessProtected();
    //obj.displayProtectedVar();

    //return 0;



    ////Utilize the private keyword.
    //MyClass obj;

    ////Attempting to access or modify the private member variable directly from outside the class will cause a compilation error
    ////obj.privateVar = 10; //This line will cause an error

    ////Accessing the private variable through a public member function
    //obj.setPrivateVar(20);
    //obj.displayPrivateVar();

    //return 0;



    ////Create a constructor with parameters. Define a constructor outside a class.
    ////Using the constructor with parameters
    //MyClass obj(42);
    //obj.display();

    //return 0;

    ////Using the constructor with parameters
    //MyClass obj(24);
    //obj.display();

    //return 0;




    //// Define a function that belongs to a class inside the class definition. Define a function that belongs to a class outside the class definition.
    //MyClass obj;
    //obj.myVar = 10;
    //obj.displayInside();

    //return 0;

   /* MyClass obj;
    obj.myVar = 20;
    obj.displayOutside();

    return 0;*/



    ////Create a class (use the class keyword). Utilize the public keyword. Create multiple objects within a single class.
    ////Creating objects of the class
    //MyClass obj1;
    //MyClass obj2;

    ////Accessing and modifying member variables of objects
    //obj1.myVar = 10;
    //obj2.myVar = 20;

    ////Calling member functions of objects
    //obj1.display();
    //obj2.display();

    //return 0;



    ////Call a function without an argument. Declare a function with multiple parameters. Utilize the return keyword inside a function. Pass a reference to a function. Use function overloading(name multiple functions with different parameters).
    ////Call function without an argument
    //functionWithoutArg();

    ////Call function with multiple parameters
    //int sum = add(5, 3);
    //cout << "Sum: " << sum << endl;

    ////Call function using the return keyword
    //double radius = 5.0;
    //double area = calculateCircleArea(radius);
    //cout << "Area of circle with radius " << radius << " is: " << area << endl;

    ////Call function accepting a reference
    //int value = 10;
    //cout << "Original value: " << value << endl;

    ////Call overloaded functions
    //int result1 = add(2, 3);
    //int result2 = add(1, 2, 3);
    //cout << "Result of add(2, 3): " << result1 << endl;
    //cout << "Result of add(1, 2, 3): " << result2 << endl;

    //return 0;




    ////Utilize the main() function. Declare your own function. Call a function.
    //std::cout << "Inside main() - Calling myFunction()" << std::endl;

    //// Calling the function
    //myFunction();

    //return 0;
    


    ////Utilize the dereference operator.
    //int myVar = 42;
    //int* ptr = &myVar;

    //cout << "Value of myVar: " << myVar << endl;
    //cout << "Address of myVar: " << &myVar << endl;
    //cout << "Value of ptr (address stored): " << ptr << endl;
    //cout << "Value at the address ptr points to: " << *ptr << endl;

    //return 0;



    ////Utilize the * operator to create a pointer variable.
    //int myVar = 42;

    ////Creating a pointer variable using the * operator
    //int* ptr = &myVar;

    //cout << "Value of myVar: " << myVar << endl;
    //cout << "Address of myVar: " << &myVar << endl;
    //cout << "Value of ptr (address stored): " << ptr << endl;

    //return 0;



    ////Utilize the & operator to get the memory address of a variable
    //int myVar = 42;

    ////Getting the memory address of a variable using the & operator
    //cout << "Value of myVar: " << myVar << endl;
    //cout << "Memory address of myVar: " << &myVar << endl;

    //return 0;



    ////Reference variable
    //int originalVar = 10;

    ////creating a reference variable
    //int& refVar = originalVar;

    //cout << "Original variable value: " << originalVar << endl;
    //cout << "Reference variable value: " << refVar << endl;

    ////Modifying the original variable through the reference
    //refVar = 20;

    //cout << "Modified original variable value: " << originalVar << endl;
    //cout << "Modified reference variable value: " << refVar << endl;

    //return 0;



    ////declare and initialize an array
    //int myArray[5] = { 10, 20, 30, 40, 50 };

    ////Loop through the elements of the array
    //for (int i = 0; i < 5; i++) {
    //    cout << "Element at index " << i << ": " << myArray[i] << endl;
    //}

    //return 0;


    ////Declare and initialize an array
    //int myArray[5] = { 10, 20, 30, 40, 50 };

    ////Displaying one of the elements (element at index 2)
    //cout << "Element at index 2: " << myArray[2] << endl;

    //return 0;



    //int count = 0;

    ////while loop with break and continue
    //while (count < 5)
    //{
    //    count++;

    //    if (count == 2) {
    //        cout << "Skipping iteration " << count << endl;
    //        continue; //Skips the rest of the loop body for this iteration
    //    }

    //    cout << "Count: " << count << endl;

    //    if (count == 4) {
    //        cout << "Stopping the loop at count " << count << endl;
    //        break; //Exits the loop when count reaches 4
    //    }
    //}

    //cout << "Loop finished!" << endl;

    //return 0;



    /*for (int i = 0; i < 200; i++) {
        if (i == 50) {
            break;
        }
        if (i % 2 == 0) {
            continue;
        }
        cout << "Iteration " << i << endl;

    }*/



    //// For loop
    //for (int i = 0; i < 5; i++)
    //{
    //    cout << "Iteration " << i + 1 << endl;
    //}

    //cout << "Loop finished!" << endl;

    //return 0;


    //int count = 0;

    ////Do-while loop
    //do
    //{
    //    cout << "Count: " << count << endl;
    //    count++;
    //} 
    //while (count < 5);

    //cout << "Loop finished!" << endl;

    //return 0;


    ////while loop
    //int count = 0;

    //while (count < 5)
    //{
    //    cout << "Count: " << count << endl;
    //    count++;
    //}

    //cout << "Loop finished!" << endl;

    //return 0;


    //int x = 10;
    //int y = 20;

    ////If statement
    //if (x, y)
    //{
    //    cout << "x is greater than y." << endl;
    //}

    ////Else statement
    //else
    //{
    //    cout << "y is greater than or equal to x." << endl;
    //}

    //int option = 2;

    ////Else if statement
    //if (option == 1)
    //{
    //    cout << "Option 1 selected." << endl;
    //}
    //else if (option == 2)
    //{
    //    cout << "Option 2 selected." << endl;
    //}
    //else
    //{
    //    cout << "Invalid option selected." << endl;
    //}

    //int choice = 2;

    ////Switch statement
    //switch (choice)
    //{
    //    case 1:
    //        cout << "Case 1 selected." << endl;
    //    case 2:
    //        cout << "Case 2 selected." << endl;
    //        break;
    //    default:
    //        cout << "Default case selected." << endl;
    //}

    //int value = (x, y) ? x : y;

    ////Ternary operator
    //cout << "Largest value is: " << value << endl;

    //return 0;


    ////Math functions
    //int x = 10;
    //int y = 15;

    ////Utilize the max(x, y) function
    //int maximum = max(x, y);
    //cout << "Maximum between x and y: " << maximum << endl;

    //double number = 25.0;

    ////Utilize the sqrt function
    //double squareRoot = sqrt(number);
    //cout << "Square root of " << number << " is: " << squareRoot << endl;

    //double value = 3.7;

    ////Utilize the round function
    //double roundedValue = round(value);
    //cout << "Rounded value of " << value << " is: " << roundedValue << endl;

    //double base = 2.0;
    //double exponent = 3.0;

    ////Utilize the pow(x, y) function
    //double powerResult = pow(base, exponent);
    //cout << base << " raised to the power of " << exponent << " is: " << powerResult << endl;

    //return 0;


    ////Utilize the getline() function
    //string fullName;
    //cout << "Type your full name: ";
    //getline(cin, fullName);
    //cout << "Your name is: " << fullName;


    /*//Utilize the '&&', '||', '!' logical operators and display their results in the console
    bool a = true;
    bool b = false;

    //Logical AND (&&)
    bool resultAnd = a && b; //true if both a and b are true
    cout << "Logical AND (a && b): " << boolalpha << resultAnd << endl;

    //Logical OR (||)
    bool resultOr = a || b; //true if either a or b is true
    cout << "Logical OR (a || b): " << resultOr << endl;

    //Logical NOT (!)
    bool resultNotA = !a; //negation of a 
    bool resultNotB = !b; //negation of b
    cout << "Logical NOT (!a): " << resultNotA << endl;
    cout << "Logical NOT (!b): " << resultNotB << endl;

    return 0;
    
    
    //Utilize the '=', '+=', '&=', '<<=' assignment operators and display the result in the console
    int a = 5;
    int b = 3;

    //Assignment (=)
    int result = a;
    cout << "Result after assignment: " << result << endl;

    //Addition assignment (+=)
    result += b; //equivalent to: result = result + b;
    cout << "Result after addition assignment: " << result << endl;

    //Bitwise AND assignment (&=)
    result &= b; //Equivalent to: result = result & b;
    cout << "Result after bitwise AND assignment: " << result << endl;

    //Left shift assignment (<<=)
    result <<= 2; //Equivalent to: result = result << 2;
    cout << "Result after left shift assignment: " << result << endl;

    return 0;


    //Utilize the '>', '==', '!=', '<=' comparison operators and display the results in the console
    int x = 5;
    int y = 10;

    //Greater than (>)
    bool greaterThan = x > y;
    cout << "Is x greater than y? " << boolalpha << greaterThan << endl;

    //Equal to (==)
    bool equalTo = x == y;
    cout << "Is x equal to y? " << equalTo << endl;

    //Not equal to (!=)
    bool notEqualTo = x != y;
    cout << "Is x not equal to y? " << notEqualTo << endl;

    //Less that or equal to (<=)
    bool lessThanOrEqualTo = x <= y;
    cout << "Is x less than or equal to y? " << lessThanOrEqualTo << endl;

    return 0;


    //Utilize the '+', '-', '*', '/' operators and display the results in the console
    int a = 10;
    int b = 5;

    //addition
    int addition = a + b;
    cout << "Addition: " << addition << endl;

    //subtraction
    int subtraction = a - b;
    cout << "Subtraction: " << subtraction << endl;

    //multiplication
    int multiplication = a * b;
    cout << "Multiplication: " << multiplication << endl;

    //division
    int division = a / b;
    cout << "Division: " << division << endl;

    //increment
    int c = 7;
    cout << "Original c: " << c << endl;
    c++; //Increment c by 1
    cout << "After increment: " << c << endl;

    return 0;

 
    //Utilize the length() function and display the output in the console
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;

    //Access and pring the third character in one of your strings in the console.
    cout << txt[3] << endl;

    //Change the value of a specific character in a string.
    txt[3] = 'd';
    cout << txt << endl;

    //Utilize a string type and concatenate a string
    string firstName = "Divine ";
    string lastName = "Martinez";
    string fullName = firstName + lastName;
    cout << fullName << endl;

    //Utilize the float keyword
    float myFloat = 5.75;
    cout << myFloat << endl;

    //Utilize const keyword
    const int myNum = 15; //myNum will always be 15
    cout << myNum << endl;

    //Declare and initialize variables
    char myChar = 'A';
    int myInt = 10;
    double myDouble = 3.14;
    bool myBool = true;
    string myString = "Hello, C++!";

    //Display the value of each variable
    cout << "Character: " << myChar << endl;
    cout << "Integer: " << myInt << endl;
    cout << "Double: " << myDouble << endl;
    cout << "Boolean: " << myBool << endl;
    cout << "String: " << myString << endl;

    //Declare multiple variables of the same data type
    int a = 5, b = 10, c = 15;

    //Display the values of multiple variables
    cout << "Multiple variables of the same type: " << a << ", " << b << ", " << c << endl;

    return 0; 

    //Display an output
    cout << "Hello World!\n" << endl;
    cout << "I am learning C++" << endl;
    return 0; */
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
