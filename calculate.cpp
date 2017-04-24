#include <iostream>
#include <string>

using namespace std;

int main() {

	string name = "CHAO";
	int num = 0;
	int sum = 0;


	for (int i = 0; i < name.size(); ++i) {
		if (!isspace(name[i])) {
			num = (int)(toupper(name[i]) - 'A'+1);
		}
		sum += num;
	}

	cout << sum << endl;


	system("pause");
	return 0;
}
