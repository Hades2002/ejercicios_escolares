using System;

/*@author Silva, Miguel Angel
 *@version 2
 */

namespace Ejercicio1
{
    class Program
    {
        static void Main(string[] args)
        {
            /*
             * Ejercitación Clases y Objetos: Realizar el diagrama UML de clases y el código en C#
             * Se necesita implementar un sistema en el que se puedan cargar alumnos, a los cuales los
             * caracterizan el nombre y apellido, el DNI, condición (regular o condicional) y la nota final. Estos
             * alumnos se deben cargar en una asignatura, llamada Algoritmos y Programación III.
             * Implemente las clases y métodos necesarios para esta situación, teniendo en cuenta lo que se
             * pide a continuación:
             * A. Mostrar en pantalla todos los alumnos que se encuentren en la asignatura.
             * B. Mostrar en pantalla los alumnos que se encuentren con condición regular y su cantidad.
             * C. Mostrar en pantalla el alumno con la mejor nota.
             */
            Materia materia = new Materia();
            materia.cargarAlumnos();
        }
    }
}
