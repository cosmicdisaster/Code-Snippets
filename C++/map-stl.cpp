#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string,int>mappy;
    int h;
    int Q;
    cin>>h;
    string s;
    int m;
    for(int i=0;i<h;i++){
        cin>>Q;
        if(Q==1){
            cin>>s;
            cin>>m;
            mappy[s]+=m; //value is hashed in the map
        }
        if(Q==2){
            cin>>s;
            mappy.erase(s);
        }
        if(Q==3){
            cin>>s;
            cout<<mappy[s]<<endl;
        }
    }
    return 0;
}



