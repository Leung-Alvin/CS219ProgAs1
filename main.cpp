#include <iostream>
#include <fstream>
#include <sstream>
#include "operator.h"
#include "hexnum.h"

using namespace std;

int isAnOperator(string s)
{
	if(s == "ADD") return 1;
	return 0;
}


int main(){

	ifstream file;
	file.open("Programming-Project-1.txt");
	string word;
	while(file >> word){
		if(isAnOperator(word) == 1){
			file >> word;
			HexNum h1 = HexNum(word);
			file >> word;
			HexNum h2 = HexNum(word);
			uint64_t sum = h1.getInt() + h2.getInt();
			HexNum s = HexNum(sum);
			cout<< "----" << endl;
			cout << h1.getHexName() << " + " << h2.getHexName() << " = " << s.getHexName() << endl;
			
		}

		
		
			
	}
	return 0;

}



