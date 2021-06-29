#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rockpaperscissor(char you, char comp){
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw
    
    if(you == comp){
        return 0;
    }

    // Non-draw conditions
 
    if(you=='r' && comp=='p'){
        return -1;
    }
    else if(you=='p' && comp=='r'){
        return 1;
    }

    if(you=='r' && comp=='s'){
        return 1;
    }
    else if(you=='s' && comp=='r'){
        return -1;
    }

    if(you=='p' && comp=='s'){
        return -1;
    }
    else if(you=='s' && comp=='p'){
        return 1;
    }

}
int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33){
        comp = 'r';
    }
    else if(number>33 && number<66){
        comp='s';
    }
    else{
        comp='p';
    }
    
    printf("Enter 'r' for rock, 's' for scissor and 'p' for paper\n");
    scanf("%c", &you);
    int result = rockpaperscissor(you, comp);
    if(result ==0){
        printf("Game draw!\n");
    }
    else if(result==1){
        printf("You win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    printf("You chose %c and computer chose %c. ", you, comp);
    return 0;
}