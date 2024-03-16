
#include "tp1_cpp/Arbre.hpp"

#include "tp1_cpp/strategie/Dormance.hpp"
#include "tp1_cpp/strategie/CroissancePrintaniere.hpp"
#include "tp1_cpp/strategie/CroissanceEstivale.hpp"
#include "tp1_cpp/strategie/Secheresse.hpp"

#include <FenetrePrincipale/FenetrePrincipale.hpp>

#include <QApplication>

#include <iostream>

int main(int argc, char* argv[])
{
  QApplication app(argc, argv);

	Arbre monArbre;
	Dormance dormanceStrategie;
	CroissancePrintaniere printaniereStrategie;
	CroissanceEstivale estivaleStrategie;
	Secheresse secheresseStrategie;

	while (true)
	{
	   int choix = 0;
	   std::cout << "Choix : 0-Quitter, 1-Pas de changement, 2-Dormance, 3-CroissancePrintaniere, 4-CroissanceEstivale, 5-Secheresse" << std::endl;
	   std::cin >> choix;
	   switch (choix)
	   {
	 		case 0: break;
	 		case 1: break;
	 		case 2:
				monArbre.setStrategieCroissance(&dormanceStrategie);
				break;
	 		case 3:
				monArbre.setStrategieCroissance(&printaniereStrategie);
				break;
	 		case 4:
				monArbre.setStrategieCroissance(&estivaleStrategie);
				break;
	 		case 5:
				monArbre.setStrategieCroissance(&secheresseStrategie);
				break;
	   }
	   if (choix == 0) break; // Quitte la boucle while (true)

	   monArbre.croissance();
		 std::cout << "\n\tMon arbre fait : " << monArbre.getTaille() << std::endl;
	}
  //TP1::FenetrePrincipale::MainWindow fenetre;
  //fenetre.show();

  return app.exec();
}
