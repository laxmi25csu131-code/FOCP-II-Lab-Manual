#include<iostream>
using namespace std;
class Candy {
    string color;
    int points;
    public :
    void setCandy();
    void setCandy(string, int);
    void displayCandy();
    void loosepoints();
    void looseCandy(int);
    void gainPoints();
    void gainPoints(int);
};
void Candy::gainPoints(int pointToGain) {
    points += pointToGain;
}
void Candy::gainPoints() {
    points += 2;
}
void Candy::looseCandy(int pointToReduce) {
    points -= pointToReduce;
    if(points < 0) {
        points = 0;
    }
}
void Candy::loosepoints(){
    points-=2;
    if(points<0)points=0;
}
void Candy::setCandy(){
    color= "black";
    points=0;
}

void Candy::setCandy(string c, int p) {
    color = c;
    points = p;
}
void Candy::displayCandy() {
    cout<<"Color : "<<color<<endl<<"point : "<<points<<endl;
}
int main() {
    // Candy c1;
    // Candy c2;
    // c1.setCandy("Black", 67);
    // c2.setCandy("Purple", 69);
    // c1.displayCandy();
    // c2.displayCandy();
    Candy c3;
    c3.gainPoints();
    c3.gainPoints(5);
    c3.displayCandy();
    return 0;
}