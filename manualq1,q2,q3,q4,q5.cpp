// q1 
#include<iostream>
using namespace std;
int main(){
    float s1,s2,s3;
    float avg;
    cout<<"enter the marks of all the three students";
    cin>>s1>>s2>>s3;
    avg = float(s1+s2+s3)/3;
    cout<<"the average of marks are = "<<avg;
    return 0;
}

// q2
#include<iostream>
using namespace std;
int main(){
    float r;
    float area;
    cout<<"enter the radius of circular fountain";
    cin>>r;
    area = float(3.14*r*r);
    cout<<"the area calculated is = "<<area;
    return 0;
}

// q3
#include<iostream>
using namespace std;
int main(){
    char choice;
    float cel,far;
    cout<<"enter \'c\' for converting celsius to farhenit and \'f\' for farhenit to celsius ";
    cin>>choice;

    switch (choice){
        case 'c':
        case 'C':
        cout<<"enter the degree in celsius";
        cin>>cel;
        far = (cel*9)/5 +32;
        cout<<"the converted temp in farhaneit  "<<far;
        break;
        case 'f':
        case 'F':
        cout<<"enter the degree in farheniet ";
        cin>>far;
        cel = ((far - 32)*5)/9;
        cout<<"the converted temp in celsius "<<cel;
        break;
        default:
        cout<<"BAD GIRL!!";
        break;
    }
    return 0;
}

// q4
#include<iostream>
using namespace std;
int main(){
    float bill;
    float amt;
    int item_no,quantity,unit_price;
    cout<<"enter the item no , quantity and unit price";
    cin>>item_no>>quantity>>unit_price;
    bill = quantity*unit_price;
    cout<<"the actual price is "<<bill;
    amt = bill * 0.8;
    cout<<"the discounted bill is "<<amt;
    return 0;
}

// q5
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    int ch;
    cout<<"enter the number 1 to swap ";
    cin>>a;
    cout<<"enter the number 2 to swap ";
    cin>>b;

    cout<<"enter the choice for selecting the method"<<endl;
    cout<<"1. THE TEMPERORY VARIABLE"<<endl<<"2. ADDITION & SUBTRACTION"<<endl<<"3.MULTIPLICATION & DIVISION"<<endl<<"4.BITWISE OPERATORS"<<endl<<"5. BAD CHOICE!!";
    cin>>ch;
    switch(ch){
        case 1:
        c=a;
        a=b;
        b=c;
        cout<<"the a is= "<<a<<endl<<"and the b is= " <<b;
        break;
        case 2:
        a = a+b;
        b = a-b;
        a = a-b;
        cout<<"the a is= "<<a<<endl<<"and the b is= " <<b;
        break;
        case 3:
        a = a*b;
        b = a/b;
        a = a/b;
        cout<<"the a is= "<<a<<endl<<"and the b is= " <<b;
        break;
        case 4:
        a = a^b;
        b = a^b;
        a = a^b;
        cout<<"the a is= "<<a<<endl<<"and the b is= " <<b;
        break;
        default :
        cout<<"bad choice";
        break;
    }
return 0;
}

