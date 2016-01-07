#define rand	pan_rand
#define pthread_equal(a,b)	((a)==(b))
#if defined(HAS_CODE) && defined(VERBOSE)
	#ifdef BFS_PAR
		bfs_printf("Pr: %d Tr: %d\n", II, t->forw);
	#else
		cpu_printf("Pr: %d Tr: %d\n", II, t->forw);
	#endif
#endif
	switch (t->forw) {
	default: Uerror("bad forward move");
	case 0:	/* if without executable clauses */
		continue;
	case 1: /* generic 'goto' or 'skip' */
		IfNotBlocked
		_m = 3; goto P999;
	case 2: /* generic 'else' */
		IfNotBlocked
		if (trpt->o_pm&1) continue;
		_m = 3; goto P999;

		 /* PROC feu */
	case 3: // STATE 1 - feu.pml:12 - [couleur = ORANGE] (0:0:2 - 1)
		IfNotBlocked
		reached[0][1] = 1;
		(trpt+1)->bup.ovals = grab_ints(2);
		(trpt+1)->bup.ovals[0] = ((P0 *)this)->couleur;
		((P0 *)this)->couleur = 2;
#ifdef VAR_RANGES
		logval("feu:couleur", ((P0 *)this)->couleur);
#endif
		;
		if (TstOnly) return 1; /* TT */
		/* dead 2: couleur */  
#ifdef HAS_CODE
		if (!readtrail)
#endif
			((P0 *)this)->couleur = 0;
		_m = 3; goto P999; /* 0 */
	case 4: // STATE 2 - feu.pml:13 - [clignotant = 1] (0:0:2 - 1)
		IfNotBlocked
		reached[0][2] = 1;
		(trpt+1)->bup.ovals = grab_ints(2);
		(trpt+1)->bup.ovals[0] = ((int)((P0 *)this)->clignotant);
		((P0 *)this)->clignotant = 1;
#ifdef VAR_RANGES
		logval("feu:clignotant", ((int)((P0 *)this)->clignotant));
#endif
		;
		if (TstOnly) return 1; /* TT */
		/* dead 2: clignotant */  
#ifdef HAS_CODE
		if (!readtrail)
#endif
			((P0 *)this)->clignotant = 0;
		_m = 3; goto P999; /* 0 */
	case 5: // STATE 3 - feu.pml:15 - [(1)] (10:0:1 - 1)
		IfNotBlocked
		reached[0][3] = 1;
		if (!(1))
			continue;
		/* merge: clignotant = 0(0, 4, 10) */
		reached[0][4] = 1;
		(trpt+1)->bup.oval = ((int)((P0 *)this)->clignotant);
		((P0 *)this)->clignotant = 0;
#ifdef VAR_RANGES
		logval("feu:clignotant", ((int)((P0 *)this)->clignotant));
#endif
		;
		/* merge: goto gored(0, 5, 10) */
		reached[0][5] = 1;
		;
		_m = 3; goto P999; /* 2 */
	case 6: // STATE 10 - feu.pml:20 - [couleur = ROUGE] (0:0:2 - 7)
		IfNotBlocked
		reached[0][10] = 1;
		(trpt+1)->bup.ovals = grab_ints(2);
		(trpt+1)->bup.ovals[0] = ((P0 *)this)->couleur;
		((P0 *)this)->couleur = 3;
#ifdef VAR_RANGES
		logval("feu:couleur", ((P0 *)this)->couleur);
#endif
		;
		if (TstOnly) return 1; /* TT */
		/* dead 2: couleur */  
#ifdef HAS_CODE
		if (!readtrail)
#endif
			((P0 *)this)->couleur = 0;
		_m = 3; goto P999; /* 0 */
	case 7: // STATE 19 - feu.pml:28 - [couleur = VERT] (0:0:2 - 5)
		IfNotBlocked
		reached[0][19] = 1;
		(trpt+1)->bup.ovals = grab_ints(2);
		(trpt+1)->bup.ovals[0] = ((P0 *)this)->couleur;
		((P0 *)this)->couleur = 4;
#ifdef VAR_RANGES
		logval("feu:couleur", ((P0 *)this)->couleur);
#endif
		;
		if (TstOnly) return 1; /* TT */
		/* dead 2: couleur */  
#ifdef HAS_CODE
		if (!readtrail)
#endif
			((P0 *)this)->couleur = 0;
		_m = 3; goto P999; /* 0 */
	case 8: // STATE 28 - feu.pml:36 - [couleur = ORANGE] (0:0:2 - 5)
		IfNotBlocked
		reached[0][28] = 1;
		(trpt+1)->bup.ovals = grab_ints(2);
		(trpt+1)->bup.ovals[0] = ((P0 *)this)->couleur;
		((P0 *)this)->couleur = 2;
#ifdef VAR_RANGES
		logval("feu:couleur", ((P0 *)this)->couleur);
#endif
		;
		if (TstOnly) return 1; /* TT */
		/* dead 2: couleur */  
#ifdef HAS_CODE
		if (!readtrail)
#endif
			((P0 *)this)->couleur = 0;
		_m = 3; goto P999; /* 0 */
	case 9: // STATE 37 - feu.pml:44 - [clignotant = 1] (0:0:2 - 7)
		IfNotBlocked
		reached[0][37] = 1;
		(trpt+1)->bup.ovals = grab_ints(2);
		(trpt+1)->bup.ovals[0] = ((int)((P0 *)this)->clignotant);
		((P0 *)this)->clignotant = 1;
#ifdef VAR_RANGES
		logval("feu:clignotant", ((int)((P0 *)this)->clignotant));
#endif
		;
		if (TstOnly) return 1; /* TT */
		/* dead 2: clignotant */  
#ifdef HAS_CODE
		if (!readtrail)
#endif
			((P0 *)this)->clignotant = 0;
		_m = 3; goto P999; /* 0 */
	case 10: // STATE 38 - feu.pml:47 - [couleur = ORANGE] (0:0:2 - 3)
		IfNotBlocked
		reached[0][38] = 1;
		(trpt+1)->bup.ovals = grab_ints(2);
		(trpt+1)->bup.ovals[0] = ((P0 *)this)->couleur;
		((P0 *)this)->couleur = 2;
#ifdef VAR_RANGES
		logval("feu:couleur", ((P0 *)this)->couleur);
#endif
		;
		if (TstOnly) return 1; /* TT */
		/* dead 2: couleur */  
#ifdef HAS_CODE
		if (!readtrail)
#endif
			((P0 *)this)->couleur = 0;
		_m = 3; goto P999; /* 0 */
	case 11: // STATE 43 - feu.pml:52 - [-end-] (0:0:0 - 1)
		IfNotBlocked
		reached[0][43] = 1;
		if (!delproc(1, II)) continue;
		_m = 3; goto P999; /* 0 */
	case  _T5:	/* np_ */
		if (!((!(trpt->o_pm&4) && !(trpt->tau&128))))
			continue;
		/* else fall through */
	case  _T2:	/* true */
		_m = 3; goto P999;
#undef rand
	}

