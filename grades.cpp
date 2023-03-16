#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
	string name;
	float score;
	ofstream myfile;
	myfile.open ("test.txt");
	for (int j = 0; j < 10; ++j) {
		cout << "student" << j + 1 << ":" << endl;
		cout << "Enter the student's name: ";
		cin >> name;
		myfile << name << endl;
		cout << "Enter the test scores: " << endl;
		for (int i = 0; i < 1; i++) {
			cin >> score;
			myfile << score <<endl;
		}
		
		cout << endl;
		
	}
	
	myfile.close();
	
	return 0;
	
	
}
