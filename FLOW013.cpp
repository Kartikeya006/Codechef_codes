#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    for(int i = 0;i<test_cases;i++){
        int angle1, angle2, angle3;
        cin>>angle1>>angle2>>angle3;
        if(angle1+angle2+angle3 == 180){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
