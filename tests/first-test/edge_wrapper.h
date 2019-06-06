#ifndef _EDGE_WRAPPER_H_
#define _EDGE_WRAPPER_H_

void edge_init();

void ocall_print_value(unsigned long val);
void ocall_print_str(char* str, int length);

//Store file systemcall
void ocall_store_file(void* buffer, int length);

#endif /* _EDGE_WRAPPER_H_ */