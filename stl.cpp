#include <iostream>
using namespace std;

int main(){
    
pair <int,int> p={3,4};
cout << p.first << " " << p.second << endl;

pair <int, pair<int,int>> q={3,{4,5}};
cout<<q.second.first<<" "<<q.first<<" "<<q.second.second<<endl;

pair<int,int> arr[]  = {{2,3},{4,3},{4,5},{6,4}};
cout << arr[2].first << endl;
cout << arr[2].second << endl;
cout << arr[1].first << " " << arr[1].second << endl;
cout << arr[0].first << " " << arr[0].second << endl;

}

