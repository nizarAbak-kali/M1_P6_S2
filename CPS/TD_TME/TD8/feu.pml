/*
 * 
 *bite*/
mtype = {VERT,ROUGE,ORANGE,IND};

active proctype feu(){
	bool clignotant = false;
	mtype couleur = IND ;


	initial :
		couleur = ORANGE;
		clignotant = true;
		if 
		:: true -> clignotant = false ; goto gored;
		::true -> goto initial;
		fi ;
	
	gored :
		couleur = ROUGE;
		if 
		:: true -> goto gogreen ;
		:: true -> goto gored ;
		:: true -> goto fault ;
		fi ;
	
	gogreen :
		couleur = VERT ;
		if 
		:: true -> goto gorange ;
		:: true -> goto gogreen ;
		:: true -> goto fault ;
		fi ; 
	
	gorange :
		couleur = ORANGE ;
		if 
		:: true -> goto gored ;
		:: true -> goto gorange;		
		:: true -> goto fault ;
		fi ;
	
	fault :
		clignotant = true;
	
	faultloop:
		couleur = ORANGE;
		if 
		:: true -> goto faultloop ;
		fi;
		
}

