grammar Expr;

content 		: 	nl*? ;

dics	: nl*(bdic | files | dic |ldic | pdic)*  ;

//
bdic	: bk '/@' bvs '/' nl* ;
bk 		: bk '+' PV 
		| PV 	;
bvs		: (ldic | pdic | tkv)* ;

//
tkv		:   nl* tk '%' tvs nl* ;
tk		: 	PV 	;
tvs 	:  	tvs '+' tv		
		|	tv
		;
tv 		: 	PV ;
//
files 	: 	file+		; 
file 	:	v nl*		;

//
dic		:	(kv)+	;
kv		:	nl* k '=' vs nl*	;
k 		: 	PV ;
vs		: 	vs '+' v
		|	v
		;
v 		: 	PV;

//
ldic	: 	(lkv)+ 	;
lkv		: 	nl* pk '@' pvs nl*	;

//
pdic	: 	(pkv)+ 	;
pkv		: 	nl* pk ':' pvs nl*	;
pvs 	:  	pvs '+' pv		
		|	pv
		;
pk 		: 	PV PKD  
		|   PV;
PKD		: 	'.';
pv 		: 	PV PVD
		|	PV	
		;
PVD		:	'*' | '>' | '<';							
PV		: 	[a-zA-Z0-9\u4e00-\u9fa5_ ]+('.'[a-zA-Z0-9]+)? 	;
// PK      : 	[a-zA-Z0-9_]+ 	;



nl 	: 	NL+ 	;
NL 	: 	[\t\n\r]	;
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