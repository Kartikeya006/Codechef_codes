#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        int num1, num2;
        cin>>num1>>num2;
        if(num1>num2){
            cout<<">"<<endl;
        }
        else if(num1<num2){
            cout<<"<"<<endl;
        }
        else if(num1==num2){
            cout<<"="<<endl;
        }
    }
    return 0;
}
