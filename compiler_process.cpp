#include <stdio.h>
#include <iostream>
#include "compiler.h" 

using namespace std;

compile_process* compile_process_create(const char* filename, const char* filename_out, int flags ) {
  FILE* file = fopen(filename, "r");
  if (!file) {
   return nullptr; 
  }
 
  FILE* out_file = nullptr;
  if(filename_out){
    out_file = fopen(filename_out, "w");
    if(!out_file)
      return nullptr;
  }

  compile_process* process = new compile_process;
  process->flags = flags;
  process->cfile.fp = file;
  process->ofile = out_file;

  return process;
}
