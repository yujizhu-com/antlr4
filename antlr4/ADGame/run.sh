#!bin/bash

antlr Expr.g4    
javac *.java        
grun Expr $1 -gui Expr.txt
antlr -Dlanguage=Cpp -visitor -listener  -o /Users/yujizhu/Documents/Git/Github/antlr4/antlr4/gammar Expr.g4

