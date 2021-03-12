#include<iostream>
using namespace std;
int main(){
    int n, a[100], lucky_count=0, unlucky_count=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2 == 0){
            lucky_count += 1;
        }
        else if(a[i]%2 != 0){
            unlucky_count += 1;
        }
    }
    if(lucky_count>unlucky_count){
        cout<<"READY FOR BATTLE";
    }
    else{
        cout<<"NOT READY";
    }
    return 0;
}
