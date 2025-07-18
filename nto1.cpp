#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 0)
    {
        return;
    }
        cout << n << " ";
    print(n-1);
}


int sum(int n){
     if (n == 1)
    {
        return 1;
    }

    return n+sum(n-1);
}
int main(){

cout<<sum(10);
    return 0;
}
