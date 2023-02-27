(()=>{
    const xhr = new XMLHttpRequest(),
    $xhr = document.getElementById("xhr"),
    $fragment = document.createDocumentFragment();

    xhr.addEventListener("readystatechange",(e)=>{

        if(xhr.readyState !== 4) return;

        //console.log(xhr);
        if(xhr.status >= 200 && xhr.status < 300){
           // console.log("exito");
            //console.log(xhr.responseText);
            let json = JSON.parse(xhr.responseText);
            //console.log(json);
            
           json.forEach(el => {
            const $li = document.createElement("li");
            $li.innerHTML = `${el.name} -- ${el.email} -- ${el.phone}`;
            $fragment.appendChild($li);
           });
            
            
            $xhr.appendChild($fragment);
        }else{

            //console.log("error");
            let message = xhr.statusText || "Ocurrio un error!";
            $xhr.innerHTML = `Error ${xhr.status}: ${message}`;
        }
        
       // console.log("Este mensaje cargara de cualquier forma");
    });

    xhr.open("GET", "./js/datos.json");
    xhr.send();
})();

(()=>{

    const $fetch = document.getElementById("fetch"),
    $fragment = document.createDocumentFragment();

    fetch("./js/datos.json")
    .then((res)=>(res.ok ? res.json() : Promise.reject(res)))
    .then((json)=>{
        json.forEach((el)=>{
            const $li = document.createElement("li");
            $li.innerHTML = `${el.name} -- ${el.email} -- ${el.phone}`;
            $fragment.appendChild($li);
        });

        $fetch.appendChild($fragment);
    })
    .catch((err)=>{
        let message = err.statusText||"Ocurrio un error!";
        $fetch.innerHTML = `Error - ${err.status}: ${message}`;
    })
    .finally(()=>{
        //console.log("Esto se ejecutara independientemente del resultado de la Promesa Fetch")
    });


})();

(()=>{
    const $fetchAsync = document.getElementById("fetch-async"),
    $fragment = document.createDocumentFragment();

    async function getData(){

        try{
            let res = await fetch("./js/datos.json"),
            json = await res.json();

            //console.log(res.json);

            if(!res.ok) throw {status:res.status, statusText:res.statusText}

            json.forEach((el)=>{
                const $li = document.createElement("li");
                $li.innerHTML = `${el.name} -- ${el.email} -- ${el.phone}`;
                $fragment.appendChild($li);
            });
    
            $fetchAsync.appendChild($fragment);

        }catch(err){
            let message = err.statusText||"Ocurrio un error!";
            $fetchAsync.innerHTML = `Error - ${err.status}: ${message}`;

        }finally{
            //console.log("Esto se ejecutara idependientemente del try... catch");
        }
    }

    getData();
})();

(()=>{
    const $axios = document.getElementById("axios"),
    $fragment = document.createDocumentFragment();

    axios
    .get("./js/datos.json")
    .then((res)=>{
       // console.log(res);
        let json = res.data;

        json.forEach((el)=>{
            const $li = document.createElement("li");
            $li.innerHTML = `${el.name} -- ${el.email} -- ${el.phone}`;
            $fragment.appendChild($li);
        });

        $axios.appendChild($fragment);
    })
    .catch((err)=>{
        //console.log("Estamos en el catch",err.response);
        let message = err.response.statusText||"Ocurrio un error";
        $axios.innerHTML = `Error ${err.response.responseText} : ${message}`;
        
    })
    .finally(()=>{
       // console.log("Esto se ejecutara independientemente del resultado de Axios");
    });
})();

 (()=>{
    const $axiosAsync = document.getElementById("axios-async"),
    $fragment = document.createDocumentFragment();

    async function getData(){
        try{
            let res = await axios.get("https://jsonplaceholder.typicode.com/users"),
            json = await res.data;
        
            //console.log(json);
        
            json.forEach((el)=>{
                const $li = document.createElement("li");
                $li.innerHTML = `${el.name} -- ${el.email} -- ${el.phone}`;
                $fragment.appendChild($li);
            });

            $axiosAsync.appendChild($fragment);
        }catch(err){
            console.log(err.response);
            let message = err.response.statusText||"Ocurrio un error";
            $axiosAsync.innerHTML = `Error ${err.response.responseText} : ${message}`;
        }finally{
            console.log("Se ejecuta independientemente del try... catch");
        }
    }
    getData();
 })();