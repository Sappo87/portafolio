const d = document;

export default function draw(btn,selector){
    const getWinner= (selector) =>{
        const $players = d.querySelectorAll(selector),
        random = Math.floor(Math.random() * $players.length),
        winner = $players[random];
        return `El ganador es: ${winner.textContent}`;
    };

    d.addEventListener("click", (e)=>{
        if(e.target.matches(btn)){
            let result = getWinner(selector);
            alert(result);
        }
    })
}

/*Este ejemplo es para realizar un sorteo digital mediante comentarios de youtube  */
const getWinnerComment= (selector) =>{
    const $players = document.querySelectorAll(selector),
    random = Math.floor(Math.random() * $players.length),
    winner = $players[random];
    return `El ganador es: ${winner.textContent}`;
};

/*el valor enviado es la caja que contiene en youtube el nombre de la persona que comenta*/
//getWinnerComment("ytd-comment-thread-renderer #author-text span");