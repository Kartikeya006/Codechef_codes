#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int test_cases, number, number_of_digits, numbers[100];
    cin>>test_cases;
    for(int i = 0;i<test_cases;i++){
        int reversed_number = 0;
        cin>>number;
        number_of_digits = (int)log10f(number)+1;
        for(int j=0;j<number_of_digits;j++){
            numbers[j] = number%10;
            number = number-numbers[j];
            number = number/10;
        }
        for(int j = 0;j<number_of_digits;j++){
            reversed_number = reversed_number + numbers[j]*pow(10, number_of_digits-j-1);
        }
        cout<<reversed_number<<endl;
    }
    return 0;
}
