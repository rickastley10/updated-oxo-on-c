#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int clearscreen(){

    //replace cls with clear
    system("cls");
    //like this
    //  ||
    //  \/
    //system("clear");
}
int twoplayer(){
char a1[10] = "1", a2[10] = "2", a3[10] = "3", a4[10] = "4", a5[10] = "5", a6[10] = "6", a7[10] = "7", a8[10] = "8", a9[10] = "9";
    int turn = 1;

    while (1)
    {
        
    
    
        printf("\noxo\n");
        
        
        printf("%s|%s|%s\n", a1, a2, a3);
        printf("-----\n");
        printf("%s|%s|%s\n", a4, a5, a6);
        printf("-----\n");
        printf("%s|%s|%s\n", a7, a8, a9);

        printf("\nwhere to place what?\n(from 1 to 9)\nq to quit\nr to restart\n> ");
        char num[10] = "";
        scanf("%9s", num);
        clearscreen();
        if (strcmp(num, "1") == 0) {
            if (turn == 1){
                strcpy(a1, "x");
            }
            else if (turn == 0)
            {
                strcpy(a1, "o");
            }
            
        }
        else if (strcmp(num, "2") == 0) {
            if (turn == 1){
                strcpy(a2, "x");
            }
            else if (turn == 0)
            {
                strcpy(a2, "o");
            }
        }
        else if (strcmp(num, "3") == 0) {
            if (turn == 1){
                strcpy(a3, "x");
            }
            else if (turn == 0)
            {
                strcpy(a3, "o");
            }
        }
        else if (strcmp(num, "4") == 0) {
            if (turn == 1){
                strcpy(a4, "x");
            }
            else if (turn == 0)
            {
                strcpy(a4, "o");
            }
        }
        else if (strcmp(num, "5") == 0) {
            if (turn == 1){
                strcpy(a5, "x");
            }
            else if (turn == 0)
            {
                strcpy(a5, "o");
            }
        }
        else if (strcmp(num, "6") == 0) {
            if (turn == 1){
                strcpy(a6, "x");
            }
            else if (turn == 0)
            {
                strcpy(a6, "o");
            }
        }
        else if (strcmp(num, "7") == 0) {
            if (turn == 1){
                strcpy(a7, "x");
            }
            else if (turn == 0)
            {
                strcpy(a7, "o");
            }
        }
        else if (strcmp(num, "8") == 0) {
            if (turn == 1){
                strcpy(a8, "x");
            }
            else if (turn == 0)
            {
                strcpy(a8, "o");
            }
        }
        else if (strcmp(num, "9") == 0) {
            if (turn == 1){
                strcpy(a9, "x");
            }
            else if (turn == 0)
            {
                strcpy(a9, "o");
            }
        }
        else if (strcmp(num, "q")==0){
            return 0;
        }
        else if (strcmp(num, "r")==0){
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 0;
        }
        
        turn = turn + 1;

        if (turn == 2){
            turn = 0;
        }

        clearscreen();
        




        if(strcmp(a1, a2) == 0 && strcmp(a2, a3) == 0) {
            printf("%s won!", a1);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }
        if(strcmp(a4, a5) == 0 && strcmp(a5, a6) == 0) {
            printf("%s won!", a4);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }
        if(strcmp(a7, a8) == 0 && strcmp(a8, a9) == 0) {
            printf("%s won!", a7);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }



        if(strcmp(a1, a4) == 0 && strcmp(a4, a7) == 0) {
            printf("%s won!", a1);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }
        if(strcmp(a2, a5) == 0 && strcmp(a5, a8) == 0) {
            printf("%s won!", a2);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }
        if(strcmp(a3, a6) == 0 && strcmp(a6, a9) == 0) {
            printf("%s won!", a3);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }


        
        if(strcmp(a1, a5) == 0 && strcmp(a5, a9) == 0) {
            printf("%s won!", a1);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }
        if(strcmp(a3, a5) == 0 && strcmp(a5, a7) == 0) {
            printf("%s won!", a3);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }
        
    }
}
int oneplayer(){
char a1[10] = "1", a2[10] = "2", a3[10] = "3", a4[10] = "4", a5[10] = "5", a6[10] = "6", a7[10] = "7", a8[10] = "8", a9[10] = "9";
    int turn = 1;

    while (1)
    {
        
    
    
        printf("\noxo\n");
        
        
        printf("%s|%s|%s\n", a1, a2, a3);
        printf("-----\n");
        printf("%s|%s|%s\n", a4, a5, a6);
        printf("-----\n");
        printf("%s|%s|%s\n", a7, a8, a9);

        printf("\nwhere to place what?\n(from 1 to 9)\nq to quit\nr to restart\n> ");
        char num[10] = "";
        scanf("%9s", num);
        clearscreen();

        turn = 1;
        if (strcmp(num, "1") == 0) {
            turn = 1;
            if (turn == 1){
                strcpy(a1, "x");
            }
            else if (turn == 0)
            {
                strcpy(a1, "o");
            }
            
        }
        else if (strcmp(num, "2") == 0) {
            turn = 1;
            if (turn == 1){
                strcpy(a2, "x");
            }
            else if (turn == 0)
            {
                strcpy(a2, "o");
            }
        }
        else if (strcmp(num, "3") == 0) {
            turn = 1;
            if (turn == 1){
                strcpy(a3, "x");
            }
            else if (turn == 0)
            {
                strcpy(a3, "o");
            }
        }
        else if (strcmp(num, "4") == 0) {
            turn = 1;
            if (turn == 1){
                strcpy(a4, "x");
            }
            else if (turn == 0)
            {
                strcpy(a4, "o");
            }
        }
        else if (strcmp(num, "5") == 0) {
            turn = 1;
            if (turn == 1){
                strcpy(a5, "x");
            }
            else if (turn == 0)
            {
                strcpy(a5, "o");
            }
        }
        else if (strcmp(num, "6") == 0) {
            turn = 1;
            if (turn == 1){
                strcpy(a6, "x");
            }
            else if (turn == 0)
            {
                strcpy(a6, "o");
            }
        }
        else if (strcmp(num, "7") == 0) {
            turn = 1;
            if (turn == 1){
                strcpy(a7, "x");
            }
            else if (turn == 0)
            {
                strcpy(a7, "o");
            }
        }
        else if (strcmp(num, "8") == 0) {
            turn = 1;
            if (turn == 1){
                strcpy(a8, "x");
            }
            else if (turn == 0)
            {
                strcpy(a8, "o");
            }
        }
        else if (strcmp(num, "9") == 0) {
            turn = 1;
            if (turn == 1){
                strcpy(a9, "x");
            }
            else if (turn == 0)
            {
                strcpy(a9, "o");
            }
        }
        else if (strcmp(num, "q")==0){
            return 0;
        }
        else if (strcmp(num, "r")==0){
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 0;
        }
        
        turn = turn + 1;
        
        if (turn == 2){
            turn = 0;
        }
        if (turn == 0){
            int valid = 0;

                while (valid ==0)
                {
                    
                
                
                    srand(time(NULL)); 
                    
                    int randomNum = (rand() % 9) + 1;
                    
                    //sprintf(num, "%d", randomNum);

                    if (randomNum == 1 && strcmp(a1, "1")==0 && strcmp(a1, "x")!=0 && strcmp(a1, "o")!=0){
                        strcpy(a1, "o");
                        valid = 1;
                    }
                    else if (randomNum == 2 && strcmp(a2, "2")==0 && strcmp(a2, "x")!=0 && strcmp(a2, "o")!=0){
                        strcpy(a2, "o");
                        valid = 1;
                    }
                    else if (randomNum == 3 && strcmp(a3, "3")==0 && strcmp(a3, "x")!=0 && strcmp(a3, "o")!=0){
                        strcpy(a3, "o");
                        valid = 1;
                    }
                    else if (randomNum == 4 && strcmp(a4, "4")==0 && strcmp(a4, "x")!=0 && strcmp(a4, "o")!=0){
                        strcpy(a4, "o");
                        valid = 1;
                    }
                    else if (randomNum == 5 && strcmp(a5, "5")==0 && strcmp(a5, "x")!=0 && strcmp(a5, "o")!=0){
                        strcpy(a5, "o");
                        valid = 1;
                    }
                    else if (randomNum == 6 && strcmp(a6, "6")==0 && strcmp(a6, "x")!=0 && strcmp(a6, "o")!=0){
                        strcpy(a6, "o");
                        valid = 1;
                    }
                    else if (randomNum == 7 && strcmp(a7, "7")==0 && strcmp(a7, "x")!=0 && strcmp(a7, "o")!=0){
                        strcpy(a7, "o");
                        valid = 1;
                    }
                    else if (randomNum == 8 && strcmp(a8, "8")==0 && strcmp(a8, "x")!=0 && strcmp(a8, "o")!=0){
                        strcpy(a8, "o");
                        valid = 1;
                    }
                    else if (randomNum == 9 && strcmp(a9, "9")==0 && strcmp(a9, "x")!=0 && strcmp(a9, "o")!=0){
                        strcpy(a9, "o");
                        valid = 1;
                    }
                }



        }
        clearscreen();
        




        if(strcmp(a1, a2) == 0 && strcmp(a2, a3) == 0) {
            printf("%s won!", a1);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }
        if(strcmp(a4, a5) == 0 && strcmp(a5, a6) == 0) {
            printf("%s won!", a4);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }
        if(strcmp(a7, a8) == 0 && strcmp(a8, a9) == 0) {
            printf("%s won!", a7);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }



        if(strcmp(a1, a4) == 0 && strcmp(a4, a7) == 0) {
            printf("%s won!", a1);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }
        if(strcmp(a2, a5) == 0 && strcmp(a5, a8) == 0) {
            printf("%s won!", a2);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }
        if(strcmp(a3, a6) == 0 && strcmp(a6, a9) == 0) {
            printf("%s won!", a3);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }


        
        if(strcmp(a1, a5) == 0 && strcmp(a5, a9) == 0) {
            printf("%s won!", a1);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }
        if(strcmp(a3, a5) == 0 && strcmp(a5, a7) == 0) {
            printf("%s won!", a3);
            strcpy(a1, "1");
            strcpy(a2, "2");
            strcpy(a3, "3");
            strcpy(a4, "4");
            strcpy(a5, "5");
            strcpy(a6, "6");
            strcpy(a7, "7");
            strcpy(a8, "8");
            strcpy(a9, "9");
            turn = 1;
        }
        
    }

}
int main(){
    int choise;
    printf("    1 - single player\n    2 - multiplayer\n> ");
    scanf("%d", &choise);
    if (choise == 1){
        oneplayer();
    }
    else if (choise == 2){
        twoplayer();
    }


}
