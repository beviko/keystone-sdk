#include "eapp_utils.h"
#include "edge_wrapper.h"
#include "first-test.h"
#include <string.h>
#include "syscall_nums.h"

void EAPP_ENTRY eapp_entry(){
  char message[] = "Das ist die Fakultät von 8:\n";
  ocall_print_str(message, strlen(message));
  ocall_print_value(fac(8));

  ocall_store_file((void*) message, strlen(message));

  EAPP_RETURN(0);
}

unsigned long fac(int n){
  if(n <= 1){
    return 1;
  }
  return n * fac(n - 1);
}