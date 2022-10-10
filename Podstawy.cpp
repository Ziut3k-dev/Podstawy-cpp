#include <iostream>
//Opisac i przygotowac komentarze
using namespace std;

//dekralcja fukncji o naziwe funkcja
int funkcja()
{
	//deklaracja zmiennnej o nazwie zmienna_z_slowem 
	//ktora przechowuje tekst Czesc jestem ala
	string zmienna_z_slowem = "Czesc jestem ala";


	string druga_zmienna_z_slowem = "Czesc jest janek";
	string spacja = druga_zmienna_z_slowem + zmienna_z_slowem;
	cout <<spacja;
}
int czesc() {
	cout << "czesc";

}
int main() {
	cout << "main";
	funkcja();
	czesc();
}

