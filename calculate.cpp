#include <iostream>
#include <string>

using namespace std;

int main() {

	string str = "CHAO";
	int num = 0;
	int sum = 0;


	for (int i = 0; i < str.size(); ++i) {
		if (!isspace(str[i])) {
			num = (int)(toupper(str[i]) - 'A'+1);
		}
		sum += num;
	}

	cout << sum << endl;


	system("pause");
	return 0;
}