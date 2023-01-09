#!bin/bash
from="/Users/yujizhu/Documents/Git/Github/antlr4/antlr4/ADGame/";
to="/Users/yujizhu/Documents/Git/Github/antlr4/antlr4/gammar/";
cp $from"Expr.g4"  $to"Expr.g4"
cp $from"Expr.txt" $to"Expr.txt" 
antlr -Dlanguage=Cpp -visitor -listener  -o /Users/yujizhu/Documents/Git/Puzzle/WoodJigsaw3-1010/src/projectCode/wood21010Jigsaw_2/adGame/Compiler Expr.g4
antlr Expr.g4    
javac *.java        
grun Expr $1 -gui Expr.txt

