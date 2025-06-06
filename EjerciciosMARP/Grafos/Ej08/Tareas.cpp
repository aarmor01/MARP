#include <iostream>
#include <fstream>

using namespace std;

#include "Tasks.h"  // propios o los de las estructuras de datos de clase

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
	int n, m;
	cin >> n >> m;
	if (!std::cin)  // fin de la entrada
		return false;

	// resolver el caso posiblemente llamando a otras funciones
	Digrafo graph(n);
	for (size_t i = 0; i < m; i++) {
		int firstV, secondV;
		cin >> firstV >> secondV;
		graph.ponArista(--firstV, --secondV);
	}

	Tasks sol(graph);

	// escribir la solución
	if (sol.taskQueue().empty())
		cout << "Imposible";
	else
		for (int vert : sol.taskQueue())
			cout << ++vert << " ";

	cout << "\n";

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
