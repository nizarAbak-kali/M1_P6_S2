/* 
 * File:   main.cpp
 * Author: nizar
 *
 * Created on 5 février 2015, 17:12
 */

#define NB_REGISTRE 8 
#define POSITION_PROGRAMME 0 

#include <cstdio>
#include <cstdlib>
#include <assert.h>
#include <string>
#include <iostream>

// il s'agit d"un 

Uint32  bits = 0 ;
Uint32 registre[8] = NULL ; // 8
Uint32** collection = NULL ;

char console ;



using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int i ;

    char prog_name[30] = "codex.umx";
    // ouverture en lecture binaire 
    FILE* prog = fopen(prog_name,"rb");
    
    
    // on positionne le curseur que la fin du fichier 
    fseek(prog,0,SEEK_END);
    // on recupere la position donc la taille 
    long int file_size = ftell(prog);
    cout<<"la taille du programme" <<prog_name<<"est de :"<<file_size<<endl ;
    
    // on remet le curseur de lecteur au debut du flux
    rewind(prog);
    
    // allocation de mémoire pour les tableau    
//    if(!registre)
//       registre = (Uint32*)malloc(NB_REGISTRE*sizeof*registre);
//    
    if(!collection){
       collection = (Uint32**) malloc(file_size*sizeof*collection);//size of la taille du fichier 
       for(i = 0 ;i < file_size;i++){
            collection[i] = (Uint32*)malloc(sizeof*collection) ;
       }
    }
    
    
    
    return 0;
}

