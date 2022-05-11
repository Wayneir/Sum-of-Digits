#include <iostream>
using namespace std;

int main()
{
    int t;
    int sum = 0;
    cin>>t;

    for (int i = 0; i < t; i++) {
        long n;
        cin>>n;
        int sum = 0;
        while(n>=1){
            sum = sum + (n % 10);
            n = n / 10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
