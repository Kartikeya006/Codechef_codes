#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        float number;
        cin>>number;
        cout<<(int)sqrtf(number)<<endl;
    }
    return 0;
}
