#include "repo.h"
#include <iostream>
using namespace std;

Repo::Repo() {
	this->n = 0;
}

void Repo::add_produs(const Produs& p)
{
	this->produse[this->n++] = p;
}

void Repo::update_produs( Produs& p, char* nume, char* data, int pret)
{
	int i = find_produs(p);
	if (i != -1) {
		produse[i].set_nume(nume);
		produse[i].set_data(data);
		produse[i].set_pret(pret);
	}

}
void Repo::delete_produs(const Produs& p)
{
	for (int i = 0; i < n; i++) {
		if (produse[i] == p)
		{
			produse[i] = produse[n - 1];
			n--;
			break;
		}
	}
}
int Repo::find_produs( Produs& p)
{
	int i;
	for ( i = 0; i < n; i++)
	{
		if (strcmp(produse[i].get_nume (), p.get_nume())==0)
			return i;
	}
	return -1;
}
Produs* Repo::get_all() {
	return this->produse;
}
int Repo::size() {
	return n;
}
Repo::~Repo() {
	this->n = 0;
}