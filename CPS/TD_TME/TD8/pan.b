	switch (t->back) {
	default: Uerror("bad return move");
	case  0: goto R999; /* nothing to undo */

		 /* PROC feu */

	case 3: // STATE 1
		;
		((P0 *)this)->couleur = trpt->bup.ovals[0];
		;
		ungrab_ints(trpt->bup.ovals, 2);
		goto R999;

	case 4: // STATE 2
		;
		((P0 *)this)->clignotant = trpt->bup.ovals[0];
		;
		ungrab_ints(trpt->bup.ovals, 2);
		goto R999;

	case 5: // STATE 4
		;
		((P0 *)this)->clignotant = trpt->bup.oval;
		;
		goto R999;

	case 6: // STATE 10
		;
		((P0 *)this)->couleur = trpt->bup.ovals[0];
		;
		ungrab_ints(trpt->bup.ovals, 2);
		goto R999;

	case 7: // STATE 19
		;
		((P0 *)this)->couleur = trpt->bup.ovals[0];
		;
		ungrab_ints(trpt->bup.ovals, 2);
		goto R999;

	case 8: // STATE 28
		;
		((P0 *)this)->couleur = trpt->bup.ovals[0];
		;
		ungrab_ints(trpt->bup.ovals, 2);
		goto R999;

	case 9: // STATE 37
		;
		((P0 *)this)->clignotant = trpt->bup.ovals[0];
		;
		ungrab_ints(trpt->bup.ovals, 2);
		goto R999;

	case 10: // STATE 38
		;
		((P0 *)this)->couleur = trpt->bup.ovals[0];
		;
		ungrab_ints(trpt->bup.ovals, 2);
		goto R999;

	case 11: // STATE 43
		;
		p_restor(II);
		;
		;
		goto R999;
	}

