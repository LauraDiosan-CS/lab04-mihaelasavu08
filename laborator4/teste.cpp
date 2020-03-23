#include <iostream>
#include <assert.h>
#include <cassert>
#include <string.h>
#include "teste.h"
#include "repo.h"

using namespace std;

void Teste() {
	
	Repo rep;
	assert(rep.size() == 0);
	char nume[100] = "Stilou";
	char data[100] = "05.03.2020";
	int pret = 23;
	Produs prod1(nume, data, pret);
	rep.add_produs(prod1);
	assert(rep.size() == 1);
	assert(prod1.get_pret() == 23);
	assert(strcmp(prod1.get_nume(), nume) == 0);
	assert(strcmp(prod1.get_data(), data) == 0);
	int i = rep.find_produs(prod1);
	char nume_nou[100] = "Pix";
	char data_nou[100] = "10.03.2020";
	int pret_nou = 10;
	rep.update_produs(prod1, nume_nou, data_nou, pret_nou);
	assert(rep.get_all()[i].get_pret() == pret_nou);
	assert(strcmp(rep.get_all()[i].get_nume(), nume_nou) == 0);
	assert(strcmp(rep.get_all()[i].get_data(), data_nou) == 0);
	rep.delete_produs(rep.get_all()[i]);
	assert(rep.size() == 0);

}