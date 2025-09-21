#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, string> capitalMap;

    capitalMap.insert(make_pair("India", "Kolkata"));
    capitalMap.insert({"France", "Paris"});

    cout << "capacity =" << capitalMap.bucket_count() << endl;
    cout << "size = " << capitalMap.size() << endl; // 3

    for(auto it = capitalMap.begin(), end = capitalMap.end(); it != end; it++){
        pair<string, string> p = *it;
        cout << "(" << p.first << " , " << p.second << ")" << endl;
    }
    cout << endl;

    for(auto [country, capital] : capitalMap){
        cout << country << " " << capital << endl;
    }

    capitalMap["India"] = "New Delhi";

    for(auto [country, capital] : capitalMap){
        cout << country << " " << capital << endl;
    }

    return 0;
}