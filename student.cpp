#include<iostream>
using namespace std;
class Student{
    int rollNo;string name;int marks1;int marks2;int marks3;
    public:
    void inputDetails(){     //setter
        cout<<"\n Enter Rollno,name,marks1,marks2,marks3\n ";
        cin>>rollNo>>name>>marks1>>marks2>>marks3;
    }
    private:
     int calculateTotal(){      //getter
        return(marks1+marks2+marks3);
    }
    public:
    void displayDetails(){       //getter
        cout<<"\n Name: "<<name<<"\n Roll No:"<<rollNo;
        cout<<"\n Marks1: "<<marks1<<"\n Marks2: "<<marks2<<"\n marks3: "<<marks3;
        cout<<"\n Total: "<<calculateTotal()<<endl;
    } 

};
int main(){
    Student s1;
    s1.inputDetails();
    s1.displayDetails();
    Student s2;
    s2.inputDetails();
    s2.displayDetails();
    return 0;
    
}