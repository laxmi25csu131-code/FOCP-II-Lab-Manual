// results with default arguments
#include<iostream>
using namespace std;
int result(int,int,int=0,int=0,int=0);
int main(){
    cout<<endl<<result(45,58);
    cout<<endl<<result(45,58,79);
    cout<<endl<<result(45,58,90,56);
    cout<<endl<<result(45,58,67,34,56);
    return 0;
}
int result(int m1,int m2,int m3 ,int m4,int m5){
    cout<<"\n five subject result";
    return m1+m2+m3+m4+m5;
}
// welcome window with last name and default agent
#include<iostream>
using namespace std;

// void welcome(string="agent",string="");
void welcome(string fname="user", string lname=""){
    cout<<"\n welcome !!"<<fname<<lname;
}

int main(){
    welcome();
    welcome("Laxmi");
    welcome("Laxmi Yadav");
    return 0;
}
// define
// void welcome(string fname, string lname){
//     cout<<"\n welcome !!"<<fname<<lname;
// }
