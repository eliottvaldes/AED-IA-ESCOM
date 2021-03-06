/**
 * @file equilibrio_de_ecuaciones_lista.h
 * @author Valdés Luis Eliot Fabián
 * @brief archivo de libreria para usar en equilibrio de ecuaciones usando listas
 * @version 0.1
 * @date 2022-04-25
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>

using namespace std;

struct Nodo
{
    char caracter;
    Nodo *sig;
};
void push_Nodo(Nodo *nuevo, char caracter)
{
    nuevo->caracter = caracter;
    nuevo->sig = NULL;
}

void lista_push(Nodo **lista, char caracter)
{
    Nodo *nuevo = new Nodo;

    push_Nodo(nuevo, caracter);

    if (*lista == NULL)
    {
        *lista = nuevo;
    }
    else
    {
        nuevo->sig = *lista;
        *lista = nuevo;
    }
}

void lista_pop(Nodo **lista)
{
    Nodo *aux = *lista;
    *lista = (*lista)->sig;
    delete aux;
}

char lista_top(Nodo *lista)
{

    if (lista == NULL)
    {
        return (0);
    }

    return lista->caracter;
}

bool lista_empty(Nodo *lista)
{

    int tam = 1;
    Nodo *itera = lista;

    while (itera != NULL)
    {
        itera = itera->sig;
        tam++;
    }

    if (tam < 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int lista_size(Nodo *lista)
{
    int tam = 1;

    Nodo *itera = lista;

    while (itera != NULL)
    {
        itera = itera->sig;
        tam++;
    }

    return tam;
}