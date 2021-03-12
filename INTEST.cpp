#include<iostream>
using namespace std;
int main(){
    int n, k, p, count=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>p;
        if(p%k==0){
            count += 1;
        }
        else{
            continue;
        }
    }
    cout<<count;
    return 0;
}
