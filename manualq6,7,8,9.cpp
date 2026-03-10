// q6
#include<iostream>
int main() {
    int net;
    int bonus;
    int salary;
    int n;
    std::cout<<"Enter the Number of Employees : ";
    std::cin>>n;

    for(int i = 0;i < n;i++) {
        std::cout<<"Enter the Salary of Employees : ";
        std::cin>>salary;
        bonus = salary * 12/100;
        net = salary + bonus;
        std::cout<<"Bonus is : "<<bonus<<std::endl<<"Salary is : "<<salary<<std::endl<<"Net Salary is : "<<net<<std::endl;
    }
    return 0;
}
// q8
#include<iostream>
int main() {
    int n;
    int id;
    std::cout<<"Enter the Number of employees : ";
    std::cin>>n;
    for(int i = 0;i < n;i++) {
        std::cout<<"Enter the ID of Employee : ";
        std::cin>>id;
        if(id % 3 == 0 && id % 5 == 0) {
            std::cout<<"Buzz Fuzz"<<std::endl;
        }else if(id % 3 == 0) {
            std::cout<<"Buzz"<<std::endl;
        }else if(id % 5 == 0) {
            std::cout<<"Fuzz"<<std::endl;
        }else {
            std::cout<<"Invalid"<<std::endl;
        }
    }
    return 0;
}
// q9
#include<iostream>
int main() {
    char ch;
    std::cout<<"Enter the Character : ";
    std::cin>>ch;
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        std::cout<<"Vowel";
    }else {
        std::cout<<"Consonant";
    }
    return 0;
}