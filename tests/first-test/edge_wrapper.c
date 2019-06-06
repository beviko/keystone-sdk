#include "edge_wrapper.h"
#include "syscall.h"
#include <edge_call.h>

void edge_init(){
    //Does actually nothing
}

void ocall_print_value(unsigned long val){

  unsigned long val_ = val;
  ocall(2, &val_, sizeof(unsigned long), 0, 0);

  return;
}

void ocall_print_str(char* str, int length){
  ocall(1, (void*)str, length, 0, 0);
  return;
}

void ocall_store_file(void* buffer, int length){
  ocall(9, buffer, length, 0, 0);
  return;
}