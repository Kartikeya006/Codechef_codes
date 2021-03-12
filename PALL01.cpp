#include<iostream>
#include<math.h>
using namespace std;
int reverse(int number){
    int a[100], reversed_number = 0, number_of_digits;
    number_of_digits = (int)log10(number)+1;
    for(int i=0; i<number_of_digits;i++){
        a[i] = number % 10;
        number = (int)(number/10);
    }
    for(int j = number_of_digits-1;j>=0;j--){
        reversed_number = reversed_number + a[number_of_digits-1-j]*pow(10, j);
    }
    return reversed_number;
}

int main(){
    int test_cases, a, b;
    cin>>test_cases;
    for(int i=0;i<test_cases;i++){
        cin>>a;
        b = reverse(a);
        if(a==b){
            cout<<"wins"<<endl;
        }
        else{
            cout<<"loses"<<endl;
        }
    }
    return 0;
}
