#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int test_cases;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        int a[100], number, pos = 0;
        int count = 0;
        cin>>number;
        while(number>0){
            a[pos] = number%10;
            pos = pos+1;
            number = number/10;
        }
        for(int j = 0;j<pos;j++){
            if(a[j]==4){
                count += 1;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
