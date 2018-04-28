/*                                                                                     
Enunciado: "Write a program that opens a file (with the open() system call)            
and then calls fork() to create a new process. Can both the child and parent           
access the file descriptor returned by open()? What happens when they are              
writing to the file concurrently, i.e., a t the same time?"                            
                                                                                       
Author:                                                                                
Date:                                                                                  
*/        
#include <stdio.h>// Incluir archivos de cabecera para las funciones que requiere para                   
#include <unistd.h>
#include <fcntl.h> // solucionar el enunciado                                                             
                                                                                       
int main(int argc, char **argv) {                                                      
  // Usar estas variables                                                              
  int x;                                                                               
  pid_t pid;                                                                           
  char *filename="code-02.txt";                                                        
  int fd;                                                                              
                                                                                       
   //                                                                                   
  close(STDOUT_FILENO);
  fd= open("./p4.output", O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU); // Instrucciones para abrir archivo de lectura/escritura)                            
   //                                                                                   
                                                                                       
  x = 100;                                                                             
  pid = fork();                                                                        
  if (pid == 0) {                                                                      
    x++;                                                                               
    int dprintf(fd,"i m soon y mi valor de x es %d\n ", x);  // Instruccion para escribir en archivo una cadena                                 
    // acompanada del valor de 'x'                                                     
  } else {                                                                             
    x+=2;                                                                              
   int dprintf(fd,"i m father y mi valor de x es %d\n ", x); // Instruccion para escribir en archivo una cadena                                 
    // acompanada del valor de 'x'                                                     
  }                                                                                    
                                                                                       
  close(fd);                                                                           
}                                        
