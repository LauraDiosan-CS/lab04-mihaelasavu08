#pragma once
#include <ostream>
using namespace std;
class Produs {
private:
	char* nume;
	char* data;
	int pret;
public:
	Produs();
	Produs(char*, char*, int);
	Produs(const Produs&);
	char* get_nume();
	char* get_data();
	int get_pret();
	void set_nume(char*);
	void set_data(char*);
	void set_pret(int);
	Produs& operator= (const Produs&);
	bool operator == (const Produs&);
	~Produs();
	friend ostream& operator<<(ostream& os, const Produs& p);
};