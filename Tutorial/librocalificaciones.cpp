#include "librocalificaciones.h"

#include <string>

using namespace std;

LibroCalificaciones::LibroCalificaciones(string cadena)
    :A(0),
      B(0),
      C(0)
{
    setNombreCurso("Matemáticas Avanzados");
}


void LibroCalificaciones::mensage(std::string cadena
                                  ){
    cout<< "Este es un mensaje del Libro de Calificaciones para el curso "
                << nombreCurso <<std::endl;
}

void LibroCalificaciones::setNombreCurso(string cadena){



    if(cadena.size() <25){
        cout<< "El tamaño de la cadena es adecuado para los requerimientos de validación"<<endl;
        nombreCurso = cadena;
    }else{
        cout<< "El tamaño de la cadena es mayor que los requerimiento de validacion"<<endl;
        nombreCurso = cadena;
    }

}

string LibroCalificaciones::getNombreCurso() const{
    return nombreCurso;
}

void LibroCalificaciones::sacarPromedios()
{
    int calificacion;

    cout <<"Ingrese una letra que represente una de las calificaciones"<<endl;
    cout <<"Ingrese EOF para terminar la lectura de calificaciones"<<endl;
    while((calificacion = cin.get()) != EOF){
        switch (calificacion) {
        case 'A':
        case 'a':
            ++A;
            break;

        case 'B':
        case 'b':
            ++B;
            break;

        case 'C':
        case 'c':
            ++C;
            break;

        case '\n':
        case '\t':
        case ' ':
            break;
        default:
            cout<< "Caracter no soportado, ingresa nueva calificacion"<<endl;
            break;
        }

    }

}

void LibroCalificaciones::mostrarReporte(){
    cout <<"Las calificaiones ingresadas son como siguen\n";
    cout<<"\nA: "<< A
       <<"\nB: "<<B
      <<"\nC: "<<C;
}


