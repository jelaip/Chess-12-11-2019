// 12-11-2019.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <SFML/Graphics.hpp> 
#include "Board.h"
#include "windows.h"


std::string GetAppPath() 
{
	char cExeFilePath[256];
	GetModuleFileNameA(nullptr, cExeFilePath, 256);
	std::string exeFilePath = cExeFilePath;
	int exeNamePos = exeFilePath.find_last_of("\\/");
	std::string appPath = exeFilePath.substr(0, exeNamePos + 1);
	return appPath;
}

std::string GetAssetPath() {
	std::string assetPath = GetAppPath();

	assetPath = assetPath + "Ressources";
	return assetPath;
}
int main()
{
    std::cout << "Hello World!\n";
	//system("pause");
	sf::RenderWindow window(sf::VideoMode(600, 600), "SFML_Tuto");
	
	// Initialise everything below
	Board* board = new Board(window.getSize().x);
	
	// Game loop
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) { // Process any input event here
			if (event.type == sf::Event::Closed) {window.close(); }
			



		} // Update game here
	window.clear(); // Whatever I want to draw goes here
	for (sf::RectangleShape r : board->caseReel)
	{
		window.draw(r);
	}
	window.display();
}


}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
