#include <iostream>
#include <string>
using namespace std;

class ElectricityBill {
private:
    string consumerName;
    int units;
    float billAmount;

public:
    ElectricityBill();
    ElectricityBill(string name, int u);
    void calculateBill();
    void displayBill();
};
//default
ElectricityBill::ElectricityBill() {
    consumerName = "Not Assigned";
    units = 0;
    billAmount = 0;
}
//parameterized
ElectricityBill::ElectricityBill(string name, int u) {
    consumerName = name;
    units = u;
    billAmount = 0;
}
void ElectricityBill::calculateBill() {
    if (units <= 100) {
        billAmount = units * 5;
    }
    else if (units <= 200) {
        billAmount = (100 * 5) + ((units - 100) * 7);
    }
    else {
        billAmount = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    }
}
void ElectricityBill::displayBill() {
    cout << "\n!!!Electricity Bill!!!\n";
    cout << "Consumer Name : " << consumerName << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Total Bill    : ₹" << billAmount << endl;
}

int main(){
    ElectricityBill b1;
    b1.calculateBill();
    b1.displayBill();
    ElectricityBill b2("Laxmi", 250);
    b2.calculateBill();
    b2.displayBill();

    return 0;
}