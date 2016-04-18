#include <stdio.h>
#include "square.h"

int main () {
  char *msg;
  int length;
  
  for (int i = 0 ; i < get_number_of_messages(); i++) {
    msg = read_message(i);
    length = get_message_length(i);
    
    for (int i = 0; i < length; i++) {
      printf("%c", msg[i]);
    }
    
    printf("\n");
  }
  
  return 0;
}

