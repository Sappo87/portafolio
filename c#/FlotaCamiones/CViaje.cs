using System;
namespace Transporte
{
    class CViaje
    {
        private static float costoKilómetro;
        private static ushort kilometrajeMínimo;
        private string dominio;
        private ushort distanciaRecorrida;
        public static float GetCostoKilómetro ()
        {
            return CViaje.costoKilómetro;
        }
        public static void SetCostoKilómetro (float costo)
        {
            CViaje.costoKilómetro = costo;
        }
        public static ushort GetKilometrajeMínimo()
        {
            return CViaje.kilometrajeMínimo;
        }
        public static void SetKilometrajeMínimo (ushort kilometraje)
        {
            CViaje.kilometrajeMínimo = kilometraje;
        }
        public CViaje ()
        {
            this.dominio = "Sin Establecer";
        }
        public CViaje (string patente, ushort distancia)
        {
            this.dominio = patente;
            this.distanciaRecorrida = distancia;
        }
        public string GetDominio()
        {
            return this.dominio;
        }
        public void SetDominio(string patente)
        {
            this.dominio = patente;
        }
        public ushort Kilometraje
        {
            get { return this.distanciaRecorrida; }
            set { this.distanciaRecorrida = value; }
        }
        public float DarCostoViaje()
        {
            if(this.distanciaRecorrida<CViaje.kilometrajeMínimo)
            {
                return CViaje.costoKilómetro * CViaje.kilometrajeMínimo;
            }
            return CViaje.costoKilómetro * this.distanciaRecorrida;
        }
        public float DarCostoViaje(float peajes)
        {
            return this.DarCostoViaje() + peajes;
        }
        public string DarDatos()
        {
            string datos = "Dominio: " + this.dominio;
            datos += " - Distancia: " + this.distanciaRecorrida.ToString();
            datos += " km - Costo por Kilómetro: $" + CViaje.costoKilómetro.ToString();
            datos += " - Costo del Viaje: $" + this.DarCostoViaje().ToString();
            return datos;
        }
        public static CViaje CostoMayor (CViaje viaje1, CViaje viaje2)
        {
            if (viaje1.DarCostoViaje() > viaje2.DarCostoViaje()) return viaje1;
            return viaje2;
        }
    }
}
