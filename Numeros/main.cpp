
#include <iostream>
#include "Racional.h"



int main()
{
	Racional fraccionA(20, 8);
	Racional fraccionB(10, 4);
	Racional fraccionAux;

	std::cout << "\nTutorial -Números Racionales-\n" << std::endl;

	std::cout << "SIMPLIFICACIÓN de Fracción A: " << fraccionA.obtenerString() << std::endl;
	Racional::simplificarFraccion(fraccionA);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << std::endl;

	std::cout << "SIMPLIFICACIÓN de Fracción B: " << fraccionB.obtenerString() << std::endl;
	Racional::simplificarFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionB.obtenerString() << std::endl;

	std::cout << "\nSUMAR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.sumFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " + " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;

	std::cout << "\nRESTAR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.restFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " - " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;

	std::cout << "\nMULTIPLICAR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.multFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " * " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;

	std::cout << "\nDIVIDIR FRACCIONES" << std::endl;
	fraccionAux = fraccionA.divFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " / " << fraccionB.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;

	std::cout << "\nELEVAR FRACCION" << std::endl;
	fraccionAux = fraccionA.elevFraccion(fraccionA);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " & " << fraccionA.obtenerString() <<
		" = " << fraccionAux.obtenerString() << std::endl;

	/*std::cout << "\nELEVAR EQUIVALENTE" << std::endl;   //No logre terminar el metodo
	fraccionAux = fraccionA.elevEFraccion(fraccionB);
	std::cout << "RESULTADO: " << fraccionA.obtenerString() << " =? " << fraccionB.obtenerString() << std::endl;
		if (fraccionAux.setDenominador == 1) {
			std::cout << "\nNo son equivalentes" << std::endl;
		}
		else

		{
			std::cout << "\nEn efecto son equivalentes" << std::endl;
		}*/

	system("pause");
	 
	return 0;

}









