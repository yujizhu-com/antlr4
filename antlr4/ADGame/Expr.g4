grammar Expr;

content 		: 	nl*? ;

dics	: nl*(bdic | files | dic | pdic)*  ;

//
bdic	: bks bs bvs be nl* ;
bks		: bk '+' bk 
		| bk 	;
bk 		: PV;
bs      : BS;
be      : BE;
bvs		: ( pdic )* ;

files 	: 	file+		; 
file 	:	fv nl*		;
fv 	    :   v ;

//
dic		:	(kv)+	;
kv		:	nl* k '=' vs nl*	;
k 		: 	PV ;
vs		: 	vs '+' v
		|	v
		;
v 		: 	PV;

pdic	: 	(pkv)+ 	;
pkv		: 	nl* pk po pvs nl*	;
pvs 	:  	pvs '+' pv		
		|	pv
		;
pk 		: 	PV PKD  
		|   PV;
po		:   O ;
pv 		: 	PV PVD
		|	PV	
		;
PKD		: 	'.';

O       :   '@'	| ':' | '%';
BS		:   '/@' | '/:' ;
BE      :   '/' ;
PVD		:	'*' | '>' | '<';							
PV		: 	[a-zA-Z0-9\u4e00-\u9fa5_ ]+('.'[a-zA-Z0-9]+)? 	;



nl 	: 	NL+ 	;
NL 	: 	[\t\n\r]	;
BlockComment: 	'/*' .*? '*/' -> skip;
LineComment	: 	'//' ~ [\r\n]* -> skip;
STR0		: 	'EOF' -> skip ;

///O	Order
///L 	Linear
///P 	Parallel
///k 	KEY
///V  	Value
///D 	Desrciption
///NL 	NewLine
///B 	Button
///S    Start
///E    End