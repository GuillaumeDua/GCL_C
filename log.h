#ifndef GCL_C_LOG_H
# define GCL_C_LOG_H

# ifdef DEBUG
#  pragma message "\n"							\
  "[" STR_COLOR(C_GRN, "INFO") "] : "					\
  "Compiling " STR_COLOR(C_BLU, __FILE__)				\
  "\n  |- " STR_COLOR(C_YEL, "Date") "          : " __DATE__		\
  "\n  |- " STR_COLOR(C_YEL, "Time") "          : " __TIME__		\
  "\n  |- " STR_COLOR(C_YEL, "Last modified") " : " __TIMESTAMP__
#endif

# include <GCL_C/color.h>

# ifdef DEBUG
#  define DEBUG_INSTRUCTION(instruction) instruction
#  define _TOKEN(tag, sym) "[" tag "]::[" STR_COLOR(C_BLU, __FILE__) ":" sym "] : "
#  define debug_fprintf(fd, msg, ...)					\
  fprintf(								\
  fd,									\
  "[" STR_COLOR(C_GRN, "+") "]::"					\
  "[" STR_COLOR(C_BLU,__FILE__)":" STR_COLOR(C_GRN, "%d")		\
  "]::"									\
  "[" STR_COLOR(C_YEL, "%s") "] : "					\
  msg "\n",								\
  __LINE__, __func__, __VA_ARGS__)

# else
#  define DEBUG_INSTRUCTION(instruction)
#  define debug_fprintf(fd, msg, ...)
#  define _TOKEN(tag, sym) "[" tag "]::[" __FUNCTION__ "] : "
# endif

#endif // GCL_C_LOG_H
