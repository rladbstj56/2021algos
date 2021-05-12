#include <iostream>
#include <string>
#include <list>
using namespace std;
 
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string editor;
	cin >> editor;
	
	list<char> L;
	for (auto c : editor)L.push_back(c);
	auto cursor = L.end();

	int q;
	cin >> q;

	while (q--) {
		char op;
		cin >> op;
		if (op == 'P'){
			char x;
			cin>>x;
			L.insert(cursor,x);
		}
		else if (op == 'L') {
			if (cursor != L.begin()) {
				cursor--;
			}
		}
		else if (op == 'D') {
			if (cursor != L.end()) {
				cursor++;
			}
		}
		else {
			if (cursor != L.begin()) {
				cursor--;
				cursor=L.erase(cursor);
				
			}
		}
	}

	for(auto c:L) cout<<c;

	return 0;
}
