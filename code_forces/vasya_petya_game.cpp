#include<iostream>
#include<vector>
using namespace std;

int main (){
    int num; cin>>num;
    vector<int> v;
    if (num<=4){
        cout<<3<<endl;
        cout<<"2 4 3"<<endl;
        return 0;
    }
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    for (int i=5;i*i<1000; i+=2){
        if (num%i==0){
            break;
        }
        v.push_back(i);
    }
    cout<<v.size()<<endl;
    for (int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}