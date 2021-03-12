#include<iostream>
using namespace std;
int main(){
    int test_cases, number, sum;
    cin>>test_cases;
    for(int i = 0;i<test_cases;i++){
        sum = 0;
        cin>>number;
        while(number>0){
            sum = sum + number%10;
            number = number/10;
        }
    cout<<sum<<endl;
    }
    return 0;
}
