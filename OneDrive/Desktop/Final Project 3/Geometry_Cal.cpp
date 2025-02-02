// Multi-function geometry calculator
//By Kimchhun, Vathana, Kimlong
#include <iostream>
#include <cmath>
using namespace std;
float rectangle_area(float l, float w)
{
    float area_r = 0;
    area_r = l * w;
    return area_r;
}
float rectangle_peri(float l, float w)
{
    float peri_r = 0;
    peri_r = 2 * (l + w);
    return peri_r;
}
float triangle_area(float base, float height)
{
    float area_t = 0;
    area_t = (base * height) / 2;
    return area_t;
}
float triangle_peri(float side1, float side2, float side3)
{
    float peri_t = 0;
    peri_t = (side1 + side2 + side3);
    return peri_t;
}
float square_area(float s)
{
    float area_s = 0;
    area_s = s * s;
    return area_s;
}
float square_peri(float s)
{
    float peri_s = 0;
    peri_s = 4 * s;
    return peri_s;
}
float circle_area(float r)
{
    float area_c = 0;
    area_c = 3.14 * (r * r);
    return area_c;
}
float circle_peri(float r)
{
    float peri_c = 0;
    peri_c = 2 * 3.14 * r;
    return peri_c;
}
float sine_value(float radian1)
{
    float value = 0;
    value = sin(radian1);
    return value;
}
float cosine_value(float radian2)
{
    float value = 0;
    value = cos(radian2);
    return value;
}
float tangent_value(float radian3)
{
    float value = 0;
    value = tan(radian3);
    return value;
}
float two_side_of_triangle(float hypotenuse)
{
    float x = 0;
    x = hypotenuse / sqrt(2);
    return x;
}
int main()
{
    float side1, side2, side3;
    float base, height;
    float r;
    float s;
    float l, w;
    int choice;
    int num, num2;
    float radian1;
    float radian2;
    float radian3;
    float hypotenuse;

    cout << "|| Welcome to the Multi-Function Geometry Calculator ||" << endl;
do {         
        cout << "- PLease choose the option below:" << endl;
        cout << "- You can always input 0 to EXIT program!" << endl;
        cout << "1. Parameter and Area of shapes" << endl;
        cout << "2. Find the other side two side of a Right Triangle" << endl;
        cout << "3. Calculate angle of functions" << endl;
        cout << "Input here: ";
        cin >> num2;
        if (num2 == 1)
        {
            system("CLS");
            cout << "- Choose the following shape to calculate: " << endl;
            cout << "0. Exit program!" << endl;
            cout << "1. Rectangle" << endl;
            cout << "2. Triangle" << endl;
            cout << "3. Square" << endl;
            cout << "4. Circle" << endl;
            cout << "5. Return!" << endl;          
            cout << "Input here: ";
            cin >> choice;
            if (choice == 1)
            {
                system("CLS");
                cout << "- Choose your option of Rectangle to calculate: " << endl;
                cout << "1. Area" << endl;
                cout << "2. Perimeter" << endl;
                cout << "3. Return!" << endl;
                cout << "Input here: ";
                cin >> num;
                if (num == 1)
                {
                    system("CLS");
                    cout << "- Find the Area of the Rectangle" << endl;
                    cout << "Input length: ";
                    cin >> l;
                    cout << "Input width: ";
                    cin >> w;
                    while (w >= l) {
                        system("CLS");
                        cout << "||            Invalid Calculation!            ||" << endl;
                        cout << "|| The width cannot be larger or equal length ||" << endl;
                        cout << "||             Please try again!              ||" << endl;
                        cout << endl;
                        cout << "Input width: ";
                        cin >> w;
                        cout << "Result: " << rectangle_area(l, w) << " square meter." << endl;
                        cout << endl;
                    }                   
                        system("CLS");
                        cout << "Result: " << rectangle_area(l, w) << " square meter." << endl;
                        cout << endl;

                }
                else if (num == 2)
                {
                    system("CLS");
                    cout << "- Find the Perimeter of the Rectangle" << endl;
                    cout << "Input length: ";
                    cin >> l;
                    cout << "Input width: ";
                    cin >> w;
                    while (w >= l) {
                        system("CLS");
                        cout << "||            Invalid Calculation!            ||" << endl;
                        cout << "|| The width cannot be larger or equal length ||" << endl;
                        cout << "||             Please try again!              ||" << endl;
                        cout << endl;
                        cout << "Input width: ";
                        cin >> w;
                        cout << "Result: " << rectangle_peri(l, w) << " meter." << endl;
                        cout << endl;
                    }
                        system("CLS");
                        cout << "Result: " << rectangle_peri(l, w) << " meter." << endl;
                        cout << endl; 
                }
                else if (num == 3) {
                    system("CLS");
                    cout << "|| Program returned! ||" << endl;
                    cout << endl;
                }
                else if (num == 0) {
                    system("CLS");
                    cout << "Exiting the program.." << endl;
                    cout << endl; }
                else {
                    system("CLS");
                    cout << "||        Invalid input!          ||" << endl;
                    cout << "|| Please input the valid option! ||" << endl;
                    cout << endl; 
                }
            }
            else if (choice == 2)
            {
                system("CLS");
                cout << "- Choose your option of Triangle to calculate: " << endl;
                cout << "1. Area" << endl;
                cout << "2. Perimeter" << endl;
                cout << "3. Return!" << endl;
                cout << "Input here: ";
                cin >> num;
                if (num == 1)
                {
                    system("CLS");
                    cout << "- Find the Area of the Triangle" << endl;
                    cout << "Input base: ";
                    cin >> base;
                    cout << "Input height: ";
                    cin >> height;
                    cout << "Result: " << triangle_area(base, height) << " square meter." << endl;
                    cout << endl;
                }
                else if (num == 2)
                {
                    system("CLS");
                    cout << "- Find the Perimeter of the Triangle" << endl;
                    cout << "Input side 1: ";
                    cin >> side1;
                    cout << "Input side 2: ";
                    cin >> side2;
                    cout << "Input side 3: ";
                    cin >> side3;
                    cout << "Result: " << triangle_peri(side1, side2, side3) << " meter." << endl;
                    cout << endl;
                }
                else if (num == 3) {
                    system("CLS");
                    cout << "|| Program returned! ||" << endl;
                    cout << endl;
                }
                else if (num == 0) {
                    system("CLS");
                    cout << "Exiting the program.." << endl;
                    cout << endl; }
                else {
                    system("CLS");
                    cout << "||        Invalid input!          ||" << endl;
                    cout << "|| Please input the valid option! ||" << endl;
                    cout << endl; 
                }
            }
            else if (choice == 3)
            {
                system("CLS");
                cout << "- Choose your option of Square to calculate: " << endl;
                cout << "1. Area" << endl;
                cout << "2. Perimeter" << endl;
                cout << "3. Return!" << endl;
                cout << "Input here: ";
                cin >> num;
                if (num == 1)
                {
                    system("CLS");
                    cout << "- Find the Area of the Square" << endl;
                    cout << "Input side: ";
                    cin >> s;
                    cout << "Result: " << square_area(s) << " square meter." << endl;
                    cout << endl;
                }
                else if (num == 2)
                {
                    system("CLS");
                    cout << "- Find the Perimeter of the Square" << endl;
                    cout << "Input side: ";
                    cin >> s;
                    cout << "Result: " << square_peri(s) << " meter." << endl;
                    cout << endl;
                }
                else if (num == 3) {
                    system("CLS");
                    cout << "|| Program Returned! ||" << endl;
                    cout << endl;
                }
                else if (num == 0) {
                    system("CLS");
                    cout << "Exiting the program.." << endl;
                    cout << endl; }
                else {
                    system("CLS");
                    cout << "||        Invalid input!          ||" << endl;
                    cout << "|| Please input the valid option! ||" << endl;
                    cout << endl;
                }              
            }
            else if (choice == 4)
            {
                system("CLS");
                cout << "- Choose your option of Circle to calculate: " << endl;
                cout << "1. Area" << endl;
                cout << "2. Perimeter" << endl;
                cout << "3. Return!" << endl;                
                cout << "Input here: ";
                cin >> num;
                if (num == 1)
                {
                    system("CLS");
                    cout << "- Find the Area of the Circle" << endl;
                    cout << "Input radius: ";
                    cin >> r;
                    cout << "Result: " << circle_area(r) << " square meter." << endl;
                    cout << endl;
                }
                else if (num == 2)
                {
                    system("CLS");
                    cout << "- Find the Perimeter of the Circle" << endl;
                    cout << "Input radius: ";
                    cin >> r;
                    cout << "Result: " << circle_peri(r) << " meter." << endl;
                    cout << endl;
                }
                else if (num == 3) {
                    system("CLS");
                    cout << "|| Program Returned! ||" << endl;
                    cout << endl;
                }
                else if (num == 0) {
                    system("CLS");
                    cout << "Exiting the program.." << endl;
                    cout << endl; }
                else {
                    system("CLS");
                    cout << "||        Invalid input!          ||" << endl;
                    cout << "|| Please input the valid option! ||" << endl;
                    cout << endl; 
                }
            }
            else if (choice == 5) {
                system("CLS");
                cout << "|| Program Returned! ||" << endl;
                cout << endl;
            }
            else if (choice == 0) {
                system("CLS");
                cout << "Exiting the program.." << endl;
                cout << endl;
            }
            else {
                system("CLS");
                cout << "||        Invalid input!          ||" << endl;
                cout << "|| Please input the valid option! ||" << endl;
                cout << endl;
            }
        }
        else if (num2 == 2)
        {
            system("CLS");
            cout << "- Find the two sides of Isoceles Right Triangle" << endl;
            cout << "Input hypotenuse: ";
            cin >> hypotenuse;
            cout << "Result: The two sides of the Right Triangle is exactly ( " << two_side_of_triangle(hypotenuse) << " ) unit length." << endl;
            cout << endl;
        }
        else if (num2 == 3)
        {
            system("CLS");
            cout << "|| Find the Angle in Radians ||" << endl;
            cout << "- Choose the type of function to calculate" << endl;
            cout << "1. Sine" << endl;
            cout << "2. Cosine" << endl;
            cout << "3. Tangent" << endl;
            cout << "4. Return!" << endl;
            cout << "Input here: ";
            cin >> num;
                switch (num) {
                    case 1:
                        system("CLS");
                        cout << "- Write your angle for Sine" << endl;
                        cout << "Input here: ";
                        cin >> radian1;
                        cout << "Result: Sin(" << radian1 << ") = " << sine_value(radian1) << endl;
                        cout << endl;
                        break;
                    case 2:
                        system("CLS");   
                        cout << "- Write your angle for Cosine" << endl;
                        cout << "Input here: ";
                        cin >> radian2;
                        cout << "Result: Cos(" << radian2 << ") = " << cosine_value(radian2) << endl;
                        cout << endl;
                        break;
                    case 3:
                        system("CLS");
                        cout << "- Write your angle for Tangent" << endl;
                        cout << "Input here: ";
                        cin >> radian3;
                        cout << "Result: Tan(" << radian3 << ") = " << tangent_value(radian3) << endl;
                        cout << endl;
                        break;
                    case 4:
                        system("CLS");
                        cout << "|| Program Returned! ||" << endl;
                        cout << endl;
                        break;
                    case 0:
                        system("CLS");
                        cout << "Exiting the program.." << endl;
                        cout << endl;
                        break;
                    default:
                        system("CLS");
                        cout << "||        Invalid input!          ||" << endl;
                        cout << "|| Please input the valid option! ||" << endl;
                        cout << endl;
                        break;
                }
        }
        else if (num2 == 0) {
            system("CLS");
            cout << "Exiting the program.." << endl;
            cout << endl;
        } 
        else {
            system("CLS");
            cout << "||        Invalid input!          ||" << endl;
            cout << "|| Please input the valid option! ||" << endl;
            cout << endl;
        }     
} while (choice != 0 && num2 != 0 && num != 0);
return 0;
}