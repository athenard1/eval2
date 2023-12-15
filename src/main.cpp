#include <iostream>
using namespace std;

int main() {
int NombredePlacesdisponibles = 10; 

  std::cout << NombredePlacesdisponibles << std::endl;


  std::cout << "**********  Evaluation 2  **********" << std::endl;
  std::cout << "1 - Entrée dans le parking" << std::endl;
  std::cout << "2 - Nombre de places disponibles" << std::endl;
  std::cout << "3 - Sortie du parking " << std::endl;
  std::cout << "4 - Quitter " << std::endl;
  std::cout << "*************************************" << std::endl;

int Choix; 
  std::cin >> Choix;
  std::cout << Choix << std::endl;

  if (Choix == 1) 
  {
    std::cout << "-Entrée dans le parking\n" ;
  } 
      if (Choix == 2) 
  {
    std::cout << "-Nombre de places disponibles\n" ;
  } 
      if (Choix == 3) 
  {
    std::cout << "-Sortie du parking\n" ;
  }   
      if (Choix == 4) 
  {
    std::cout << "-Quitter\n" ;
  } 
  else
  { if (Choix  > 4)
    {
      std::cout << "Choix non valide\n" ;
    }
      if (Choix < 1)
    {
      std::cout << "Choix non valide\n" ;
      }
    }
  
}
