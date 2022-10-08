grammar Expr;

content 		: 	nl*? ;

dics	: nl*(files | dic |ldic | pdic)*  ;

//


//
files 	: 	file+		; 
file 	:	v nl*		;

//
dic		:	(kv)+	;
kv		:	k '=' vs nl*	;
k 		: 	PV ;
vs		: 	vs '+' v
		|	v
		;
v 		: 	PV;

//
ldic	: 	(lkv)+ 	;
lkv		: 	pk '@' pvs nl*	;

//
pdic	: 	(pkv)+ 	;
pkv		: 	pk ':' pvs nl*	;
pvs 	:  	pvs '+' pv		
		|	pv
		;
pk 		: 	PV 
		|	PV PKD
		;
PKD		: 	'.';
pv 		: 	PV PVD
		|	PV	
		;
PVD		:	'*' | '>' | '<';							
PV	: 	[a-zA-Z0-9\u4e00-\u9fa5_ ]+('.'[a-zA-Z0-9]+)? 	;



nl 	: 	NL+ 	;
NL 	: 	[\n\r]	;
BlockComment: 	'/*' .*? '*/' -> skip;
LineComment	: 	'//' ~ [\r\n]* -> skip;
// STR0		: 	'EOF'* ->skip ;

///L 	Linear
///P 	Parallel
///k 	KEY
///V  	Value
///D 	Desrciption
///NL 	NewLine
///B 	Button