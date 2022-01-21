#include "hexnum.h"
#include <math.h>

string convertIntDig(int ret){
	if(ret == 10) return "A";
	if(ret == 11) return "B";
	if(ret == 12) return "C";
	if(ret == 13) return "D";
	if(ret == 14) return "E";
	if(ret == 15) return "F";
	return std::to_string(ret);
}

uint64_t convertHexDig(char s){
	if(s == '0'){
	 return 0;
	}
	if(s == '1'){
	 return 1;
	}
	if(s == '2'){
	 return 2;
	}
	if(s == '3'){
	 return 3;
	}
	if(s == '4'){
	 return 4;
	}
	if(s == '5'){
	 return 5;
	}
	if(s == '6'){
	 return 6;
	}
	if(s == '7'){
	 return 7;
	}
	if(s == '8'){
	 return 8;
	}
	if(s == '9'){
	 return 9;
	}
	if(s == 'A'){
	 return 10;
	}
	if(s == 'B'){
	 return 11;
	}
	if(s == 'C'){
	 return 12;
	}
	if(s == 'D'){
	 return 13;
	}
	if(s == 'E'){
	 return 14;
	}
	if(s == 'F'){
	 return 15;
	}

}

uint64_t convertHex(string s, int len){
	int power = len-1;
	uint64_t sum = 0;
	for(int i = 0; i < len; i++){
		int digit = convertHexDig(s.at(i));
		sum += pow(16,power) * digit;
		power--;
	}
	return sum;
}

string convertInt(uint64_t i){
	string ret = "";
	uint64_t copy = i;
	while (copy > 0){
		int remainder = copy%16;
		ret += convertIntDig(remainder);
		copy/=16;
	}
	string ret2 = "";
	for (int i = ret.length()-1; i >= 0; i--){
		ret2+=ret.at(i);
	}
	return ret2;
}	

HexNum::HexNum(string nhexVal){
	size_t loc = nhexVal.find("0x");
	hexVal = nhexVal.substr(loc+2);
	len = hexVal.length();
	intVal = convertHex(hexVal,len);

}

HexNum::HexNum(uint64_t i){
	intVal = i;
	hexVal = "0x" + convertInt(i);
	len = hexVal.length();
}

string HexNum::getHex() const{
	return hexVal;
}

uint64_t HexNum::getInt() const{
	return intVal;
}

void HexNum::setHex(string h){
	hexVal = h;
}

void HexNum::setInt(uint64_t i){
	intVal = i;
}



