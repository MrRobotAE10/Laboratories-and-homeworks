#include <iostream>
#include <fstream>
#include <string>

struct Pelicula {
    int IdPelicula;
    std::string Titulo;
    std::string Genero;
    std::string Director;
    int AnioLanzamiento;
    float Calificacion;
};

struct Cancion {
    int IdCancion;
    std::string Titulo;
    std::string Artista;
    std::string Genero;
    int AnioLanzamiento;
    float Calificacion;
};

struct Videojuego {
    int IdVideojuego;
    std::string Titulo;
    std::string Plataforma;
    std::string Genero;
    int AnioLanzamiento;
    float Calificacion;
};

void registrarPelicula(int& multimediaCount);
void registrarCancion(int& multimediaCount);
void registrarVideojuego(int& multimediaCount);
void mostrarInformacion();
void ordenarMultimedia();
void buscarElemento();
void calcularEstadisticas();
void modificarCalificacion();
void mostrarMejorPeorCalificado();

int main() {
    int opcion;

    int peliculasCount = 0;
    int cancionesCount = 0;
    int videojuegosCount = 0;
    do {
        std::cout << "\nMenú\n";
        std::cout << "1. Ingresar Películas\n";
        std::cout << "2. Ingresar Canciones\n";
        std::cout << "3. Ingresar Videojuegos\n";
        std::cout << "4. Modificar Calificación Películas\n";
        std::cout << "5. Modificar Calificación Canciones\n";
        std::cout << "6. Modificar Calificación Videojuegos\n";
        std::cout << "7. Listar Películas\n";
        std::cout << "8. Listar Canciones\n";
        std::cout << "9. Listar Videojuegos\n";
        std::cout << "10. Mostrar estadísticas\n";
        std::cout << "11. Listar los elementos mejor calificados\n";
        std::cout << "12. Listar los elementos peor calificados\n";
        std::cout << "13. Salir\n";
        std::cout << "Ingrese su opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                registrarPelicula(peliculasCount);
                break;
            case 2:
                registrarCancion(cancionesCount);
                break;
            case 3:
                registrarVideojuego(videojuegosCount);
                break;
            case 4:
                modificarCalificacion();
                break;
            case 5:
                modificarCalificacion();
                break;
            case 6:
                modificarCalificacion();
                break;
            case 7:
                ordenarMultimedia();
                break;
            case 8:
                ordenarMultimedia();
                break;
            case 9:
                ordenarMultimedia();
                break;
            case 10:
                calcularEstadisticas();
                break;
            case 11:
                mostrarMejorPeorCalificado();
                break;
            case 12:
                mostrarMejorPeorCalificado();
                break;
            case 13:
                std::cout << "Saliendo del programa...\n";
                break;
            default:
                std::cout << "Opción no válida. Inténtelo de nuevo.\n";
        }
    } while (opcion != 13);

    return 0;
}

void registrarPelicula(int &multimediaCount) {
    std::ofstream archivo("multimedia.txt", std::ios::app);

    if (!archivo) {
        std::cerr << "No se pudo abrir el archivo de Peliculas\n";
        return;
    }

    Pelicula nuevaPelicula;
    nuevaPelicula.IdPelicula = multimediaCount;
    
    std::cin.ignore();
    std::cout << "Ingrese el Titulo de la pelicula: \n";
    std::getline(std::cin, nuevaPelicula.Titulo);

    std::cout << "Ingrese el genero de la Pelicula: \n";
    std::getline(std::cin, nuevaPelicula.Genero);

    std::cout << "Ingrese el director de la Pelicula: \n";
    std::getline(std::cin, nuevaPelicula.Director);

    std::cout << "Ingrese el anio en que salio la Pelicula: \n";
    std::cin >> nuevaPelicula.AnioLanzamiento;

    std::cout << "Ingrese la calificacion de la Pelicula: \n";
    std::cin >> nuevaPelicula.Calificacion;
    std::cin.ignore();

    multimediaCount++;

    archivo << nuevaPelicula.IdPelicula << "," << nuevaPelicula.Titulo << "," << nuevaPelicula.Genero << "," << nuevaPelicula.Director << ","
            << nuevaPelicula.AnioLanzamiento << "," << nuevaPelicula.Calificacion << "\n";
    std::cout << "Estudiante Ingresado con exito!\n";

    archivo.close();
}

void registrarCancion(int& multimediaCount) {
    std::ofstream archivo("multimedia.txt", std::ios::app);

    if (!archivo) {
        std::cerr << "No se pudo abrir el archivo de Canciones\n";
        return;
    }

    Cancion nuevaCancion;
    nuevaCancion.IdCancion = multimediaCount;

    std::cin.ignore();
    std::cout << "Ingrese el Título de la canción: \n";
    std::getline(std::cin, nuevaCancion.Titulo);

    std::cout << "Ingrese el Artista de la Canción: \n";
    std::getline(std::cin, nuevaCancion.Artista);

    std::cout << "Ingrese el Género de la Canción: \n";
    std::getline(std::cin, nuevaCancion.Genero);

    std::cout << "Ingrese el año en que salió la Canción: \n";
    std::cin >> nuevaCancion.AnioLanzamiento;

    std::cout << "Ingrese la calificación de la Canción: \n";
    std::cin >> nuevaCancion.Calificacion;
    std::cin.ignore();

    multimediaCount++;

    archivo << nuevaCancion.IdCancion << "," << nuevaCancion.Titulo << "," << nuevaCancion.Artista << "," << nuevaCancion.Genero << ","
            << nuevaCancion.AnioLanzamiento << "," << nuevaCancion.Calificacion << "\n";
    std::cout << "Canción ingresada con éxito!\n";

    archivo.close();
}


void registrarVideojuego(int& videojuegosCount) {
    std::ofstream archivo("multimedia.txt", std::ios::app);

    if (!archivo) {
        std::cer
    }
}

void mostrarInformacion() {
}

void ordenarMultimedia() {
}

void buscarElemento() {
}

void calcularEstadisticas() {
}

void modificarCalificacion() {
}

void mostrarMejorPeorCalificado() {
}
