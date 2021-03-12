#include<iostream>
using namespace std;
int flag;
int main(){
    int array_size, a[500];
    cin>>array_size;
    for(int i=0;i<array_size;i++){
        cin>>a[i];
    }
    for(int i=0;i<array_size-1;i++){
        flag = 0;
        for(int j=0;j<array_size-1-i;j++){
            if(a[j]>a[j+1]){
                a[j+1] = a[j+1]+a[j];
                a[j] = a[j+1]-a[j];
                a[j+1] = a[j+1]-a[j];
                flag = 1;
            }
        }
        if(flag==0){
            break;
        }
    }
    for(int j=0;j<5;j++){
        cout<<a[j]<<"\n";
    }
    return 0;
}
