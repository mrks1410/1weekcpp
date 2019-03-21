#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1;
	string str2;
	cout << "姓を入力:";
	cin >> str1;
	cout << "名を入力:";
	cin >> str2;
	cout << "名前は「" + str1 + str2 + "」です。" << endl;
	
	return 0;
}
