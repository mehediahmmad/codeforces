#include <iostream>
using namespace std;
int main(){
    int a,b=0;
    cin>>a;

    for(int i=1;i<=a;i++){
        (i%2 == 0)?b=a/2:b=-(a+1)/2;  
    }
    cout <<b<<endl;

    return 0;

}
