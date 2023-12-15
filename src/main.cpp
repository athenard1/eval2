#include <iostream>

int main() {
    
  std::cout << "**********  Menu véhicule  **********" << std::endl;
  std::cout << "1 - Multimédia" << std::endl;
  std::cout << "2 - Téléphone" << std::endl;
  std::cout << "3 - Connexions" << std::endl;
  std::cout << "4 - Personnalisation - Configuration" << std::endl;
  std::cout << "*************************************" << std::endl;
int choix;
std::cin >> choix;
std::cout << choix << std::endl;
std::cout << "choix de l'utilisateur :\n: " << choix << std::endl;
  if (choix == 1) 
  {
    std::cout << "-Multimédia\n" ;
  } 
      if (choix == 2) 
  {
    std::cout << "-Téléphone\n" ;
  } 
      if (choix == 3) 
  {
    std::cout << "-Connexions\n" ;
  }   
      if (choix == 4) 
  {
    std::cout << "-Personnalisation - Configuration\n" ;
  } 
  else
  { if (choix  > 4)
    {
      std::cout << "Choix non valide\n" ;
    }
      if (choix < 1)
    {
      std::cout << "Choix non valide\n" ;
      }
    }
  }