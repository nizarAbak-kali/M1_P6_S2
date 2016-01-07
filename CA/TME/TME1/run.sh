#!/bin/bash

echo "on creer les tokens du parseur"
yacc *.yacc
echo "on compile les lexeurs"
flex *.l
echo "on creer le parseur"
yacc *.yacc
