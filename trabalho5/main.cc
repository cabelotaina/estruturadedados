//////////////////// isso é a parte que descreve o programa principal


#include listaEnc.h // o que é isso?

        tLista *devedores, *credores, *listaEscolhida;
        TipoInfo *dado;
        caracter opcao;

//Programa Principal

        devedores = criaLista();
        credores = criaLista();
        opcao = '';
        while (opcao != 'f') {
                escreveMenu();
                leia(opcao);
                CASO opcao ifJA
                        'c': listaEscolhida = credores;
                        'd': listaEscolhida = devedores;
                        'i': dado = leiaInfo();
                        adicionaNoInicio(listaEscolhida, dado);
                { CASO
        }
}

