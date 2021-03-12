#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    for(int i = 0;i<test_cases;i++){
        int guard_1, guard_2;
        cin>>guard_1>>guard_2;
        if(guard_1>guard_2){
            cout<<guard_1<<" "<<guard_1+guard_2<<endl;
        }
        else if(guard_2>guard_1){
            cout<<guard_2<<" "<<guard_1+guard_2<<endl;
        }
        else if(guard_1==guard_2)
        {
            cout<<guard_1<<" "<<guard_1*2<<endl;
        }
    }
    return 0;
}
