#include<iostream>
using namespace std;
class Rectangle{
    float length;float width;
    public:
        void inputDimensions(float length, float width) {
        this->length = length;
        this->width = width;
    }
    float calculateArea() {
        return length * width;
    }
    float calculatePerimeter() {
       return 2 * (length + width);
    }
    void displayResult() {
        cout<<"Area is : "<<calculateArea()<<endl;
        cout<<"Perimeter is : "<<calculatePerimeter()<<endl;
    }
};
int main() {
    Rectangle r1;
    r1.inputDimensions(42.34, 76.67);
    r1.displayResult();
    return 0;
}