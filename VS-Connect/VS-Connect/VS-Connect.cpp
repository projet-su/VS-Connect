//Test officiel d'accès GitHub avec Visual Studio

#include <iostream>
using namespace std;


/* Fonctions.
==========*/
//Vide le buffer avant chaque saisie.
void viderBuffer() {
	cin.clear();
	cin.seekg(0, ios::end);

	//Si le flux est dans un état invalide, on le remet valide
	if (!cin.fail())	//Flux valide, donc le buffer est non vide
		cin.ignore(numeric_limits<streamsize>::max());
	else				//Flux invalide, donc le buffer est vide
		cin.clear();
}

//Attend que l'utilisateur pèse une touche.
void pause() {
	viderBuffer();
	cin.ignore();
}

int main() {
	cout << "Ligne 69";
	pause();
}