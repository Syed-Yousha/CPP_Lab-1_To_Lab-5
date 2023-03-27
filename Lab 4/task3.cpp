#include <iostream>
using namespace std;

class ShapeCalculator
{
    float length, breath;

public:
    ShapeCalculator()
    {
        this->length = 0;
        this->breath = 0;
    }

    void set_dimensions(float length, float breath)
    {
        this->length = length;
        this->breath = breath;
    }

    float square()
    {
        float area = length * breath;
        return area;
    }

    float triangle()
    {
        float area = (length * breath) * 0.5;
        return area;
    }

    float circle()
    {
        float area = 3.14 * ((length/2) * (length/2));
        return area;
    }

    void display()
    {
        cout << "\nthe area of square: "<<square()<<" cm^2";
    }


    ShapeCalculator(class ShapeCalculator& obj)
    {
        cout<<"\nArea of triangle is: "<<obj.triangle()<<" cm^2";
        cout<<"\nArea of circle is: "<<obj.circle()<<" cm^2";
    }

};

int main()
{
    float length, breath;

    cout<<"\nEnter the length of shapes in cm, \n((length/2) will be considered as circle radius): ";
    cin>>length;
    cout<<"\nEnter the breath of shapes in cm: ";
    cin>>breath;


    ShapeCalculator obj;
    obj.set_dimensions(length, breath);

    obj.display();

    ShapeCalculator obj2(obj);    

}