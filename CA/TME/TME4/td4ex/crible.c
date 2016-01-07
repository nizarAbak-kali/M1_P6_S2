#include <stdio.h>
#include <stdlib.h>

struct cons {
	int car; 
	struct cons *cdr;
	};
typedef struct cons *liste_entier;

#include "crible_gen.c"
// question 1
liste_entier conso(int val,liste_entier l){
		
		if(!l){
				
			l = malloc(sizeof(*l));
			l->car = val ;
			l->cdr = NULL;
		
			}
		else {
		liste_entier cel = malloc(sizeof(*cel));
		cel->car = val ;
		cel->cdr = NULL;
		
		while(l->cdr) l = l->cdr ;
		l->cdr = cel ;
	}
}
//question 2
void intervalle(int a , int b , liste_entier l){
		int tmp ;
		// on s'assure que a < b 
		if (a>b){
			tmp = a ;
			a = b ;
			b = tmp;
		}
		
		if(!l){
			//première cellule 
			l = malloc(sizeof(*l));
			l->car = a ;
			l->cdr = NULL;
			// on sauve le debut 
			liste_entier debut = l ;
			for(tmp = a+1 ; tmp <= b ; tmp ++){
				// on creer une celluel
				liste_entier cel = malloc(sizeof(*cel));
				cel->car = tmp ;
				cel->cdr = NULL;
				//on l'attache
				l->cdr = cel ;
				//on avance a la nouvelle case suivante 
				l = l->cdr ;
				}
			l = debut;
			}
		else{
			// on sauve le debut 
			liste_entier debut = l ;
			
			// on parcours la liste jusqu'au bout 
			while(l->cdr) l = l->cdr ;
			
			// creation des (b-(a+1)) cellule en plus
			for(tmp = a+1 ; tmp <= b ; tmp ++){
				// on creer une celluel
				liste_entier cel = malloc(sizeof(*cel));
				cel->car = tmp ;
				cel->cdr = NULL;
				//on l'attache
				l->cdr = cel ;
				//on avance a la nouvelle case suivante 
				l = l->cdr ;
				}
			l = debut;
			}
						
				
	}


int main(int argc, char *argv[])
{liste_entier l;
 int x;
 if (argc == 1) 
  {fprintf(stderr,"pas d'arguments\n"); exit (1);}
 else
 { 
	 //~ 
	//~ x = atoi(argv[1]); 
   //~ l = eratosthene (x);
   //~ print_liste(l);
	int a , b ; 
	a = 5; b = 10 ;
	intervalle()
	
 }
 return 0;
}

