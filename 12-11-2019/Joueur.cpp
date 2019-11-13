#include "Joueur.h"
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

Joueur::Joueur(bool _black,Board* baord)
{
	black = _black;
	fillPionList(pionList);
}

void Joueur::fillPionList(std::list<Pion*>& pionList) {
	
	if (!black) 
	{
		for (int i = 0; i < 8; ++i) {
			pionList.push_back(new Pawn("/PawnW.png", GetAssetPath(), i, 1, black));
			
		}
		pionList.push_back(new Rook("/RookW.png", GetAssetPath(), 0, 0, black));
		pionList.push_back(new Knight("/KnightW.png", GetAssetPath(), 1, 0, black));
		pionList.push_back(new Bishop("/BishopW.png", GetAssetPath(), 2, 0, black));
		pionList.push_back(new Queen("/QueenW.png", GetAssetPath(), 3, 0, black));
		pionList.push_back(new King("/KingW.png", GetAssetPath(), 4, 0, black));
		pionList.push_back(new Bishop("/BishopW.png", GetAssetPath(), 5, 0, black));
		pionList.push_back(new Knight("/KnightW.png", GetAssetPath(), 6, 0, black));
		pionList.push_back(new Rook("/RookW.png", GetAssetPath(), 7, 0, black));
		
		

	}

	else 
	{
		for (int i = 0; i < 8; ++i) {
			pionList.push_back(new Pawn("/PawnB.png", GetAssetPath(), i, 6, black));

		}
		pionList.push_back(new Rook("/RookB.png", GetAssetPath(), 0, 7, black));
		pionList.push_back(new Knight("/KnightB.png", GetAssetPath(), 1, 7, black));
		pionList.push_back(new Bishop("/BishopB.png", GetAssetPath(), 2, 7, black));
		pionList.push_back(new Queen("/QueenB.png", GetAssetPath(), 3, 7, black));
		pionList.push_back(new King("/KingB.png", GetAssetPath(), 4, 7, black));
		pionList.push_back(new Bishop("/BishopB.png", GetAssetPath(), 5, 7, black));
		pionList.push_back(new Knight("/KnightB.png", GetAssetPath(), 6, 7, black));
		pionList.push_back(new Rook("/RookB.png", GetAssetPath(), 7, 7, black));

	}
}
Joueur::~Joueur()
{
}
