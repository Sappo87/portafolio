const d = document,
      n = navigator;

export default function getGeolocation(id){
    const $id = d.getElementById(id),
          options = {
            enableHighAccurancy:true,/*dispositivo trate de hacer la mejor lectura que pueda(acelera el hardware) */
            timeout:5000,/*cuanto tiempo va a estar esperando para tomar la lectura */
            maximumAge:0/*para evitar que se guarde en cache la lectura */
          };

    const succes = (position) =>{
        let coords = position.coords;
       

        $id.innerHTML=`
            <p>Tu posicion actual es:</p>
            <ul>
                <li>Latitud: <b>${coords.latitude}</b></li>
                <li>Longitud: <b>${coords.longitude}</b></li>
                <li>Metros: <b>${coords.accuracy}</b></li>
            </ul>
            <br><br>
            <a href="https://www.google.com/maps/@${coords.latitude},${coords.longitude},10Z" target="_blank"rel="noopener">Ver en Google Maps</a>
        `;
    };

    const error = (err)=>{
        $id.innerHTML=`<p><mark>Error: ${err.code}: ${err.message}</mark></p>`;
        
    };


    n.geolocation.getCurrentPosition(succes,error,options);      
}