
#include <unistd.h>
#include <iostream>
#include <stdio.h>



int main (){
    int i = 0;
    int j = 0;
    
    int n = 5;

 while (i <= n){
     j = 0;
     while( j <= n){
        if( (i==j)|| ( i+j ) == n + 1)
            write(1,"*",1);
        else 
            write(1," ",1);
        j++;
     }
     write(1,"\n",1);
     i++;
 }
 
}