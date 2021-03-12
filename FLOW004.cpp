#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int test_cases, sum, number;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        sum = 0;
        cin>>number;
        sum = sum+(number%10);
        sum = sum+(int)(number/pow(10, (int)log10f(number)));
        cout<<sum<<endl;
    }
    return 0;
}
