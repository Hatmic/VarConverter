#include <iostream>
#include <string>
#include <map>
#include <stdexcept>

using namespace std;

typedef long long ll;

void pyVarConverter () {
	
	map<string, bool> varMap;
	string varName, varNum;
	
	while (cin >> varName >> varNum) {
	    cout << varName;
		
		cout << " = ";
	
		try {
			size_t pos;
	        ll num = std::stoi(varNum, &pos);
	        if (pos == varNum.size()) {
	            cout << num;
	        }
		} catch (const std::invalid_argument& e) {
    		cout << "\"" << varNum << "\"";
		}
		
		cout << endl;
	}
}
