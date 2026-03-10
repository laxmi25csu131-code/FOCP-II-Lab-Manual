//q24
#include<iostream>
int main() {
    int n;
    std::cin>>n;
    for(int i = 0;i < n;i++) {
        for(int j = 0;j <= i;j++) {
            std::cout<<char('A' + j);
        }
        std::cout<<std::endl;
    }
    return 0;
}
//q35
#include<iostream>
int main() {
    int n;
    std::cout<<"Enter the row of a Matrix : ";
    std::cin>>n;
    std::cout<<"Enter the Elements of  Matrix : "<<std::endl;
    int arr[n][n] = {0};
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            std::cin>>arr[i][j];
        }
    }

    for(int i = 0;i < n;i++) {
        for(int j = i;j < n;j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    std::cout<<std::endl<<"The Transpose Of Two Matrix is : "<<std::endl;

        for(int i = 0;i < n;i++) {
            for(int j = 0;j < n;j++) {
                std::cout<<arr[i][j]<<" ";
            }
            std::cout<<std::endl;
        }
        return 0;
}
// q23
#include<iostream>
int main() {
    int n;
    std::cout<<"Enter the length of Diamond : ";
    std::cin>>n;
    // first half
    for(int i = 0;i < n;i++) {
        //spaces
        for(int j = 0;j < n - i - 1;j++) {
            std::cout<<" ";
        }
        std::cout<<"*";
        //spaces
        for(int j = 0;j <= 2*i - 1;j++) {
            std::cout<<" ";
        }
        if(i != 0) std::cout<<"*";
        std::cout<<std::endl;
    }
    //Second Half
    int spaces = 0;
    for(int i = n;i < 2 * n - 1;i++) {
        //spaces
        for(int j = 0;j < i - n + 1;j++) {
            std::cout<<" ";
        }
        std::cout<<"*";
        //spaces
        for(int j = 0;j < n - spaces + 1;j++) {
            std::cout<<" ";
        }
        spaces += 2;
        if(i != 2*n - 2) std::cout<<"*"<<std::endl;
    }
    return 0;
}