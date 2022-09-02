// LAB02 ASHLEY URBINA 1071022.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

struct medidas{
    double lado, base, altura, apotema; 
}medidas;

struct triangulo : medidas{
public: double CalcularAreaT() {
   
    double area = (base * altura) / 2;
    return area;
}
public: double CalcularPerimetroT() {
          double perimetro = 3 * lado;
          return perimetro;
      }
}TRI;

struct cuadrilatero : medidas{
public: double CalcularAreaC() {
    double area = base * altura;
    return area;
}
public: double CalcularPerimetroC() {
    double perimetro = 4 * lado;
    return perimetro;
}
}CUA;

struct pentagono : medidas{
public: double CalcularAreaP() {
    double area = (CalcularPerimetroP() * apotema) / 2;
    return area;
}
public: double CalcularPerimetroP() {
    double perimetro = 5 * lado;
    return perimetro;
}
}PENTA;

struct hexagono : medidas{
public: double CalcularAreaHex() {
    double area = 3 * apotema * lado;
    return area;
}
public: double CalcularPerimetroHex() {
          double perimetro = 6 * lado;
          return perimetro;
      }
}HEXA;

struct heptagono : medidas {
public: double CalcularAreaHep() {
    double area = (7 * apotema * lado) / 2;
    return area;
}
public: double CalcularPerimetroHep() {
    double perimetro = 7 * lado;
    return perimetro;
}
}HEPTA;

struct octagono :medidas{
public: double CalcularAreaO() {
    double area = 4 * apotema * lado;
    return area;
}
public: double CalcularPerimetroO() {
          double perimetro = 8 * lado;
          return perimetro;
      }
}OCTA;

struct eneagono : medidas {
public: double CalcularAreaE() {
    double area = (9 * apotema * lado) / 2;
    return area;
}
public: double CalcularPerimetroE() {
    double perimetro = 9 * lado;
    return perimetro;
}
}ENEA;

struct decagono : medidas{
  
public: double CalcularAreaD() {
    double area = 5 * apotema * lado;
    return area;
}
public: double CalcularPerimetroD() {
    double perimetro = 10 * lado;
    return perimetro;
}
}DECA;

int main()
{
    struct medidas* medida;
    double lado;
 


    std::cout << "Ingrese lado de triángulo";
    std::cin >> TRI.lado;
    std::cout << ("Ingrese base de triángulo");
    std::cin >> TRI.base;
    std::cout << "Ingrese altura de triángulo";
    std::cin >> TRI.altura;

    std::cout << "Ingrese lado de cuadrilatero";
    std::cin >> CUA.lado;
    std::cout << ("Ingrese base de cuadrilatero");
    std::cin >> CUA.base;
    std::cout << "Ingrese altura de cuadrilatero";
    std::cin >> CUA.altura;

    std::cout << "Ingrese lado de pentagono";
    std::cin >> PENTA.lado;
    std::cout << ("Ingrese apotema de pentagono");
    std::cin >> PENTA.apotema;
  
    std::cout << "Ingrese lado de hexagono";
    std::cin >> HEXA.lado;
    std::cout << ("Ingrese apotema de hexagono");
    std::cin >> HEXA.apotema;

    std::cout << "Ingrese lado de heptagono";
    std::cin >> HEPTA.lado;
    std::cout << ("Ingrese apotema de heptagono");
    std::cin >> HEPTA.apotema;

    std::cout << "Ingrese lado de octagono";
    std::cin >> OCTA.lado;
    std::cout << ("Ingrese apotema de octagono");
    std::cin >> OCTA.apotema;

    std::cout << "Ingrese lado de eneagono";
    std::cin >> ENEA.lado;
    std::cout << ("Ingrese apotema de eneagono");
    std::cin >> ENEA.apotema;


    std::cout << "Ingrese lado de decagono";
    std::cin >> DECA.lado;
    std::cout << ("Ingrese apotema de decagono");
    std::cin >> DECA.apotema;

    std::cout << "el área del triangulo es: " << TRI.CalcularAreaT();
    std::cout << "el área del cuadrilatero es: " << CUA.CalcularAreaC();
    std::cout << "el área del pentagono es: " << PENTA.CalcularAreaP();
    std::cout << "el área del hexagono es: " << HEXA.CalcularAreaHex();
    std::cout << "el área del heptagono es: " << HEPTA.CalcularAreaHep();
    std::cout << "el área del octagono es: " << OCTA.CalcularAreaO();
    std::cout << "el área del eneagono es: " << ENEA.CalcularAreaE();
    std::cout << "el área del decagono es: " << DECA.CalcularAreaD();

    std::cout << "el área del triangulo es: " << TRI.CalcularPerimetroT();
    std::cout << "el área del cuadrilatero es: " << CUA.CalcularPerimetroC();
    std::cout << "el área del pentagono es: " << PENTA.CalcularPerimetroP();
    std::cout << "el área del hexagono es: " << HEXA.CalcularPerimetroHex();
    std::cout << "el área del heptagono es: " << HEPTA.CalcularPerimetroHep();
    std::cout << "el área del octagono es: " << OCTA.CalcularPerimetroO();
    std::cout << "el área del eneagono es: " << ENEA.CalcularPerimetroE();
    std::cout << "el área del decagono es: " << DECA.CalcularPerimetroD();
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
