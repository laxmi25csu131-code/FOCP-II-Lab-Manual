#include<iostream>
using namespace std;

void computePerformance(int m[],int n)
// void computePerformance(int m[],int n,int &min,int &max,int &avg) pass by refernce
{
    int max=m[0]; int min=m[0];int avg=m[0];
    for(int i=1;i<n;i++)
    {
       if(max<m[i])
       max=m[i];
       if(min>m[i])
       min=m[i];
       avg+=m[i];
}
cout<<"\n Max= "<<max<<"\n Min= "<<min<<"\n Avg= "<<float(avg)/n;
}
int main(){
    // int maxim=0,mini=0,aver=0;
    int marks[]={56,78,67,98,76,23,90,34,66,89};
    computePerformance(marks,10);
    // cout<<"\n Max= "<<max<<"\n Min= "<<min<<"\n Avg= "<<float(avg)/n;
    return 0;
}