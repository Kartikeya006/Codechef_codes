#include<iostream>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        int num;
        cin>>num;
        if(num<10){
            cout<<"Thanks for helping Chef!"<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
