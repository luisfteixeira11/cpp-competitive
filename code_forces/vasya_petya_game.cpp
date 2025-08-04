#include<iostream>
#include<vector>
using namespace std;

int main (){
    int num; cin>>num;
    vector<int> v;
    if (num<=4&&num>1){
        cout<<3<<endl;
        cout<<"2 4 3"<<endl;
        return 0;
    }
    if (num == 1){
        cout<<0<<endl;
        return 0;
    }
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    if (num%2==0 &&num%4!=0){
        for(int i=6; i<1000; i+=4){
            if (num%i==0){
                break;
            }
            if(num<i){
                break;
            }
            v.push_back(i);
        }
    } else if (num%2==0){
        for(int i=6; i<1000; i+=2){
            if (num%i==0){
                break;
            }
            if(num<i){
                break;
            }
            v.push_back(i);
        }
    } else if (num%3==0){
        for(int i=6; i<1000; i+=3){
            if (num%i==0){
                break;
            }
            if(num<i){
                break;
            }
            v.push_back(i);
        }
    }
    for (int i=5;i*i<1000; i+=2){
        if (num%i==0){
            break;
        }
        if(num<i){
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