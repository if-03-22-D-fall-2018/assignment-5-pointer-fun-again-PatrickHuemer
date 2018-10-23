/*----------------------------------------------------------
 *				HTBLA-Leonding / 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 5
 * Title:			PonterFunAgain
 * Author:			Patick Huemer
 * ----------------------------------------------------------
 * Description:
 * This assignment lets you practise the usage of structs,
 * arrays and pointers to structs.
 * ----------------------------------------------------------
 */


#include <stdio.h>
#include <string.h>
#include <float.h>

struct PlayStruct{
  int int_value;
  double double_value;
  char a_string[64];
};
void print_struct();
void change_struct();
void print_string();
void change_string();


int main(int argc, char const *argv[]) {
  struct PlayStruct play_struct = {999, 999.666, "test"};
  struct PlayStruct* play_struct_pointer;
  play_struct_pointer = &play_struct;
  print_struct(play_struct, play_struct_pointer);
  change_struct(play_struct, play_struct_pointer);
  print_struct(play_struct, play_struct_pointer);
  /*All values changed because the value at the
  memory address changed  */
  char another_string[16] = "NewString";
  print_string(play_struct.a_string);
  change_string(play_struct.a_string,&another_string);
  print_string(play_struct.a_string);
  print_string(another_string);


  return 0;
}

void print_struct(struct PlayStruct ps, struct PlayStruct* pps){
  printf("Values of struct ps: %d %f %s\n",ps.int_value,ps.double_value,ps.a_string);
  printf("Values of struct pps: %d %f %s\n",pps->int_value,pps->double_value,pps->a_string );

}

void change_struct(struct PlayStruct ps, struct PlayStruct* pps){
  ps.int_value = 666;
  ps.double_value = 666.999;
  pps->int_value = 777;
  pps->double_value = 777.111;
}

void print_string(char string_to_print[64]){
  printf("%s\n",string_to_print);

}
void change_string(char string1[64],char* p_string[16]) {
  string1[2]='0';
  p_string[1]='0';
}
