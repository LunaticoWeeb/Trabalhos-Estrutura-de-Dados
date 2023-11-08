#include "Menu.h"

#include <stdio.h>
#include <stdlib.h>

char *LerPalavra(){
      char *item = NULL;
      char c;
      int i = 0;

      while((c = getchar()) == '\n');

      do{
            c = getchar();
            item = (char *)realloc(item, sizeof(char) * (i + 1));
            item[i++] = c;

      } while (c != '\n');

      item[i - 1] = '\0';
      return item;
}

char RecievesOperation(void){

      printf("\nDigite o número da operação desejada:" 
      "\n1 - Inserir um novo Item"
      "\n2 - Remover um Item"
      "\n3 - Consultar existência de um Item"
      "\n4 - Imprimir todos os Itens\n"
      );

      char operation;
      scanf(" %c", &operation);
      return operation;
}

void EvokeOperation(char operation, Lista *list){

      int e;
      char *name;
      int position;

      switch (operation)
      {
      case '1':
            printf("\nDigite o nome do Item: ");
            name = LerPalavra();

            printf("\nA posição do Item: ");
            scanf("%d", &position);

            insertItem(list, position, name, &e);
            free(name);
            break;
      case '2':
            printf("\nDigite a posição do Item: ");
            scanf("%d", &position);

            removeItem(list, position, &e);
            break;
      case '3':
            printf("\nDigite o nome do Item: ");
            name = LerPalavra();

            existsItem(list, name, &e);
            free(name);
            break;
      case '4':
            printLista(list);
            break;
      default:
            printf("\nOperação inválida!");
            break;
      }
}