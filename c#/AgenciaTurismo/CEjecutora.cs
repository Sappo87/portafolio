using System;
namespace Agencia
{
    class CEjecutora
    {
        static void Main()
        {
            ushort auxNumero;
            CPaquete auxPaquete=null, másBarato=null;
            Console.Write("Ingrese el porcentaje de impuesto a aplicar sobre los paquetes: ");
            CPaquete.SetImpuesto(Convert.ToSingle(Console.ReadLine()));

            Console.Write("Ingrese el número del paquete turístico (0 para salir): ");
            auxNumero=Convert.ToUInt16(Console.ReadLine());
            while (auxNumero != 0)
            {
                Console.Write("Ingrese el detalle del paquete turístico: ");
                auxPaquete = new CPaquete(auxNumero, Console.ReadLine());
                Console.Write("Ingrese el costo del paquete turístico: ");
                auxPaquete.SetCosto(Convert.ToSingle(Console.ReadLine()));
                if (másBarato==null || auxPaquete.EsMasBaratoQue(másBarato))
                {
                    másBarato = auxPaquete;
                }
                Console.Clear();
                Console.Write("Ingrese el número del paquete turístico (0 para salir): ");
                auxNumero = Convert.ToUInt16(Console.ReadLine());
            }
            Console.Clear();
            if (másBarato!=null)
            {
                Console.WriteLine("Paquete turístico más barato: \n{0}", másBarato.DarDatos());
                Console.WriteLine("Precio del paquete turístico más barato (En 1 pago - cuota): ${0}", másBarato.DarPrecio().ToString());
                Console.WriteLine("Precio del paquete turístico más barato (En 12 pagos - cuotas): ${0}", másBarato.DarPrecio(12).ToString());
            }
            else Console.WriteLine("No se ingresaron paquetes turísticos válidos.");

            Console.Write("Pulse ENTER.");
            Console.ReadLine();
        }
    }
}
