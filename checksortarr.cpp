#include<iostream>
using namespace std;


bool isSorted (int arr[], int n, int i){
   if (i == n-1)
   {
      return true;
   }
   

    if (arr[i] > arr[i+1])
    {
        return false;
    }
    
   return  isSorted(arr, n, i+1);
}



int main()
{
    int arr1[5] ={1,2,3,4,5};
    int arr2[5] ={1,2,4,2,5};

    cout<<isSorted(arr2, 5, 0);
    return 0;
} 
