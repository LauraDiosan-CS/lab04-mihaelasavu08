#include <iostream>
#include "produs.h"
#include "teste.h"
#include "repo.h"
#include "meniu.h"

using namespace std;



int main() {
	Teste();
	show_menu();
	Produs produse[100];
	Repo rep;
	int n = rep.size();
	int com = 1;
	while (com)
	{
	
		cout << "introduceti comanda: " << endl;
		cin >> com;
		if (com == 1) {
			char nume[100], data[100];
			int pret;
			cout << " nume produs:  " << endl;
			cin >> nume;
			cout << "data: ";
			cin >> data;
			cout << "pret: " << endl;
			cin >> pret;
			Produs p1(nume, data, pret);
			produse[n++] = p1;
			rep.add_produs(p1);
		}
		if (com == 2)
		{
			int i;
			for ( i = 0; i < rep.size(); i++)
			{
				cout << rep.get_all()[i] << endl;
			}
		}
	
		if (com == 3)
		{
			char nume[100],data[100]=" ";
			int pret = 0;
			cout << " nume produs de modificat: " << endl;
			cin >> nume;
			Produs p(nume, data, pret);
			char nume_nou[100];
			cout << " nume nou produs:  " << endl;
			cin >> nume_nou;
			char data_nou[100];
			cout << " data noua: ";
			cin >> data_nou;
			int pret_nou;
			cout << "pret nou: " << endl;
			cin >> pret_nou;
			rep.update_produs(p, nume_nou, data_nou, pret_nou);
		}
		if (com == 4)
		{
			char nume[100], data[50] = " ";
			int pret = 0;
			cout << " nume produs de sters: " << endl;
			cin >> nume;
			Produs p(nume, data, pret);
			rep.delete_produs(p);
		}
		if (com == 0)
			break;
	}
}
