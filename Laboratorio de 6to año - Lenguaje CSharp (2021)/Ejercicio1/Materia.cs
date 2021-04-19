
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;

/*@author Silva, Miguel Angel
 *@version 2
 */

namespace Ejercicio1
{
    class Materia
    {
        ArrayList listado = new ArrayList();
        ArrayList asignatura = new ArrayList();

        public void cargarAlumnos()
        {
            try
            {
                Alumno miAlumno = new Alumno();
                Console.WriteLine("Ingrese nombre");
                miAlumno.Nombre = Console.ReadLine();
                Console.WriteLine("Ingrese apellido");
                miAlumno.Apellido = Console.ReadLine();
                Console.WriteLine("Ingrese DNI");
                miAlumno.Dni = int.Parse(Console.ReadLine());
                Console.WriteLine("¿Es alumno regular? - SI O NO");
                miAlumno.EsRegular = bool.Parse(Console.ReadLine());
                Console.WriteLine("Ingrese materia");
                miAlumno.Materia = Console.ReadLine();
                Console.WriteLine("Ingrese nota final");
                miAlumno.Nota_final = int.Parse(Console.ReadLine());
                listado.Add(miAlumno);
            }
            catch (Exception e)
            {
                Console.WriteLine(e.Message);
            }
        }

        /*
         * @return se esta pidiendo que materia es la que se va buscar, y la que se busca
         * es la que va mostrar sus alumnos y los alumnos con constancia regular.
         */
        public void queMateriaMostrar(string cualMateria)
        {
            foreach (Alumno c in listado)
            {
                if (c.Materia == cualMateria)
                {
                    asignatura.Add(c);
                }
            }
        }

        /*
         * Se mostrara todos los alumnos previamente usado el metodo queMateriaMostrar, luego de ese paso se mostrara el returno de esa materia.
         */
        public ArrayList mostrarAlum()
        {
            return asignatura;
        }

        /*
         * Se mostrara todo los alumnos regulares de  tal materia seleccionada previamente.
         */
        public ArrayList mostrarAlum_regulares()
        {
            ArrayList regular = new ArrayList();
            foreach (Alumno c in asignatura)
            {
                ArrayList regulares = new ArrayList();
                if(c.EsRegular)
                {
                    regular.Add(c);
                }
            }
            return regular;
        }
        /*
         *  Se mostrara la cantidad de alumnos regulares.
         */
        public int cantidadAlumnosRegulares()
        {
            return mostrarAlum_regulares().Count;
        }

        /*
         * Se mostrara la mejor nota del alumno de tal materia seleccioanda previamente.
         */
        public Alumno alumnoConMejorNota()
        {
            Alumno elMejor = new Alumno();
            elMejor.Nota_final = 0;
            foreach(Alumno c in asignatura)
            {
                if (c.Nota_final > elMejor.Nota_final)
                {
                    elMejor.Nota_final = c.Nota_final;
                }
            }
            return elMejor;
        }
    }
}
