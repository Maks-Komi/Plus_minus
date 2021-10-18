#include<iostream>
#include<fstream>
#include<string>
#include<string.h>
using namespace std;

//int naive_char_2_int(const char* p) {
//	int x = 0;
//	bool neg = false;
//	if (*p == '-') {
//		neg = true;
//		++p;
//	}
//	while (*p >= '0' && *p <= '9') {
//		x = (x * 10) + (*p - '0');
//		++p;
//	}
//	if (neg) {
//		x = -x;
//	}
//	return x;
//}

//int my_stoi(string str) {
//	int num = 0;
//	int ten;
//	bool signFlag = true; //true: +, false: -
//	for (unsigned int i = 0; i < str.length(); i++) {
//		if (str[i] < '0' || str[i] > '9') {
//			if (i == 0 && str[i] == '-') {
//				signFlag = false;
//				continue;
//			}
//			if (i == 0 && str[i] == '+') {
//				signFlag = true;
//				continue;
//			}
//
//			return NULL;
//		}
//
//		ten = 1;
//		for (unsigned int j = 0; j < str.length() - 1 - i; j++) {
//			ten *= 10;
//		}
//
//		num += ten * (str[i] - '0');
//	}
//
//	if (signFlag) {
//		return num;
//	}
//	else {
//		return -num;
//	}
//}

int main(int argc, char* argv[]) {
	int a, b, c, res;
	char chislo[10];
	char minus, plus;
	string str;
	ifstream fin("math_exp.txt");
	getline(fin, str);
	cout << str << endl;
	const char* c_str = str.c_str();
	for  (int i = 0, j = 0; c_str[i] != 0;) {
		if (c_str[i] == ' ') {
			i++;
		}
		if (c_str[i] == '-') {
			minus = '-';
			i++;
		}
		if (c_str[i] == '+') {
			plus = '+';
			i++;
		}
		if (c_str[i] >= '0' && c_str[i] <= '9') {
			chislo[j] = c_str[i];
			i++;
			j++;
		}
	}

	for (int i = 0; i<2; i++)
	{
		a = atoi(chislo);

	}


	//a = my_stoi(str);
	cout << a << endl;
	//cout << plus << " " << minus << endl;
	//cout << strchr(c_str, '-') << " " << endl;
	//if (strchr(c_str, '-'))
	//b = naive_char_2_int(c_str);
		
	//cout << b << " ";
	
	
}