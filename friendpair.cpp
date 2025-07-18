#include<iostream>
using namespace std;



int friendpairing(int n){

    if (n==1 || n==2)
    {
        return n;
    }
    

//single                         //pair
return friendpairing(n-1) + (n-1) * friendpairing(n-2);


}
int main()
{
    cout<<friendpairing(5)<<endl;
    return 0;
}