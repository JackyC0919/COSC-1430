#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int SIZE = 6000;

int main() {
	//input file
	ifstream txtFile;
	txtFile.open("names.txt");

	//check error
	if (txtFile.fail()) {
		cerr << "Error Opening File" << endl;
		exit(1);
	}
	//sorting names into array
	int i = 0;
	int j = 0;
	string items;
	string *nameList = new string[SIZE];
	while (!txtFile.eof()) {
		txtFile >> items;
		j++;
		if (i < j){
			nameList[i] = items;
			cout << "nameList[" << i << "]= " << nameList[i] << endl;
			i++;
		}
	}
	

	delete[] nameList;
	nameList = NULL;
	txtFile.close();
	system("pause");
	return 0;
}