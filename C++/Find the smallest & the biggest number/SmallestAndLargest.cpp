// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  cout<<"Enter number of input"<<endl;
 int n;
 cin>>n;
 int arr[n];
 cout<<"Enter "<<n<< " inputs"<<endl;
 for(int i=0;i<n;i++)
 {
     cin>> arr[i];
 }
int min=99999999;
int max=-99999999;
for(int i=0;i<n;i++)
{
    if(arr[i]<min)
    {
        min=arr[i];
    }
     if(arr[i]>max)
    {
        max=arr[i];
    }
}
cout<< "max and min numbers are "<<max<<" "<<min<<endl;
    return 0;
}