#include<iostream>
using namespace std;
class Smartlight{
    string brand;
    int brightness;
    bool isOn;
    public:
    Smartlight(){
        cout<<"\n default"<<endl;
        brand = "no brand";
        brightness = 50;
        isOn = false;

    }
    Smartlight(string b, int bright, bool ON){
        brand = b;
        brightness = bright;
        isOn = ON;
    }
    void turnon(){
        isOn = true;
    }
    void turnoff(){
        isOn = false;
    }
    void increaseBrightness(){
        if(brightness +10 > 100){
            brightness= 100;}
            else
            brightness+=10;
    }
    void decreaseBrightness(){
       if(brightness -10 <0){
            brightness= 0;}
            else
            brightness-=10;
    }
    void displayStatus(){
        cout<< "\n Brand : "<<brand;
       cout<< "\n Brightness : "<<brightness;
       if(isOn==true)
       cout<<"\n isOn :ON" <<endl;
       else
       cout<<"\n isOn :OFF" <<endl;
    }
    ~Smartlight(){cout<<"\n Object Destroyed";};
};
Smartlight light2;
int main(){
    Smartlight light1;
    cout<<"LIGHT 1"<<endl;
    light1.turnoff();
    light1.decreaseBrightness();
    light1.displayStatus();
    light2.turnon();
    light2.increaseBrightness();
    light2.displayStatus();
    return 0;
}
