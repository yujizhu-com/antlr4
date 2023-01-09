// Generated from java-escape by ANTLR 4.11.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast", "CheckReturnValue"})
public class ExprLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.11.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		R=1, V=2, P=3, NP=4, N=5, NS=6, A=7, Member=8, C=9, M=10, NL=11, SPACE=12, 
		D=13, T=14, Q=15;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"R", "V", "P", "NP", "N", "NS", "A", "Member", "C", "M", "NL", "SPACE", 
			"D", "T", "Q"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, "R", "V", "P", "NP", "N", "NS", "A", "Member", "C", "M", "NL", 
			"SPACE", "D", "T", "Q"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public ExprLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "Expr.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\u0004\u0000\u000f\u0095\u0006\uffff\uffff\u0002\u0000\u0007\u0000\u0002"+
		"\u0001\u0007\u0001\u0002\u0002\u0007\u0002\u0002\u0003\u0007\u0003\u0002"+
		"\u0004\u0007\u0004\u0002\u0005\u0007\u0005\u0002\u0006\u0007\u0006\u0002"+
		"\u0007\u0007\u0007\u0002\b\u0007\b\u0002\t\u0007\t\u0002\n\u0007\n\u0002"+
		"\u000b\u0007\u000b\u0002\f\u0007\f\u0002\r\u0007\r\u0002\u000e\u0007\u000e"+
		"\u0001\u0000\u0004\u0000!\b\u0000\u000b\u0000\f\u0000\"\u0001\u0000\u0001"+
		"\u0000\u0001\u0000\u0001\u0001\u0004\u0001)\b\u0001\u000b\u0001\f\u0001"+
		"*\u0001\u0001\u0001\u0001\u0001\u0001\u0001\u0002\u0004\u00021\b\u0002"+
		"\u000b\u0002\f\u00022\u0001\u0002\u0001\u0002\u0001\u0002\u0001\u0003"+
		"\u0004\u00039\b\u0003\u000b\u0003\f\u0003:\u0001\u0003\u0001\u0003\u0001"+
		"\u0003\u0001\u0003\u0001\u0004\u0004\u0004B\b\u0004\u000b\u0004\f\u0004"+
		"C\u0001\u0004\u0001\u0004\u0001\u0004\u0001\u0005\u0004\u0005J\b\u0005"+
		"\u000b\u0005\f\u0005K\u0001\u0005\u0001\u0005\u0001\u0005\u0001\u0005"+
		"\u0001\u0006\u0004\u0006S\b\u0006\u000b\u0006\f\u0006T\u0001\u0006\u0001"+
		"\u0006\u0001\u0006\u0001\u0007\u0004\u0007[\b\u0007\u000b\u0007\f\u0007"+
		"\\\u0001\u0007\u0001\u0007\u0001\u0007\u0001\b\u0004\bc\b\b\u000b\b\f"+
		"\bd\u0001\b\u0001\b\u0001\b\u0001\t\u0004\tk\b\t\u000b\t\f\tl\u0001\t"+
		"\u0001\t\u0001\t\u0001\n\u0001\n\u0001\u000b\u0001\u000b\u0001\u000b\u0001"+
		"\u000b\u0001\f\u0004\fy\b\f\u000b\f\f\fz\u0001\f\u0001\f\u0001\f\u0001"+
		"\f\u0001\f\u0001\r\u0004\r\u0083\b\r\u000b\r\f\r\u0084\u0001\r\u0001\r"+
		"\u0001\r\u0001\r\u0001\r\u0001\u000e\u0004\u000e\u008d\b\u000e\u000b\u000e"+
		"\f\u000e\u008e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e\u0001\u000e"+
		"\u0000\u0000\u000f\u0001\u0001\u0003\u0002\u0005\u0003\u0007\u0004\t\u0005"+
		"\u000b\u0006\r\u0007\u000f\b\u0011\t\u0013\n\u0015\u000b\u0017\f\u0019"+
		"\r\u001b\u000e\u001d\u000f\u0001\u0000\u0004\u0001\u0000\u4e00\u8000\u9fa5"+
		"\u0001\u000009\u0002\u0000\n\n\r\r\u0002\u0000\t\t  \u00a1\u0000\u0001"+
		"\u0001\u0000\u0000\u0000\u0000\u0003\u0001\u0000\u0000\u0000\u0000\u0005"+
		"\u0001\u0000\u0000\u0000\u0000\u0007\u0001\u0000\u0000\u0000\u0000\t\u0001"+
		"\u0000\u0000\u0000\u0000\u000b\u0001\u0000\u0000\u0000\u0000\r\u0001\u0000"+
		"\u0000\u0000\u0000\u000f\u0001\u0000\u0000\u0000\u0000\u0011\u0001\u0000"+
		"\u0000\u0000\u0000\u0013\u0001\u0000\u0000\u0000\u0000\u0015\u0001\u0000"+
		"\u0000\u0000\u0000\u0017\u0001\u0000\u0000\u0000\u0000\u0019\u0001\u0000"+
		"\u0000\u0000\u0000\u001b\u0001\u0000\u0000\u0000\u0000\u001d\u0001\u0000"+
		"\u0000\u0000\u0001 \u0001\u0000\u0000\u0000\u0003(\u0001\u0000\u0000\u0000"+
		"\u00050\u0001\u0000\u0000\u0000\u00078\u0001\u0000\u0000\u0000\tA\u0001"+
		"\u0000\u0000\u0000\u000bI\u0001\u0000\u0000\u0000\rR\u0001\u0000\u0000"+
		"\u0000\u000fZ\u0001\u0000\u0000\u0000\u0011b\u0001\u0000\u0000\u0000\u0013"+
		"j\u0001\u0000\u0000\u0000\u0015q\u0001\u0000\u0000\u0000\u0017s\u0001"+
		"\u0000\u0000\u0000\u0019x\u0001\u0000\u0000\u0000\u001b\u0082\u0001\u0000"+
		"\u0000\u0000\u001d\u008c\u0001\u0000\u0000\u0000\u001f!\u0007\u0000\u0000"+
		"\u0000 \u001f\u0001\u0000\u0000\u0000!\"\u0001\u0000\u0000\u0000\" \u0001"+
		"\u0000\u0000\u0000\"#\u0001\u0000\u0000\u0000#$\u0001\u0000\u0000\u0000"+
		"$%\u0005|\u0000\u0000%&\u0005r\u0000\u0000&\u0002\u0001\u0000\u0000\u0000"+
		"\')\u0007\u0000\u0000\u0000(\'\u0001\u0000\u0000\u0000)*\u0001\u0000\u0000"+
		"\u0000*(\u0001\u0000\u0000\u0000*+\u0001\u0000\u0000\u0000+,\u0001\u0000"+
		"\u0000\u0000,-\u0005|\u0000\u0000-.\u0005v\u0000\u0000.\u0004\u0001\u0000"+
		"\u0000\u0000/1\u0007\u0000\u0000\u00000/\u0001\u0000\u0000\u000012\u0001"+
		"\u0000\u0000\u000020\u0001\u0000\u0000\u000023\u0001\u0000\u0000\u0000"+
		"34\u0001\u0000\u0000\u000045\u0005|\u0000\u000056\u0005p\u0000\u00006"+
		"\u0006\u0001\u0000\u0000\u000079\u0007\u0000\u0000\u000087\u0001\u0000"+
		"\u0000\u00009:\u0001\u0000\u0000\u0000:8\u0001\u0000\u0000\u0000:;\u0001"+
		"\u0000\u0000\u0000;<\u0001\u0000\u0000\u0000<=\u0005|\u0000\u0000=>\u0005"+
		"n\u0000\u0000>?\u0005p\u0000\u0000?\b\u0001\u0000\u0000\u0000@B\u0007"+
		"\u0000\u0000\u0000A@\u0001\u0000\u0000\u0000BC\u0001\u0000\u0000\u0000"+
		"CA\u0001\u0000\u0000\u0000CD\u0001\u0000\u0000\u0000DE\u0001\u0000\u0000"+
		"\u0000EF\u0005|\u0000\u0000FG\u0005n\u0000\u0000G\n\u0001\u0000\u0000"+
		"\u0000HJ\u0007\u0000\u0000\u0000IH\u0001\u0000\u0000\u0000JK\u0001\u0000"+
		"\u0000\u0000KI\u0001\u0000\u0000\u0000KL\u0001\u0000\u0000\u0000LM\u0001"+
		"\u0000\u0000\u0000MN\u0005|\u0000\u0000NO\u0005n\u0000\u0000OP\u0005s"+
		"\u0000\u0000P\f\u0001\u0000\u0000\u0000QS\u0007\u0000\u0000\u0000RQ\u0001"+
		"\u0000\u0000\u0000ST\u0001\u0000\u0000\u0000TR\u0001\u0000\u0000\u0000"+
		"TU\u0001\u0000\u0000\u0000UV\u0001\u0000\u0000\u0000VW\u0005|\u0000\u0000"+
		"WX\u0005a\u0000\u0000X\u000e\u0001\u0000\u0000\u0000Y[\u0007\u0000\u0000"+
		"\u0000ZY\u0001\u0000\u0000\u0000[\\\u0001\u0000\u0000\u0000\\Z\u0001\u0000"+
		"\u0000\u0000\\]\u0001\u0000\u0000\u0000]^\u0001\u0000\u0000\u0000^_\u0005"+
		"|\u0000\u0000_`\u0005u\u0000\u0000`\u0010\u0001\u0000\u0000\u0000ac\u0007"+
		"\u0000\u0000\u0000ba\u0001\u0000\u0000\u0000cd\u0001\u0000\u0000\u0000"+
		"db\u0001\u0000\u0000\u0000de\u0001\u0000\u0000\u0000ef\u0001\u0000\u0000"+
		"\u0000fg\u0005|\u0000\u0000gh\u0005c\u0000\u0000h\u0012\u0001\u0000\u0000"+
		"\u0000ik\u0007\u0001\u0000\u0000ji\u0001\u0000\u0000\u0000kl\u0001\u0000"+
		"\u0000\u0000lj\u0001\u0000\u0000\u0000lm\u0001\u0000\u0000\u0000mn\u0001"+
		"\u0000\u0000\u0000no\u0005|\u0000\u0000op\u0005m\u0000\u0000p\u0014\u0001"+
		"\u0000\u0000\u0000qr\u0007\u0002\u0000\u0000r\u0016\u0001\u0000\u0000"+
		"\u0000st\u0007\u0003\u0000\u0000tu\u0001\u0000\u0000\u0000uv\u0006\u000b"+
		"\u0000\u0000v\u0018\u0001\u0000\u0000\u0000wy\u0007\u0000\u0000\u0000"+
		"xw\u0001\u0000\u0000\u0000yz\u0001\u0000\u0000\u0000zx\u0001\u0000\u0000"+
		"\u0000z{\u0001\u0000\u0000\u0000{|\u0001\u0000\u0000\u0000|}\u0005|\u0000"+
		"\u0000}~\u0005d\u0000\u0000~\u007f\u0001\u0000\u0000\u0000\u007f\u0080"+
		"\u0006\f\u0000\u0000\u0080\u001a\u0001\u0000\u0000\u0000\u0081\u0083\u0007"+
		"\u0000\u0000\u0000\u0082\u0081\u0001\u0000\u0000\u0000\u0083\u0084\u0001"+
		"\u0000\u0000\u0000\u0084\u0082\u0001\u0000\u0000\u0000\u0084\u0085\u0001"+
		"\u0000\u0000\u0000\u0085\u0086\u0001\u0000\u0000\u0000\u0086\u0087\u0005"+
		"|\u0000\u0000\u0087\u0088\u0005t\u0000\u0000\u0088\u0089\u0001\u0000\u0000"+
		"\u0000\u0089\u008a\u0006\r\u0000\u0000\u008a\u001c\u0001\u0000\u0000\u0000"+
		"\u008b\u008d\u0007\u0000\u0000\u0000\u008c\u008b\u0001\u0000\u0000\u0000"+
		"\u008d\u008e\u0001\u0000\u0000\u0000\u008e\u008c\u0001\u0000\u0000\u0000"+
		"\u008e\u008f\u0001\u0000\u0000\u0000\u008f\u0090\u0001\u0000\u0000\u0000"+
		"\u0090\u0091\u0005|\u0000\u0000\u0091\u0092\u0005q\u0000\u0000\u0092\u0093"+
		"\u0001\u0000\u0000\u0000\u0093\u0094\u0006\u000e\u0000\u0000\u0094\u001e"+
		"\u0001\u0000\u0000\u0000\u000e\u0000\"*2:CKT\\dlz\u0084\u008e\u0001\u0006"+
		"\u0000\u0000";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}