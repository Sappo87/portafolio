using System;
namespace Transporte
{
    class CEjecutora
    {
        static void Main()
        {
            CViaje másCaro = null;
            Console.Write("Ingrese Costo por Kilómetro: ");
            CViaje.SetCostoKilómetro(float.Parse(Console.ReadLine()));
            Console.Write("Ingrese Kilometraje Mínimo: ");
            CViaje.SetKilometrajeMínimo(ushort.Parse(Console.ReadLine()));
            Console.Write("\nIngrese Dominio (Patente) - \"Fin\" para Salir: ");
            string patente = Console.ReadLine().ToUpper();
            while(patente!="FIN")
            {
                Console.Write("Ingrese Distancia Recorrida: ");
                CViaje auxViaje = new CViaje(patente, ushort.Parse(Console.ReadLine()));
                Console.WriteLine("Viaje ingresado --> "+auxViaje.DarDatos());
                if ((másCaro==null)||(CViaje.CostoMayor(auxViaje, másCaro) == auxViaje))
                {
                    másCaro = auxViaje;
                }
                Console.Write("\nIngrese Dominio (Patente) - \"Fin\" para Salir: ");
                patente = Console.ReadLine().ToUpper();
            }
            if (másCaro == null) Console.WriteLine("No se ingresaron viajes válidos");
            else
            {
                Console.WriteLine("El viaje más costoso es: " + másCaro.DarDatos());
            }
            Console.WriteLine("Para salir pulse <Enter>");
            Console.ReadLine();
        }
    }
}
