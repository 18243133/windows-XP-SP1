typedef unsigned char far      *ULPSTR;

#define PARSE_DIRECTORYNAME    -1
#define PARSE_INVALIDDRIVE     -2
#define PARSE_INVALIDPERIOD    -3
#define PARSE_MISSINGDIRCHAR   -4
#define PARSE_INVALIDCHAR      -5
#define PARSE_INVALIDDIRCHAR   -6
#define PARSE_INVALIDSPACE     -7
#define PARSE_EXTENTIONTOOLONG -8
#define PARSE_FILETOOLONG      -9
#define PARSE_EMPTYSTRING     -10
#define PARSE_WILDCARDINDIR   -11
#define PARSE_WILDCARDINFILE  -12
#define PARSE_INVALIDNETPATH  -13

#if DBCS
#define MAX_DIRNAME 128
#else
#define MAX_DIRNAME 64
#endif
