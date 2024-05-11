#include <iostream>
#include <string>
#include <map>
#include <stdexcept>

using namespace std;

typedef long long ll;

int main() {
	freopen("input.txt", "r", stdin);
	
	string code;
	cin >> code;
	
	if (code == "js") {
		freopen("main.js", "w", stdout);
	} else {
		freopen("main.ts", "w", stdout);
	}
	
	map<string, bool> varMap;
	string varName, varNum;
	
	while (cin >> varName >> varNum) {
	    if (varMap.find(varName) != varMap.end()) {
	    	cout << varName;
		} else {
			varMap[varName] = true;
			cout << "let " << varName;
		}
		
		cout << " = ";
	
		try {
			size_t pos;
	        int num = std::stoi(varNum, &pos);
	        if (pos == varNum.size()) {
	            cout << num << ";";
	        }
		} catch (const std::invalid_argument& e) {
    		cout << "\"" << varNum << "\"" << ";";
		}
		
		cout << endl;
	}

    return 0;
}
