#ifndef LITTLE_C_COMPILER_H
#define LITTLE_C_COMPILER_H

#include <stdio.h>

enum{
 COMPILER_FILE_COMPILED_OK,
 COMPILER_FAILED_WITH_ERROS
};

struct compile_process{
  int flags;

  struct compile_process_input_file{
    FILE* fp;
  } cfile;

  FILE* ofile;
};

int compile_file(const char* filename, const char* out_filename, int flags );
compile_process* compile_process_create(const char* filename, const char* filename_out, int flags );
#endif // !DEBUG
