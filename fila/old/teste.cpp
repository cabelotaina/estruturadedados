//Estrutura Basica
#include<stdio.h>
#include<stdlib.h>
struct fila {
struct elementofila*inicio;
struct elementofila*fim;
};
struct elementofila{
int info;
struct  elementofila*prox;
};

//Inicialização
void init (struct fila * f)
    {
        f->inicio= f->fim = NULL;
    }

//Enfileirar
void push(struct fila *f, int vlr)
    {
        struct elementofila *novo;
        novo = (struct elementofila*)malloc(sizeof(struct elementofila));
        novo->info=vlr;
        novo->prox = NULL;
        if(f->fim !=NULL)
            {
                f->fim->prox=novo;
            }
        f->fim=novo;
        if(f->inicio==NULL)
            {
                f->inicio=f->fim;
            }
}
//Desenfileirar
int pop (struct fila *f){
if(f->inicio==NULL)
    {
        printf("fila vazia");
        exit(0);
    }
else{
   int vlr = f->inicio->info;
   struct elementofila *aux;
   aux =f->inicio;
   f->inicio=f->inicio->prox;
   free(aux);
   return vlr;
   }
}
//*chamada printf(“%d”,delete(&minhafila));
//Construção do menu para a filas
int main(){
 struct fila fl;// Tenho que saber que formato tem pl.inicializar o ponteiro sempre NULL
 int op,vl;//cria duas variaveis

 while( op != 4){ //pergunta op e diferente de 4

// escreve as opçoes ao usuario

   printf("\ninforme a opcao desejada");
   printf("\n1 - inicializar");
   printf("\n2 - emfileirar");
   printf("\n3 - desemfileirar");
   printf("\n4 - sair\n");

//pega um dado da entrada

   scanf("%d",&op);

// aqui podemos usar um swich case em vez de ifs


// define intervalo que deve ser respeitado

   if ((op < 1) || (op > 4)){
     printf("\nOpcao invalida redigite\n");
   }else{
     if (op == 1){
       //utiliza a funcao init declarada anteriormente
       init(&fl);     // passando um endereço de uma variavel
       printf("\n voce chamou a funcao inicializar\n");
       system("pause");
     }else{
       if (op == 2){
          printf("\ninforme um valor a ser inserido na fila\n");
          scanf("%d",&vl);
          push(&fl,vl);
          printf("\n voce chamou a funcao emfileirar\n");
          system("pause");
       }else{
          if (op == 3){
             printf("\no valor desemfilar e: %d ",pop(&fl));
             printf("\n voce chamou a funcao desefileirar\n");
             system("pause");
          }
       }
     }
   }


 }


 system("pause");
 return(0);
}

