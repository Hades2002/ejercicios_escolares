using System;
using System.Collections.Generic;
using System.Text;

/*@author Silva, Miguel Angel
 *@version 2
 */

namespace Ejercicio1
{
    class Alumno
    {
        private string nombre;
        private string apellido;
        private int dni;
        private bool esRegular;
        private string materia;
        private int nota_final;

        public string Nombre { get => nombre; set => nombre = value; }
        public string Apellido { get => apellido; set => apellido = value; }
        public int Dni { get => dni; set => dni = value; }
        public int Nota_final { get => nota_final; set => nota_final = value; }
        public bool EsRegular { get => esRegular; set => esRegular = value; }
        public string Materia { get => materia; set => materia = value; }
    }
}
