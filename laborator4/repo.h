#pragma once
#include "produs.h"

class Repo {
private:
	Produs produse[100];
	int n;
public:
	Repo();
	void add_produs(const Produs&);
	void delete_produs(const Produs&);
	void update_produs(const Produs&, char*, char*, int);
	Produs* get_all();
	int find_produs(const Produs&);
	~Repo();
	int size();
};