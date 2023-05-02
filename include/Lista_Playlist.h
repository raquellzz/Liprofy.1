#include <iostream>
#include "Playlist2.h"
#include "Musica2.h"

#ifndef LISTA_PLAYLIST_H
#define LISTA_PLAYLIST_H

class Lista_Playlist
{
public:
    Playlist *cabeca;
    Playlist *cauda;


    // Lista_Playlist(Playlist *cabeca = nullptr, Playlist *cauda = nullptr);

    int encontrar_playlist(std::string nome);

    void adicionar_playlist(Playlist *novo);

    Playlist* encontra_playlist(std::string nome);

    void remover_playlist(std::string nome);

    void listar_playlist();

    void deletar_musica(std::string titulo);

    void Destructor_Lista();

    
};


#endif