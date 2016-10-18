#ifndef GCL_C_COLOR_H__
# define GCL_C_COLOR_H__

# ifndef __GNUC__
#  error "GCC required"
# endif

# define C_NRM  "\x1B[0m"
# define C_RED  "\x1B[31m"
# define C_GRN  "\x1B[32m"
# define C_YEL  "\x1B[33m"
# define C_BLU  "\x1B[34m"
# define C_MAG  "\x1B[35m"
# define C_CYN  "\x1B[36m"
# define C_WHT  "\x1B[37m"

# define STR_COLOR(color, str) color str C_NRM

# define ERR_TOKEN(sym)		_TOKEN(STR_COLOR(C_RED, "ERROR"), STR_COLOR(C_YEL, sym))
# define LOG_TOKEN(sym)		_TOKEN(STR_COLOR(C_GRN, "+"), STR_COLOR(C_YEL, sym))

#endif /* GCL_C_COLOR_H__ */
