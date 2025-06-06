#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

#include "TreeSet_AVL.h"  // propios o los de las estructuras de datos de clase

/*@ <answer>

 Escribe aquí un comentario general sobre la solución, explicando cómo
 se resuelve el problema y cuál es el coste de la solución, en función
 del tamaño del problema.

 @ </answer> */


 // ================================================================
 // Escribe el código completo de tu solución aquí debajo
 // ================================================================
 //@ <answer>

bool resuelveCaso() {

	// leer los datos de la entrada
	int n; cin >> n;
	if (!n)
		return false;

	// resolver el caso posiblemente llamando a otras funciones
	Set<int> kEsimo;
	for (size_t i = 0; i < n; i++) {
		int aux; cin >> aux;
		kEsimo.insert(aux);
	}

	// escribir la solución
	int m; cin >> m;
	for (size_t j = 0; j < m; j++) {
		try
		{
			int k; cin >> k;
			int aux = kEsimo.kesimo(k);
			cout << aux << "\n";
		}
		catch (const std::exception&)
		{
			cout << "??\n";
		}
	}

	cout << "---\n";

	return true;
}

//@ </answer>
//  Lo que se escriba dejado de esta línea ya no forma parte de la solución.

int main() {
	// ajustes para que cin extraiga directamente de un fichero
#ifndef DOMJUDGE
	std::ifstream in("casos.txt");
	auto cinbuf = std::cin.rdbuf(in.rdbuf());
#endif

	while (resuelveCaso());

	// para dejar todo como estaba al principio
#ifndef DOMJUDGE
	std::cin.rdbuf(cinbuf);
	system("PAUSE");
#endif
	return 0;
}
