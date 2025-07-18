#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int si, int mid, int ei){
   
     vector<int>temp; 
     int i = si;
     int j = mid+1;

     while (i<=mid  && j <=ei)
     {
           if (arr[i] <= arr[j])
           {
             temp.push_back(arr[i++]);
           }
           else{
             temp.push_back(arr[j++]);
               
           }
           
     }
        while (i <= mid)
        {
             temp.push_back(arr[i++]);
        
        }
        while (j <= ei)
        {
             temp.push_back(arr[j++]);
            
        }
        
            // vector ---> orig
            for (int idx = si, x=0; idx <=  ei; idx++) //original arr loop
        
            {
                arr[idx] = temp[x++];
            }
            
}

void mergeSort(int arr[], int si, int ei) {
   if (si>=ei)
   {
      return;
   }
   



 int mid = si + (ei - si)/2;

 mergeSort(arr,si,mid); //left
 mergeSort(arr,mid+1,ei); //right

   merge(arr,si,mid,ei);//conquer
}
 


void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] << " "; 
    }
    
}

int main()
{
    int arr[24] = {6,3,7,5,2,4,6,5,4,3,2,1,3,34,4,5,5,5,5,5,44,4,0,9};
    int n=24;

    mergeSort(arr,0,n-1);
    printArr(arr,n);
    return 0;
}