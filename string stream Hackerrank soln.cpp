#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Cometmplete this function
    
    stringstream ss(str);
    char ch;
    int temp;
    vector<int> result;
    while(ss>>temp){
        cout<<temp;
        ss>>ch;
        cout<<endl;

    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
