// q10
#include<iostream>
int main() {
    int year;
    std::cout<<"Enter the year : ";
    std::cin>>year;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout<<"Leap Year";
    }else {
        std::cout<<"Non Leap Year";
    }
    return 0;
}
// q11
#include<iostream>
int main() {
    int items;
    float price;
    std::cout<<"Enter the Items : ";
    std::cin>>items;
    std::cout<<"Enter the Price : ";
    std::cin>>price;
    float bill = items * price;
    if(items > 1000) {
        float disc = bill - (bill * 0.1);
        std::cout<<"Net Bill is : "<<disc;
    }else {
        std::cout<<"Net Bill is : "<<bill;
    }
    return 0;
}
// q12
#include<iostream>
int main() {
    int a;
    int b;
    int c;
    std::cout<<"Enter the Sides : ";
    std::cin>>a>>b>>c;
    if(a == b && b == c) {
        std::cout<<"Triangle is Equilateral";
    }else if(a != b && b != c && c != a) {
        std::cout<<"Triangle is Scalene";
    }else {
        std::cout<<"Triangle is Isosceles";
    }
    return 0;
}
// q13
#include<iostream>
#include<cmath>
double squareRoot(double n,double ans) {
    double s = 0;
    double e = n;
    while(e - s > 1e-6) { //1e-6 is : 0.000001
        double m = s + (e - s) / 2;
        if(m * m == n) {//this wont work for floating points
            ans = (double)m;
            return ans;
        }else if (m * m > n) {
            e = m;
        }else {
            s = m;
        }
    }
    return s;
}
double countTimes(double n,double ans) {//No need of this
    for(int i = 0;i < 3;i++) {
        if(i == 0) {
            ans = squareRoot(n,ans);
        }else {
            double a = std::pow(10,i);
            n = n + (1/a);
            ans = squareRoot(n,ans);
        }
    }
    return ans;
}
int main() {
    double num;
    std::cout<<"Enter the number : ";
    std::cin>>num;
    double ans = squareRoot(num,0);
    std::cout<<"Square root is : "<<ans;
}
