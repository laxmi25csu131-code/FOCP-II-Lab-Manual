#include<iostream>
int main() {
        int n;
        std::cout<<"Enter the row of a Matrix : ";
        std::cin>>n;

        std::cout<<"Enter the Elements of  Matrix 1 : "<<std::endl;
        int arr[n][n] = {0};
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < n;j++) {
                std::cin>>arr[i][j];
            }
        }

        std::cout<<"Enter the Elements of  Matrix 2 : "<<std::endl;
        int brr[n][n] = {0};
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < n;j++) {
                std::cin>>brr[i][j];
            }
        }

        int sumArray[n][n] = {0};
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < n;j++) {
                sumArray[i][j] = arr[i][j] + brr[i][j];
            }
        }

        std::cout<<std::endl<<"The Sum Of Two Matrix is : ";

        for(int i = 0;i < n;i++) {
            for(int j = 0;j < n;j++) {
                std::cout<<sumArray[i][j]<<" ";
            }
            std::cout<<std::endl;
        }
        return 0;
}