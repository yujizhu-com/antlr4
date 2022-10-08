#!bin/bash

antlr Expr.g4    
javac *.java        
grun Expr $1 -gui Expr.txt

