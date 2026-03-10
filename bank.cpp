#include<iostream>
using namespace std;
class bank{
	string accountHolderName;int accountNumber;double balance;
    bank();
    bank(string name,int number,double b);
	void displayDetails();
	void deposit(double amount);
	void withdraw(double amount);
};
bank::bank(){
    accountHolderName="";
    accountNumber=000000;
    balance=0;
}
bank::bank(string name,int number,double b){
    accountHolderName=name;
    accountNumber=number;
    balance=b;
}
// void bank::deposit(double amount){
//     balance+=amount;
//     cout<<"\n amount deposited \n balance= "<<balance;
// }
// void bank::withdraw(double amount){
// }
void displayDetails(){
cout<<}
