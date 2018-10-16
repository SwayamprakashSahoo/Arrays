//Program to find sum of all input elements of an array
#include <iostream>
using namespace std;
//function to find sum
int sum(int arr[],int n)
{
	int i=0;
	for(int j=0;j<n;j++)
      i=i+arr[j];
    return i;
}
//declaring main function
int main()
{
  //variable declaration and array initialisation
  int n,arr[40];   
  //asking user for the size of array
  cout<<"Please enter the array size: "<<endl;
  cin>>n;
  //filling required values in the array
  cout<<"Please enter any "<<n<<" elements in the array: ";
  for(int k=0;k<n;k++)
    cin>>arr[k];\
  cout<<"Sum: "<<sum(arr,n);  //Calling required function
  return 0;
}
