/*erase(int position):

Removes the element present at position. Position denotes the index.  
Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)
erase(int start,int end):

Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     vector <int> v;
     int n;
     cin>>n;
     int num;
     while(n--){
         cin>>num;
         v.push_back(num);
     }
     int x;
     cin>>x;
     x-=1;
     v.erase(v.begin()+x);
     int a,b;
     cin>>a>>b;
     a-=1;b-=1;
     v.erase(v.begin()+a,v.begin()+b);
     cout<<v.size()<<endl;
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<" ";
     }
    return 0;
}
