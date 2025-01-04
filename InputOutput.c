//
//  InputOutput.C
//  learning
//
//  Created by Brayan Santos on 1/4/25.
//
// Basic Input output program

#include <stdio.h>

int main(){
    
    char name[100];
    
    printf("Type your name \n");
    scanf("%s", name);
    
    printf("Your name is: %s\n", name );
    
    return 0;
}
