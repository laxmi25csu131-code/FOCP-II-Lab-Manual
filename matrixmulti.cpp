#include<iostream>
int main() {
    int n;
    int p;
    int m;
    int q;
    std::cout<<"Enter the Row and Coloumn of Matrix 1 : ";
    std::cin>>n>>p;
    std::cout<<"Enter the Row and Coloumn of Matrix 2 : ";
    std::cin>>m>>q;

    if(p != m) {//col A != row B
        std::cout<<"Not a Valid Matrix For Multiplication !!!!!";
    }else {
        std::cout<<"Enter the Elements of  Matrix 1 : "<<std::endl;
        int arr[n][p] = {0};
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < p;j++) {
                std::cin>>arr[i][j];
            }
        }

        std::cout<<"Enter the Elements of  Matrix 2 : "<<std::endl;
        int brr[m][q] = {0};
        for(int i = 0;i < m;i++) {
            for(int j = 0;j < q;j++) {
                std::cin>>brr[i][j];
            }
        }

        int ans[n][q] = {0};
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < q;j++) {
                for(int k = 0;k < p;k++) {
                    ans[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }

        std::cout<<std::endl<<"The Multipliction Of Two Matrix is : "<<std::endl;

        for(int i = 0;i < n;i++) {
            for(int j = 0;j < q;j++) {
                std::cout<<ans[i][j]<<" ";
            }
            std::cout<<std::endl;
        }
    }
    return 0;
}