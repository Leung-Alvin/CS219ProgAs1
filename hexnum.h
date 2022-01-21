#ifndef HEXNUM_H
#define HEXNUM_H

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class HexNum{
public:
	HexNum() = default;
	HexNum(string nhexVal);
	HexNum(uint64_t i);

private:
	string hexVal;
	uint64_t intVal;
	int len;

public: 
	string getHex() const;
	uint64_t getInt() const;
	void setHex(string h);
	void setInt(uint64_t i); 

};

#endif
