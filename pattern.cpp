#include<iostream>
int main() {
    int n;
    std::cout<<"Enter the side of Rectangle : ";
    std::cin>>n;

    for(int i = 0;i < n;i++) {
        if(i == 0 || i == n - 1) {
            for(int i = 0;i < n;i++) {
                std::cout<<"*";
            }
            std::cout<<std::endl;
        }else {
            //star
            std::cout<<"*";
            //space
            for(int j = 0;j < n - 2;j++) {
                std::cout<<" ";
            }
            //star
            std::cout<<"*"<<std::endl;
        }
    }
    return 0;
}