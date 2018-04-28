/**                                                                                    
Enunciado: Write a program that calls fork(). Before calling fork(), have              
the main process access a variable (e.g., x) and set its value to something            
(e.g., 100). What value is the variable in the child process? What happens             
to the variable when both the child and parent cha nge the value of x?                 
                                                                                       
Author:                                                                                
Date:                                                                                  
*/                                                                                     
                                                                                       
#include <stdio.h>
#include <unistd>	 // Incluir archivos de cabecera que definen los prototipos de las                      
			// funciones: 'printf', 'sleep' y 'fork'                                               
                                                                                       
int main(char *argc, char** argv) {                                                    
  int x;                                                                               
  pid_t pid;                                                                           
  x=100;                                                                              
  if(!pid=fork()){
	printf("i'am the soon, i see: %d\n", pid);
  }else{
	
	printf("i'm the father and i see: %d\n", pid);
  } //                                                                                   
  // SU CODIGO                                                                         
  //                                                                                   
                                                                                       
  return 0;                                                                            
}                      
