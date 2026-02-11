#include<iostream>
using namespace std;
int sum(int a ,int b ){
    int sum=0;
    sum = a+b;
    cout<<" \n int type function  ";
    return sum;
}
float sum(float r,float q){
    float sum=0;
    sum = q+r;
     cout<<" \n float type function  ";
    return sum;
}
double sum(double x,double y){
    double sum=0;
    sum = x+y;
     cout<<"\n double type function  ";
    return sum;
}
int main(){
    cout<<endl<<sum(9,8);
    cout<<endl<<sum(8.28f,10.28f);
    cout<<endl<<sum(5.289384,10.2345904);
    return 0;
}
// result
#include<iostream>
using namespace std;
int result(int,int);
int result(int,int,int);
int result(int,int,int,int);
int result(int,int,int,int,int);
int main(){
    cout<<endl<<result(45,58);
    cout<<endl<<result(45,58,79);
    cout<<endl<<result(45,58,90,56);
    cout<<endl<<result(45,58,67,34,56);
    return 0;
}
int result(int m1,int m2){
    cout<<"\n two subject result";
    return m1+m2;
}
int result(int m1,int m2,int m3){
    cout<<"\n three subject result";
    return m1+m2+m3;
}
int result(int m1,int m2,int m3,int m4){
    cout<<"\n four subject result";
    return m1+m2+m3+m4;
}
int result(int m1,int m2,int m3 ,int m4,int m5){
    cout<<"\n five subject result";
    return m1+m2+m3+m4+m5;
}
