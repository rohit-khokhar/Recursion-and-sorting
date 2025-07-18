#include<iostream>
using namespace std;


int search(int arr[] , int si , int ei, int target){
    if (si > ei)
    {
        return -1;
    }
    
   int mid = si+(ei-si)/2;

   if (arr[mid] == target)
   {
    
       return mid;
   }
   
if (arr[si] <= arr[mid]) //l1
{
    if (arr[si] <= target && target < arr[mid] )
    {   //left

       return search(arr, si , mid - 1, target);
        
    }

    else{
          // right
        return search(arr,mid+1,ei,target);
     

}
}
 else {  //l2

   if (arr[mid] < target && target <= arr[ei])
   {  //right
    
        return search(arr,mid+1,ei,target);
     

   }
   
  else{
     //left
       return search(arr, si , mid - 1, target);
         
  }
}

}






int main()
{
    int arr[7] = {4,5,6,7,0,1,2};
    int n = 7;

    cout<<"idx : "<<search(arr,0,n-1,0); //4
    return 0;
}