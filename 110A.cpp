#include<iostream>
#include<string>
using namespace std;
int main(){
    string n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n.size();i++){
        if(n[i]=='4' || n[i]=='7'){
            sum++;
        }
    }
    if(sum==4||sum==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;

}