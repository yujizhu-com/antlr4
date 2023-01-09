///AI 对未知的事物和关系提出疑问,得到解释
///运用解释,去定义同类事物
///运用解释,去推断同类事物
///组合解释,去定义新的关系和事物
grammar Expr;

dics: (nl* line)+;

line : sps 
	| sps predi sps
	;

sps : sub predi sub 
	| sub ;

sub : m_a_obj C m_a_obj
	| m_a_obj
	;

predi 	: V 
		| P
		;

m_a_obj : a_obj Member a_obj 
		| a_obj;

a_obj 	: obj 
		| A obj
		;

///基础元素
obj : NP 
	| R
	| N  
	| NS
	| M
	;

member : Member ;  ///从属关系

R:	[\u4e00-\u9fa5]+'|r' ;
V:	[\u4e00-\u9fa5]+'|v' ;
P:	[\u4e00-\u9fa5]+'|p' ;
NP:	[\u4e00-\u9fa5]+'|np' ;
N:	[\u4e00-\u9fa5]+'|n' ;
NS:	[\u4e00-\u9fa5]+'|ns' ;
A:	[\u4e00-\u9fa5]+'|a' ;
Member:	[\u4e00-\u9fa5]+'|u' ;
C: 	[\u4e00-\u9fa5]+'|c' ;
M:	[0-9]+'|m' ;

nl 	:	NL+ 	;
NL 	:	[\n\r]	;

SPACE: [ \t]-> skip ;
D:  [\u4e00-\u9fa5]+'|d' -> skip ;
T:  [\u4e00-\u9fa5]+'|t' -> skip ;
Q:	[\u4e00-\u9fa5]+'|q' -> skip ;

///NL  新的一行
