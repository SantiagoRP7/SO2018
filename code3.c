/**                                                                                    
Enunciado: "Write another program using fork() . The child process should              
print “hello”; the parent process should print “goodbye”. You should try to            
ensure that the child process always prints first; can you do this without             
calling wait() in the parent?"                                                         
                                                                                       
Author:                                                                                
Date:                                                                                  
*/                                                                                     
                                                                                       
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h> // Incluya los archivos de cabecera necesarios para llevar a cabo la                   
// solucion en C de acuerdo al enunciado                                               
                                                                                       
int main(int argc, char** argv) {                                                      
  pid_t pid;                                                                           
  int status;                                                                          
                                                                                       
 pid = fork(); // invoque la llamada al sistema fork()                                              
  if (pid != 0) {
	wait();                                                                      
   printf("goodbye");  // esta es la parte del padre que debe imprimir 'goodbye'                          
  } else {                                                                             
   printf("hello"); // esta es la parte del hijo que debe imprimir 'hello'                             
  }                                                                                    
}                                                 