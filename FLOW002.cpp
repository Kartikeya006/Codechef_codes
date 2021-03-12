#include<iostream>
using namespace std;
int main(){
    int test_cases, A, B;
    cin>>test_cases;
    for(int i = 0;i<test_cases;i++){
        cin>>A>>B;
        cout<<A%B<<endl;
    }
    return 0;
}
