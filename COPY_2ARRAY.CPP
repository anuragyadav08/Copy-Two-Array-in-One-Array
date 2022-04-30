// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void copy_array(int a[],int b[],int n,int m)
{
    int c[100];
    for(int i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<m;i++)
    {
        c[n+i]=b[i];
    }
    
    for(int i=0;i<n+m;i++)
    {
        cout<<c[i]<<" ";
    }
}
int main() 
{
   int arr1[50],arr2[50];
   int size1,size2;
   cout<<"Enter Size of 1st Array :";
   cin>>size1;
   cout<<"Enter 1st Array :"<<endl;
   for(int i=0;i<size1;i++)
   {
       cin>>arr1[i];
   }
   
   cout<<"Enter Size of 2nd Array :";
   cin>>size2;
   cout<<"Enter 2nd Array :"<<endl;
   for(int i=0;i<size2;i++)
   {
       cin>>arr2[i];
   }
   copy_array(arr1,arr2,size1,size2);
    return 0;
}