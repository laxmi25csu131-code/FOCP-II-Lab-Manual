#include<iostream>
int main() {
    int a;
    int b;
    std::cout<<"Enter 1st Number : ";
    std::cin>>a;
    std::cout<<"Enter 2nd Number : ";
    std::cin>>b;
    std::cout<<"Enter the Choice --> + - * / % : ";
    char choice;
    std::cin>>choice;
    if(choice == '+') {
        std::cout<<(a + b);
    }else if (choice == '-') {
        std::cout<<(a - b);
    }else if (choice == '*') {
        std::cout<<(a * b);
    }else if (choice == '/') {
        if(b != 0) std::cout<<(a/b);
        else std::cout<<"Infinity";
    }else if (choice == '%') {
        std::cout<<(a % b);
    }else {
        std::cout<<"Invalid Choice";
    }
    return 0;
}