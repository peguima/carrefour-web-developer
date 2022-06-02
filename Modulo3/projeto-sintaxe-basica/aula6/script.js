// tipos de função

// declarativas
function funcao() {
    console.log('Sou uma mensagem de uma função declarativa');
}

funcao();

// expressão de função

// com nomeação
var funcao = function funcao() {
    console.log('Sou uma mensagem de função de expressão');
}

funcao();

// sem nomeacao
var funcao = function() {
    console.log('Sou uma mensagem de função de expressão');
}

funcao();

// arrow function
var funcao = () => {
    console.log('Sou uma arrow function');
}

funcao();

