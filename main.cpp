#include <iostream>
#include <string>
#include "./converters/jsVarConverter.cpp"
#include "./converters/tsVarConverter.cpp"
#include "./converters/pyVarConverter.cpp"

using namespace std;

typedef long long ll;

int main() {
	freopen("input.txt", "r", stdin);
	
	string code;
	cin >> code;
	
	if (code == "js") {
		freopen("output.js", "w", stdout);
		jsVarConverter();
	}
	else if (code == "ts") {
		freopen("output.ts", "w", stdout);
		tsVarConverter();
	}
	else if (code == "py") {
		freopen("output.py", "w", stdout);
		pyVarConverter();
	}
	
	return 0;
}