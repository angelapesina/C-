//I WORKED WITH EMILIO GONZALEZ IN THIS HOMEWORK, WE USED 
//WEBSITES AND VIDEOS:
//we used Abner repository to help us https://github.com/AbnerIO/C
//https://es.stackoverflow.com/questions/77703/c%C3%B3mo-crear-un-nuevo-nodo-en-c
//https://www.youtube.com/watch?v=6geVWbpe4LY&t=447s
//https://www.youtube.com/watch?v=BBsgYwXGdI8

#include <stdio.h>
#include <string.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include "extrafile.h"

{
    // MEMRORIA 
    size_t tamanioNodo = sizeof(usuario);
    usuario *nodo = (usuario *)malloc(tamanioNodo);
    
   
    strcpy(nodo->username, username);
    nodo->izquierda = nodo->derecha = NULL;
    return nodo;
}
void add(usuario *nodo, char *cadena)
{
    if (strcmp(cadena, nodo->username) > 0)
    {
        if (nodo->derecha == NULL)
        {
            nodo->derecha = nuevoNodo(cadena);
        }
        else
        {
            add(nodo->derecha, cadena);
        }
    }
    else
    {
        if (nodo->izquierda == NULL)
        {
            nodo->izquierda = nuevoNodo(cadena);
        }
        else
        {
            add(nodo->izquierda, cadena);
        }
    }
}

usuario *buscarUsername(usuario *nodo, char *cadena)
{
    if (nodo == NULL)
    {
        return NULL;
    }
    if (strcmp(cadena, nodo->username) == 0)
    {
        return nodo;
    }
    else if (strcmp(cadena, nodo->username) > 0)
    {
        return buscarUsername(nodo->derecha, cadena);
    }
    else
    {
        return buscarUsername(nodo->izquierda, cadena);
    }
}

void or(usuario *nodo) 
{
    if (nodo != NULL)
    {
        or(nodo->izquierda);
        printf("%s,", nodo->username);
        or(nodo->derecha);
    }
}



int main(int argc, char const *argv[])
{
    char user[MAXIMA_LONGITUD_CADENA];
    usuario *raiz = NULL;
    printf("Agregar primer registro para ver las opciones:  \n");
    fflush(stdin);
    scanf("%s", &user[0]);
    raiz = nuevoNodo(user);
    int agre , del , order, op;
    char  s;
    agre = 0;
    del = 0;
    order = 0;
    

    while ((s = getchar()) != EOF)
    {
        
        printf("\n\n**MENU**\n");
        printf("Selecciona la opcion (numero) que desses realizar: \n");
        printf("\t 1. Agregar registro. \n");
        printf("\t 2. Eliminar registro. \n");
        printf("\t 3. Vista de los registros.\n\n");
        fflush(stdin);
        scanf("%d", &op);
        
        
        switch (op) {
        case 1: 
            agre = 1;
            break;
            
        case 2: 
            del = 1;
            break;
            
        case 3: 
            order = 1;
            break;
            
            
         default:
            printf("Error, no esxiste esa opcion\n\n");
            break;
        }
        if (agre != 0 || del != 0 || order != 0)
        {
            if (agre == 1)
            {
                char user[MAXIMA_LONGITUD_CADENA];
                
                printf("Nombre de la persona a registrar:\n");
                fflush(stdin);
                scanf("%s", &user[0]);
                struct nodoCadena *apuntadorUser = buscarUsername(raiz, user);
                if (apuntadorUser != NULL)
                {
                    printf("\nYA EXISTE EN LOS REGISTROS\n", user);
                }
                else
                {
                   
                    add(raiz, user);
                    printf("\n REGISTRO CORRECTO\n", user);
                }
            }
            else if (del == 1)
            {
                char user[MAXIMA_LONGITUD_CADENA];
             
                printf("Escribe el nombre del registrado que desees eliminar:\n");
                fflush(stdin);
                scanf("%s", &user[0]);
                struct nodoCadena *apuntadorUser = buscarUsername(raiz, user);
                if (apuntadorUser != NULL)  {
                    
                        printf("\nELIMINADO CORRECTAMENTE \n", user);
                }
                else
                {
                    printf("\n NO SE HA REGISTRADO \n");
                }
            }
            else if (order == 1)
            {
                or(raiz);
                printf("\n¿DESEAS CONTINUAR?\n");
                printf("\n SI - ENTER\n ");
                getchar();
            }
        }
        agre = 0;
        del = 0;
        order = 0;
    }

}
