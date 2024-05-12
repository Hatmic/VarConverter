#include <iostream>
#include <string>
#include <map>
#include <stdexcept>

using namespace std;

typedef long long ll;

void tsVarConverter () {
	
	map<string, bool> varMap;
	string varName, varNum;
	
	while (cin >> varName >> varNum) {		
	    if (varMap.find(varName) != varMap.end()) {
	    	cout << varName << " = ";
		} else {
			cout << "let " << varName << ":";
	  	}
	  	
	  	if (!varMap[varName]) {
	  		try {
				size_t pos;
		        ll num = std::stoi(varNum, &pos);
		        
		        if (pos == varNum.size()) {	
		            cout << "number = " << num << ";";
		        }
			} catch (const std::invalid_argument& e) {
	    		cout << "string = " << "\"" << varNum << "\"" << ";";
			}
			
			varMap[varName] = true;
		} else {
			try {
				size_t pos;
		        ll num = std::stoi(varNum, &pos);
		        
		        if (pos == varNum.size()) {	
		            cout << num << ";";
		        }
			} catch (const std::invalid_argument& e) {
	    		cout << "\"" << varNum << "\"" << ";";
			}
		}
		
		
		cout << endl;
	}
}
