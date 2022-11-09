using System;
namespace Agencia
{
    class CPaquete
    {
        private static float impuesto;
        private ushort numPaquete;
        private string detalle;
        private float costo;
        
        public static void SetImpuesto(float porcentaje)
        {
            CPaquete.impuesto=porcentaje;
        }
   
        public CPaquete (ushort número, string descripcion)
        {
            this.numPaquete=número;
            this.detalle = descripcion;
        }
        public void SetCosto(float monto)
        {
           this.costo=monto;
        }
        public float GetCosto()
        {
            return this.costo;
        }
        public float DarPrecio()
        {
           return this.costo * (1F + CPaquete.impuesto / 100);
        }
        public float DarPrecio(ushort cuotas)
        {
            /*Solución recursiva:
            
            if (cuotas > 1) return (this.darMontoTotal(System.Convert.ToUInt16(cuotas - 1)) * 1.1F);
            return this.darMontoTotal();

            Solución Algebraica:*/
            return this.DarPrecio() *(1+ ((cuotas - 1) * 0.1F));
        } 
       public string DarDatos() 
       {
           string datos= "\tNúmero de Paquete: " + Convert.ToString(this.numPaquete);
           datos+="\n\tDetalle: " + this.detalle;
           datos += "\n\tCosto: $" + Convert.ToString(this.costo);
           datos += "\n\tImpuesto: " + Convert.ToString(CPaquete.impuesto) + "%";
           datos += "\n\tPrecio: $" + Convert.ToString(this.DarPrecio());
           return datos;
       }
       public float Costo
       {
           get { return this.costo; }
           set { this.costo = value; }
       }
       public bool EsMasBaratoQue(CPaquete otroPaquete)
       {
           if (this.DarPrecio()<otroPaquete.DarPrecio()) return true;
           return false;
       }
    }
}
