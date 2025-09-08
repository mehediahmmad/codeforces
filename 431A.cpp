/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[4];
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];//input for uselase
    }
    
    string A;
    cin >> A;
    int sum = 0;
    for (int i = 0; i < A.length(); i++) {
        int idx = A[i] - '1'; 
        sum += arr[idx];
    }
    cout << sum << endl;
    return 0;
}*/
#include<iostream>
#include<string>
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr;
    }
    string A;
    cin>>A;
    int sum=0;
    for(int i=0;i<4;i++){
        int b=(A%10);
        int a=(A/10);
        int c=b-a;
        sum+=b;
        A=c;
    }

    return 0;
}