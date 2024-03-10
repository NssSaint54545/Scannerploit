#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void GTN_Sim_Single_Mode();
void GTN_Sim_Single_Mode_Easy();
void GTN_Sim_Single_Mode_Hard();
void GTN_Sim_Double_Mode();
void GTN_Sim_Double_Mode_Easy();
void GTN_Sim_Double_Mode_Hard();
void GTN_Sim_Single_Mode_Medium_Graphics();
void GTN_Sim_Double_Mode_Medium_Graphics();
void GTN_Sim_Single_Mode_Easy_High_Graphics();
void GTN_Sim_Double_Mode_Easy_High_Graphics();
void GTN_Sim_Options();
void GTN_Sim_Options_Graphics();
void GTN_Sim_Options_Medium();
void GTN_Sim_Options_Graphics_Option_Medium();
void GTN_Sim_Options_Game_Difficultu_Option_Medium();
void GTN_Sim_Options_Game_Difficulty();
void Menu_of_GTN_Sim();
void Menu_of_GTN_Sim_Medium_Graphics();
void Menu_of_GTN_Sim_High_Graphics();
void Default();
void Default_Medium_Graphics();
void Default_High_Graphics();
void GTN_Sim_Options_Game_Difficulty_Easy();
void GTN_Sim_Options_Game_Difficulty_Hard();
void GTN_Sim_Options_Game_Difficulty_Easy_Medium_Graphics();
void GTN_Sim_Options_Game_Difficulty_Hard_Medium_Graphics();
void GTN_Sim_Options_Game_Difficulty_Medium_Graphics();
void GTN_Sim_Single_Mode_Easy_Medium_Graphics();
void GTN_Sim_Double_Mode_Easy_Medium_Graphics();
void GTN_Sim_Single_Mode_Hard_Medium_Graphics();
void GTN_Sim_Double_Mode_Hard_Medium_Graphics();
void GTN_Sim_Single_Mode_High_Graphics();
void GTN_Sim_Double_Mode_High_Graphics();
void GTN_Sim_Options_High();
void GTN_Sim_Options_Graphics_Option_High();
void GTN_Sim_Options_Game_Difficulty_High_Graphics();
void GTN_Sim_Options_Game_Difficulty_Easy_High_Graphics();
void GTN_Sim_Options_Game_Difficulty_Hard_High_Graphics();
void GTN_Sim_Double_Mode_Hard_High_Graphics();
void GTN_Sim_Single_Mode_Hard_High_Graphics();

int main()
{
    Menu_of_GTN_Sim();
    return 0;
}

void GTN_Sim_Single_Mode()    // GTN - Guess The Number
{
    clrscr();
    int random_number, player_guess, attempt = 0;
    srand(time(0));
    random_number = rand()%100;
    printf("-->Normal Mode\n\n");
    while(attempt < 100)
    {
        attempt++;
        printf("Attempt:- %d\n", attempt);
        printf("Guess the number:- ");
        scanf("%d", &player_guess);
        (player_guess>random_number)?printf("Guess is higher\n\n"):printf("");
        (player_guess<random_number)?printf("Guess is lower\n\n"):printf("");

        if(player_guess == random_number)
        {
            printf("Guess is correct, in %d attempts!!\n", attempt);
            break;
        }
    }
}

void Menu_of_GTN_Sim()
{
    clrscr();
    int player_choice_for_menu;
    char re_attempt_choice, about_choice;
    printf("  G.T.N Simulator \n");
    printf("(Guess The Number Sim)\n");
    printf("            Graphics:- Low\n");
    printf("                Mode:- Normal\n\n");
    printf("   Game Menu:-   \n\n");
    printf("[1] - Single Mode\n");
    printf("[2] - Double Mode\n");
    printf("[3] - Options\n");
    printf("[4] - about\n");
    printf("[5] - Exit\n");
    printf("Choose [1-5]:- ");
    scanf("%d", &player_choice_for_menu);

    switch(player_choice_for_menu)
    {
    case 1:
        GTN_Sim_Single_Mode();
        break;

    case 2:
        GTN_Sim_Double_Mode();
        break;

    case 3:
        GTN_Sim_Options();
        break;

    case 4:
        printf("Welcome to GTN Simulator\n");
        printf("-> It is developed by Kuroi_Maou_Rasetsu\n");
        printf("-> GTN - Guess The Number Simulator\n");
        printf("-> Wanna Go Back?[y/n]:- ");
        scanf("%s", &about_choice);
        if(about_choice == 'y')
        {
            Menu_of_GTN_Sim();
        }

        else
        {
            break;
        }
        break;

    case 5:
        break;



    default:
        printf("Invalid Choice!!\n");
        printf("Wanna Try again?[y/n]:- ");
        scanf("%s", &re_attempt_choice);
        if(re_attempt_choice == 'y')
        {
            Menu_of_GTN_Sim();
        }

        else
        {
            break;
        }
    }
}

void GTN_Sim_Double_Mode()
{
    clrscr();
    int random_number,random_number_2, player_guess, attempt = 0, p1, p2, attempt_2;
    char player2_choice,player_result_choice;
    srand(time(0));
    random_number = rand()%100;
    printf("--> Normal Mode\n\n");
    while(attempt < 100)
    {
        attempt++;
        printf("Player-1 Turn's:- \n");
        printf("---------------------------\n");
        printf("Attempt:- %d\n", attempt);
        printf("Guess the number:- ");
        scanf("%d", &player_guess);
        (player_guess>random_number)?printf("Guess is higher\n\n"):printf("");
        (player_guess<random_number)?printf("Guess is lower\n\n"):printf("");

        if(player_guess == random_number)
        {
            p1 = attempt;
            printf("Guess is correct, in %d attempts!!\n", attempt);
            printf("Player-2 ready?[y/n]:- ");
            scanf("%s", &player2_choice);
            if(player2_choice == 'y')
            {
                clrscr();
                srand(time(0));
                random_number_2 = rand()%100;
                while(attempt_2 < 100)
                {
                    attempt_2++;
                    printf("Player-2 Turn's:- \n");
                    printf("---------------------------\n");
                    printf("Attempt:- %d\n", attempt_2);
                    printf("Guess the number:- ");
                    scanf("%d", &player_guess);
                    (player_guess>random_number_2)?printf("Guess is higher\n\n"):printf("");
                    (player_guess<random_number_2)?printf("Guess is lower\n\n"):printf("");

                    if(player_guess == random_number_2)
                    {
                        p2 = attempt_2;
                        printf("Guess is correct, in %d attempts!!\n", attempt_2);
                        printf("Wanna See Results?[y/n]:- ");
                        scanf("%s", &player_result_choice);
                        if(player_result_choice == 'y')
                        {
                            clrscr();
                            if(p1 > p2)
                            {
                                printf("Winner is Player-2!!");
                                break;
                            }

                            else
                            {
                                if(p1 < p2)
                                {
                                    printf("Winner is Player-1!!");
                                }

                                else
                                {
                                    if( p1 == p2)
                                    {
                                        printf("It's a Tie!!");
                                    }

                                    else {}
                                }
                            }
                        }

                        else
                        {
                            break;
                        }
                        break;
                    }
                }
            }

            else
            {
                break;
            }
            break;
        }
    }
}

void GTN_Sim_Options()
{
    clrscr();
    int player_options_choice;
    char re_attempt_choice;
    printf("Options:- \n\n");
    printf("[1] - Graphics\n");
    printf("[2] - Game Difficulty\n");
    printf("[3] - Quit to Menu\n");
    printf("[4] - Exit\n");
    printf("Choose [1-4]:- ");
    scanf("%d", &player_options_choice);
    switch(player_options_choice)
    {
    case 1:
        GTN_Sim_Options_Graphics();
        break;

    case 2:
        GTN_Sim_Options_Game_Difficulty();
        break;

    case 3:
        Menu_of_GTN_Sim();
        break;

    case 4:
        break;

    default:
        printf("Invalid Choice!!\n");
        printf("Wanna Try again?[y/n]:- ");
        scanf("%s", &re_attempt_choice);
        if(re_attempt_choice == 'y')
        {
            Menu_of_GTN_Sim();
        }

        else
        {
            break;
        }
    }

}

void GTN_Sim_Options_Graphics()
{
    clrscr();
    int graphics_choice;
    printf("Game Graphics\n\n");
    printf("[1] - Low\n");
    printf("[2] - Medium\n");
    printf("[3] - High\n");
    printf("[4] - Quit to Menu\n");
    printf("[5] - Exit\n");
    printf("Choose [1-5]:- ");
    scanf("%d", &graphics_choice);
    switch(graphics_choice)
    {
    case 1:
        Menu_of_GTN_Sim();
        break;

    case 2:
        Menu_of_GTN_Sim_Medium_Graphics();
        break;

    case 3:
        Menu_of_GTN_Sim_High_Graphics();
        break;

    case 4:
        Menu_of_GTN_Sim();
        break;

    case 5:
        break;

    default:
        Default();
    }
}

void Default()
{
    char re_attempt_choice;
    printf("Invalid Choice!!\n");
    printf("Wanna Try again?[y/n]:- ");
    scanf("%s", &re_attempt_choice);
    if(re_attempt_choice == 'y')
    {
        Menu_of_GTN_Sim();
    }

    else
    {

    }
}

void Default_Medium_Graphics()
{
    char re_attempt_choice;
    printf("Invalid Choice!!\n");
    printf("Wanna Try again?[y/n]:- ");
    scanf("%s", &re_attempt_choice);
    if(re_attempt_choice == 'y')
    {
        Menu_of_GTN_Sim_Medium_Graphics();
    }

    else
    {

    }
}

void Default_High_Graphics()
{
    char re_attempt_choice;
    printf("ⅈꪀꪜꪖꪶⅈᦔ ᥴꫝꪮⅈᥴꫀ❗\n");
    printf("𝕎𝕒𝕟𝕟𝕒 𝕋𝕣𝕪 𝔸𝕘𝕒𝕚𝕟? [y/n]:- ");
    scanf("%s", &re_attempt_choice);
    if(re_attempt_choice == 'y')
    {
        Menu_of_GTN_Sim_High_Graphics();
    }

    else
    {

    }
}


void Menu_of_GTN_Sim_Medium_Graphics()
{
    clrscr();
    int player_choice_for_menu;
    char re_attempt_choice, about_choice;
    printf("---------------------------------------------\n");
    printf("  G.T.N Simulator \n");
    printf("(Guess The Number Sim)\n");
    printf("---------------------------------------------\n");
    printf("            Graphics:- Medium\n");
    printf("                Mode:- Normal\n");
    printf("-------------------------------------------\n");
    printf("   Game Menu:-   \n");
    printf("-------------------------------------------\n");
    printf("[1️⃣] - Single Mode\n");
    printf("[2️⃣] - Double Mode\n");
    printf("[3️⃣] - Options\n");
    printf("[4️⃣] - about\n");
    printf("[5️⃣] - Exit\n");
    printf("------------------------------------------\n");
    printf("Choose [1-5]:-  ");
    scanf("%d", &player_choice_for_menu);

    switch(player_choice_for_menu)
    {
    case 1:
        GTN_Sim_Single_Mode_Medium_Graphics();
        break;

    case 2:
        GTN_Sim_Double_Mode_Medium_Graphics();
        break;

    case 3:
        GTN_Sim_Options_Medium();
        break;

    case 4:
        printf("-----------------------------------------\n");
        printf("Welcome to GTN Simulator\n");
        printf("------------------------------------------\n");
        printf("➡️ It is developed by Kuroi_Maou_Rasetsu\n");
        printf("➡️ GTN - Guess The Number Simulator\n");
        printf("------------------------------------------\n");
        printf("➡️ Wanna Go Back?[y/n]:- ");
        scanf("%s", &about_choice);
        if(about_choice == 'y')
        {
            Menu_of_GTN_Sim_Medium_Graphics();
        }

        else
        {
            break;
        }
        break;

    case 5:
        break;



    default:
        printf("Invalid Choice!!\n");
        printf("Wanna Try again?[y/n]:- ");
        scanf("%s", &re_attempt_choice);
        if(re_attempt_choice == 'y')
        {
            Menu_of_GTN_Sim_Medium_Graphics();
        }

        else
        {
            break;
        }
    }
}

void GTN_Sim_Single_Mode_Medium_Graphics()    // GTN - Guess The Number
{
    clrscr();
    int random_number, player_guess, attempt = 0;
    srand(time(0));
    random_number = rand()%100;
    while(attempt < 100)
    {
        attempt++;
        printf("---------------------------\n");
        printf("Attempt:- %d\n", attempt);
        printf("---------------------------\n");
        printf("Guess the number:- ");
        scanf("%d", &player_guess);
        printf("--------------------------- \n");
        (player_guess>random_number)?printf("Guess is higher\n\n"):printf("");
        (player_guess<random_number)?printf("Guess is lower\n\n"):printf("");

        if(player_guess == random_number)
        {
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("Guess is correct, in %d attempts❗\n", attempt);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            break;
        }
    }
}

void GTN_Sim_Double_Mode_Medium_Graphics()
{
    clrscr();
    int random_number,random_number_2, player_guess, attempt = 0, p1, p2, attempt_2;
    char player2_choice,player_result_choice;
    srand(time(0));
    random_number = rand()%100;
    printf("➡️ Normal Mode\n\n");
    while(attempt < 100)
    {
        attempt++;
        printf("------------------------\n");
        printf("Player-1 Turn's:- \n");
        printf("------------------------\n");
        printf("Attempt:- %d\n", attempt);
        printf("Guess the number:- ");
        scanf("%d", &player_guess);
        printf("------------------------\n");
        (player_guess>random_number)?printf("Guess is higher\n\n"):printf("");
        (player_guess<random_number)?printf("Guess is lower\n\n"):printf("");

        if(player_guess == random_number)
        {
            p1 = attempt;
            printf("-----------------------------------\n");
            printf("Guess is correct, in %d attempts❗\n", attempt);
            printf("Player-2 ready?[y/n]:- ");
            scanf("%s", &player2_choice);
            if(player2_choice == 'y')
            {
                clrscr();
                srand(time(0));
                random_number_2 = rand()%100;
                printf("➡️ Normal Mode\n\n");
                while(attempt_2 < 100)
                {
                    attempt_2++;
                    printf("--------------------\n");
                    printf("Player-2 Turn's:- \n");
                    printf("--------------------\n");
                    printf("Attempt:- %d\n", attempt_2);
                    printf("Guess the number:- ");
                    scanf("%d", &player_guess);
                    printf("--------------------\n");
                    (player_guess>random_number_2)?printf("Guess is higher\n\n"):printf("");
                    (player_guess<random_number_2)?printf("Guess is lower\n\n"):printf("");

                    if(player_guess == random_number_2)
                    {
                        p2 = attempt_2;
                        printf("-----------------------------------\n");
                        printf("Guess is correct, in %d attempts❗\n", attempt_2);
                        printf("-----------------------------------\n");
                        printf("Wanna See Results?[y/n]:- ");
                        scanf("%s", &player_result_choice);
                        if(player_result_choice == 'y')
                        {
                            clrscr();
                            if(p1 > p2)
                            {
                                printf("---------------------\n");
                                printf("Winner is Player-2❗\n");
                                printf("---------------------\n");

                                break;
                            }

                            else
                            {
                                if(p1 < p2)
                                {
                                    printf("---------------------\n");
                                    printf("Winner is Player-1❗\n");
                                    printf("---------------------\n");
                                }

                                else
                                {
                                    if( p1 == p2)
                                    {
                                        printf("---------------------\n");
                                        printf("It's a Tie❗\n");
                                        printf("---------------------\n");
                                    }

                                    else {}
                                }
                            }
                        }

                        else
                        {
                            break;
                        }
                        break;
                    }
                }
            }

            else
            {
                break;
            }
            break;
        }
    }
}

void GTN_Sim_Options_Graphics_Option_Medium()
{
    clrscr();
    int graphics_choice;
    printf("----------------------\n");
    printf("Game Graphics\n");
    printf("----------------------\n");
    printf("[1️⃣] - Low\n");
    printf("[2️⃣] - Medium\n");
    printf("[3️⃣] - High\n");
    printf("[4️⃣] - Quit to Menu\n");
    printf("[5️⃣] - Exit\n");
    printf("----------------------\n");
    printf("Choose [1-5]:- ");
    scanf("%d", &graphics_choice);
    switch(graphics_choice)
    {
    case 1:
        Menu_of_GTN_Sim();
        break;

    case 2:
        Menu_of_GTN_Sim_Medium_Graphics();
        break;

    case 3:
        Menu_of_GTN_Sim_High_Graphics();
        break;

    case 4:
        Menu_of_GTN_Sim_Medium_Graphics();
        break;

    case 5:
        break;

    default:
        Default_Medium_Graphics();
    }
}

void GTN_Sim_Options_Medium()
{
    clrscr();
    int player_options_choice;
    char re_attempt_choice;
    printf("-----------------------\n");
    printf("Options:- \n");
    printf("-----------------------\n");
    printf("[1️⃣] - Graphics\n");
    printf("[2️⃣] - Game Difficulty\n");
    printf("[3️⃣] - Quit to Menu\n");
    printf("[4️⃣] - Exit\n");
    printf("-----------------------\n");
    printf("Choose [1-4]:- ");
    scanf("%d", &player_options_choice);
    switch(player_options_choice)
    {
    case 1:
        GTN_Sim_Options_Graphics_Option_Medium();
        break;

    case 2:
        GTN_Sim_Options_Game_Difficulty_Medium_Graphics();
        break;

    case 3:
        Menu_of_GTN_Sim_Medium_Graphics();
        break;

    case 4:
        break;

    default:
        printf("Invalid Choice!!\n");
        printf("Wanna Try again?[y/n]:- ");
        scanf("%s", &re_attempt_choice);
        if(re_attempt_choice == 'y')
        {
            Menu_of_GTN_Sim_Medium_Graphics();
        }

        else
        {
            break;
        }
    }

}

void GTN_Sim_Options_Game_Difficulty()
{
    clrscr();
    int difficulty_choice;
    printf("Game Difficulty\n\n");
    printf("[1] - Easy\n");
    printf("[2] - Normal\n");
    printf("[3] - Hard\n");
    printf("[4] - Quit to Menu\n");
    printf("[5] - Exit\n");
    printf("Choose [1-5]:- ");
    scanf("%d", &difficulty_choice);
    switch(difficulty_choice)
    {
    case 1:
        GTN_Sim_Options_Game_Difficulty_Easy();
        break;

    case 2:
        Menu_of_GTN_Sim();
        break;

    case 3:
        GTN_Sim_Options_Game_Difficulty_Hard();
        break;

    case 4:
        Menu_of_GTN_Sim();
        break;

    case 5:
        break;

    default:
        Default();
    }
}

void GTN_Sim_Options_Game_Difficulty_Easy()
{
    clrscr();
    int player_choice_for_menu;
    char re_attempt_choice, about_choice;
    printf("  G.T.N Simulator \n");
    printf("(Guess The Number Sim)\n");
    printf("            Graphics:- Low\n");
    printf("                Mode:- Easy\n\n");
    printf("   Game Menu:-   \n\n");

    printf("[1] - Single Mode\n");
    printf("[2] - Double Mode\n");
    printf("[3] - Options\n");
    printf("[4] - about\n");
    printf("[5] - Exit\n");
    printf("Choose [1-5]:- ");
    scanf("%d", &player_choice_for_menu);

    switch(player_choice_for_menu)
    {
    case 1:
        GTN_Sim_Single_Mode_Easy();
        break;

    case 2:
        GTN_Sim_Double_Mode_Easy();
        break;

    case 3:
        GTN_Sim_Options();
        break;

    case 4:
        printf("Welcome to GTN Simulator\n");
        printf("-> It is developed by Kuroi_Maou_Rasetsu\n");
        printf("-> GTN - Guess The Number Simulator\n");
        printf("-> Wanna Go Back?[y/n]:- ");
        scanf("%s", &about_choice);
        if(about_choice == 'y')
        {
            Menu_of_GTN_Sim();
        }

        else
        {
            break;
        }
        break;

    case 5:
        break;



    default:
        printf("Invalid Choice!!\n");
        printf("Wanna Try again?[y/n]:- ");
        scanf("%s", &re_attempt_choice);
        if(re_attempt_choice == 'y')
        {
            Menu_of_GTN_Sim();
        }

        else
        {
            break;
        }
    }
}

void GTN_Sim_Single_Mode_Easy()
{
    clrscr();
    int random_number, player_guess, attempt = 0;
    srand(time(0));
    random_number = rand()%10;
    printf("-->Easy Mode\n");
    while(attempt < 100)
    {
        attempt++;
        printf("Attempt:- %d\n", attempt);
        printf("Guess the number:- ");
        scanf("%d", &player_guess);
        (player_guess>random_number)?printf("Guess is higher\n\n"):printf("");
        (player_guess<random_number)?printf("Guess is lower\n\n"):printf("");

        if(player_guess == random_number)
        {
            printf("Guess is correct, in %d attempts!!\n", attempt);
            break;
        }
    }
}

void GTN_Sim_Double_Mode_Easy()
{
    clrscr();
    int random_number,random_number_2, player_guess, attempt = 0, p1, p2, attempt_2;
    char player2_choice,player_result_choice;
    srand(time(0));
    random_number = rand()%10;
    printf("--> Easy Mode\n\n");
    while(attempt < 100)
    {
        attempt++;
        printf("Player-1 Turn's:- \n");
        printf("---------------------------\n");
        printf("Attempt:- %d\n", attempt);
        printf("Guess the number:- ");
        scanf("%d", &player_guess);
        (player_guess>random_number)?printf("Guess is higher\n\n"):printf("");
        (player_guess<random_number)?printf("Guess is lower\n\n"):printf("");

        if(player_guess == random_number)
        {
            p1 = attempt;
            printf("Guess is correct, in %d attempts!!\n\n", attempt);
            printf("Player-2 ready?[y/n]:- ");
            scanf("%s", &player2_choice);
            if(player2_choice == 'y')
            {
                clrscr();
                srand(time(0));
                random_number_2 = rand()%10;
                while(attempt_2 < 100)
                {
                    attempt_2++;
                    printf("Player-2 Turn's:- \n");
                    printf("---------------------------\n");
                    printf("Attempt:- %d\n", attempt_2);
                    printf("Guess the number:- ");
                    scanf("%d", &player_guess);
                    (player_guess>random_number_2)?printf("Guess is higher\n\n"):printf("");
                    (player_guess<random_number_2)?printf("Guess is lower\n\n"):printf("");

                    if(player_guess == random_number_2)
                    {
                        p2 = attempt_2;
                        printf("Guess is correct, in %d attempts!!\n", attempt_2);
                        printf("Wanna See Results?[y/n]:- ");
                        scanf("%s", &player_result_choice);
                        if(player_result_choice == 'y')
                        {
                            clrscr();
                            if(p1 > p2)
                            {
                                printf("Winner is Player-2!!");
                                break;
                            }

                            else
                            {
                                if(p1 < p2)
                                {
                                    printf("Winner is Player-1!!");
                                }

                                else
                                {
                                    if( p1 == p2)
                                    {
                                        printf("It's a Tie!!");
                                    }

                                    else {}
                                }
                            }
                        }

                        else
                        {
                            break;
                        }
                        break;
                    }
                }
            }

            else
            {
                break;
            }
            break;
        }
    }
}

void GTN_Sim_Options_Game_Difficulty_Hard()
{
    clrscr();
    int player_choice_for_menu;
    char re_attempt_choice, about_choice;
    printf("  G.T.N Simulator \n");
    printf("(Guess The Number Sim)\n");
    printf("            Graphics:- Low\n");
    printf("                Mode:- Hard\n\n");
    printf("   Game Menu:-   \n\n");

    printf("[1] - Single Mode\n");
    printf("[2] - Double Mode\n");
    printf("[3] - Options\n");
    printf("[4] - about\n");
    printf("[5] - Exit\n");
    printf("Choose [1-5]:- ");
    scanf("%d", &player_choice_for_menu);

    switch(player_choice_for_menu)
    {
    case 1:
        GTN_Sim_Single_Mode_Hard();
        break;

    case 2:
        GTN_Sim_Double_Mode_Hard();
        break;

    case 3:
        GTN_Sim_Options();
        break;

    case 4:
        printf("Welcome to GTN Simulator\n");
        printf("-> It is developed by Kuroi_Maou_Rasetsu\n");
        printf("-> GTN - Guess The Number Simulator\n");
        printf("-> Wanna Go Back?[y/n]:- ");
        scanf("%s", &about_choice);
        if(about_choice == 'y')
        {
            Menu_of_GTN_Sim();
        }

        else
        {
            break;
        }
        break;

    case 5:
        break;



    default:
        printf("Invalid Choice!!\n");
        printf("Wanna Try again?[y/n]:- ");
        scanf("%s", &re_attempt_choice);
        if(re_attempt_choice == 'y')
        {
            Menu_of_GTN_Sim();
        }

        else
        {
            break;
        }
    }
}

void GTN_Sim_Single_Mode_Hard()
{
    clrscr();
    int random_number, player_guess, attempt = 0;
    srand(time(0));
    random_number = rand()%1000;
    printf("--> Hard Mode\n\n");
    while(attempt < 100)
    {
        attempt++;
        printf("Attempt:- %d\n", attempt);
        printf("Guess the number:- ");
        scanf("%d", &player_guess);
        (player_guess>random_number)?printf("Guess is higher\n\n"):printf("");
        (player_guess<random_number)?printf("Guess is lower\n\n"):printf("");

        if(player_guess == random_number)
        {
            printf("Guess is correct, in %d attempts!!\n", attempt);
            break;
        }
    }
}

void GTN_Sim_Double_Mode_Hard()
{
    clrscr();
    int random_number,random_number_2, player_guess, attempt = 0, p1, p2, attempt_2;
    char player2_choice,player_result_choice;
    srand(time(0));
    random_number = rand()%1000;
    printf("--> Hard Mode\n\n");
    while(attempt < 100)
    {
        attempt++;
        printf("Player-1 Turn's:- \n");
        printf("---------------------------\n");
        printf("Attempt:- %d\n", attempt);
        printf("Guess the number:- ");
        scanf("%d", &player_guess);
        (player_guess>random_number)?printf("Guess is higher\n\n"):printf("");
        (player_guess<random_number)?printf("Guess is lower\n\n"):printf("");

        if(player_guess == random_number)
        {
            p1 = attempt;
            printf("Guess is correct, in %d attempts!!\n\n", attempt);
            printf("Player-2 ready?[y/n]:- ");
            scanf("%s", &player2_choice);
            if(player2_choice == 'y')
            {
                clrscr();
                srand(time(0));
                random_number_2 = rand()%10;
                printf("--> Hard Mode\n\n");
                while(attempt_2 < 100)
                {
                    attempt_2++;
                    printf("Player-2 Turn's:- \n");
                    printf("---------------------------\n");
                    printf("Attempt:- %d\n", attempt_2);
                    printf("Guess the number:- ");
                    scanf("%d", &player_guess);
                    (player_guess>random_number_2)?printf("Guess is higher\n\n"):printf("");
                    (player_guess<random_number_2)?printf("Guess is lower\n\n"):printf("");

                    if(player_guess == random_number_2)
                    {
                        p2 = attempt_2;
                        printf("Guess is correct, in %d attempts!!\n", attempt_2);
                        printf("Wanna See Results?[y/n]:- ");
                        scanf("%s", &player_result_choice);
                        if(player_result_choice == 'y')
                        {
                            clrscr();
                            if(p1 > p2)
                            {
                                printf("Winner is Player-2!!");
                                break;
                            }

                            else
                            {
                                if(p1 < p2)
                                {
                                    printf("Winner is Player-1!!");
                                }

                                else
                                {
                                    if( p1 == p2)
                                    {
                                        printf("It's a Tie!!");
                                    }

                                    else {}
                                }
                            }
                        }

                        else
                        {
                            break;
                        }
                        break;
                    }
                }
            }

            else
            {
                break;
            }
            break;
        }
    }
}

void GTN_Sim_Options_Game_Difficulty_Medium_Graphics()
{
    clrscr();
    int difficulty_choice;
    printf("-------------------\n");
    printf("Game Difficulty\n");
    printf("-------------------\n");
    printf("[1️⃣] - Easy\n");
    printf("[2️⃣] - Normal\n");
    printf("[3️⃣] - Hard\n");
    printf("[4️⃣] - Quit to Menu\n");
    printf("[5️⃣] - Exit\n");
    printf("-------------------\n");
    printf("Choose [1-5]:- ");
    scanf("%d", &difficulty_choice);
    switch(difficulty_choice)
    {
    case 1:
        GTN_Sim_Options_Game_Difficulty_Easy_Medium_Graphics();
        break;

    case 2:
        Menu_of_GTN_Sim_Medium_Graphics();
        break;

    case 3:
        GTN_Sim_Options_Game_Difficulty_Hard_Medium_Graphics();
        break;

    case 4:
        Menu_of_GTN_Sim_Medium_Graphics();
        break;

    case 5:
        break;

    default:
        Default_Medium_Graphics();
    }
}


void GTN_Sim_Options_Game_Difficulty_Easy_Medium_Graphics()
{
    clrscr();
    int player_choice_for_menu;
    char re_attempt_choice, about_choice;
    printf("-------------------------------------\n");
    printf("  G.T.N Simulator \n");
    printf("(Guess The Number Sim)\n");
    printf("-------------------------------------\n");
    printf("            Graphics:- Medium\n");
    printf("                Mode:- Easy\n");
    printf("-------------------------------------\n");
    printf("   Game Menu:-   \n");
    printf("-------------------------------------\n");
    printf("[1️⃣] - Single Mode\n");
    printf("[2️⃣] - Double Mode\n");
    printf("[3️⃣] - Options\n");
    printf("[4️⃣] - about\n");
    printf("[5️⃣] - Exit\n");
    printf("-------------------------------------\n");
    printf("Choose [1-5]:- ");
    scanf("%d", &player_choice_for_menu);

    switch(player_choice_for_menu)
    {
    case 1:
        GTN_Sim_Single_Mode_Easy_Medium_Graphics();
        break;

    case 2:
        GTN_Sim_Double_Mode_Easy_Medium_Graphics();
        break;

    case 3:
        GTN_Sim_Options_Medium();
        break;

    case 4:
        printf("-----------------------------------------\n");
        printf("Welcome to GTN Simulator\n");
        printf("------------------------------------------\n");
        printf("➡️ It is developed by Kuroi_Maou_Rasetsu\n");
        printf("➡️ GTN - Guess The Number Simulator\n");
        printf("------------------------------------------\n");
        printf("➡️ Wanna Go Back?[y/n]:- ");
        scanf("%s", &about_choice);
        if(about_choice == 'y')
        {
            Menu_of_GTN_Sim_Medium_Graphics();
        }

        else
        {
            break;
        }
        break;

    case 5:
        break;



    default:
        printf("Invalid Choice!!\n");
        printf("Wanna Try again?[y/n]:- ");
        scanf("%s", &re_attempt_choice);
        if(re_attempt_choice == 'y')
        {
            Menu_of_GTN_Sim_Medium_Graphics();
        }

        else
        {
            break;
        }
    }
}

void GTN_Sim_Single_Mode_Easy_Medium_Graphics()
{
    clrscr();
    int random_number, player_guess, attempt = 0;
    srand(time(0));
    random_number = rand()%10;
    printf("➡️ Easy Mode\n\n");
    while(attempt < 100)
    {
        attempt++;
        printf("---------------------------\n");
        printf("Attempt:- %d\n", attempt);
        printf("---------------------------\n");
        printf("Guess the number:- ");
        scanf("%d", &player_guess);
        printf("--------------------------- \n");
        (player_guess>random_number)?printf("Guess is higher\n\n"):printf("");
        (player_guess<random_number)?printf("Guess is lower\n\n"):printf("");

        if(player_guess == random_number)
        {
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("Guess is correct, in %d attempts❗\n", attempt);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            break;
        }
    }
}

void GTN_Sim_Double_Mode_Easy_Medium_Graphics()
{
    clrscr();
    int random_number,random_number_2, player_guess, attempt = 0, p1, p2, attempt_2;
    char player2_choice,player_result_choice;
    srand(time(0));
    random_number = rand()%10;
    printf("➡️ Easy Mode");
    while(attempt < 100)
    {
        attempt++;
        printf("------------------------\n");
        printf("Player-1 Turn's:- \n");
        printf("------------------------\n");
        printf("Attempt:- %d\n", attempt);
        printf("Guess the number:- ");
        scanf("%d", &player_guess);
        printf("------------------------\n");
        (player_guess>random_number)?printf("Guess is higher\n\n"):printf("");
        (player_guess<random_number)?printf("Guess is lower\n\n"):printf("");

        if(player_guess == random_number)
        {
            p1 = attempt;
            printf("-----------------------------------\n");
            printf("Guess is correct, in %d attempts❗\n", attempt);
            printf("Player-2 ready?[y/n]:- ");
            scanf("%s", &player2_choice);
            if(player2_choice == 'y')
            {
                clrscr();
                srand(time(0));
                random_number_2 = rand()%10;
                printf("➡️ Easy Mode\n\n");
                while(attempt_2 < 100)
                {
                    attempt_2++;
                    printf("--------------------\n");
                    printf("Player-2 Turn's:- \n");
                    printf("--------------------\n");
                    printf("Attempt:- %d\n", attempt_2);
                    printf("Guess the number:- ");
                    scanf("%d", &player_guess);
                    printf("--------------------\n");
                    (player_guess>random_number_2)?printf("Guess is higher\n\n"):printf("");
                    (player_guess<random_number_2)?printf("Guess is lower\n\n"):printf("");

                    if(player_guess == random_number_2)
                    {
                        p2 = attempt_2;
                        printf("-----------------------------------\n");
                        printf("Guess is correct, in %d attempts❗\n", attempt_2);
                        printf("-----------------------------------\n");
                        printf("Wanna See Results?[y/n]:- ");
                        scanf("%s", &player_result_choice);
                        if(player_result_choice == 'y')
                        {
                            clrscr();
                            if(p1 > p2)
                            {
                                printf("---------------------\n");
                                printf("Winner is Player-2❗\n");
                                printf("---------------------\n");

                                break;
                            }

                            else
                            {
                                if(p1 < p2)
                                {
                                    printf("---------------------\n");
                                    printf("Winner is Player-1❗\n");
                                    printf("---------------------\n");
                                }

                                else
                                {
                                    if( p1 == p2)
                                    {
                                        printf("---------------------\n");
                                        printf("It's a Tie❗\n");
                                        printf("---------------------\n");
                                    }

                                    else {}
                                }
                            }
                        }

                        else
                        {
                            break;
                        }
                        break;
                    }
                }
            }

            else
            {
                break;
            }
            break;
        }
    }
}

void GTN_Sim_Options_Game_Difficulty_Hard_Medium_Graphics()
{
    clrscr();
    int player_choice_for_menu;
    char re_attempt_choice, about_choice;
    printf("-------------------------------------\n");
    printf("  G.T.N Simulator \n");
    printf("(Guess The Number Sim)\n");
    printf("-------------------------------------\n");
    printf("            Graphics:- Medium\n");
    printf("                Mode:- Hard\n");
    printf("-------------------------------------\n");
    printf("   Game Menu:-   \n");
    printf("-------------------------------------\n");
    printf("[1️⃣] - Single Mode\n");
    printf("[2️⃣] - Double Mode\n");
    printf("[3️⃣] - Options\n");
    printf("[4️⃣] - about\n");
    printf("[5️⃣] - Exit\n");
    printf("-------------------------------------\n");
    printf("Choose [1-5]:- ");
    scanf("%d", &player_choice_for_menu);

    switch(player_choice_for_menu)
    {
    case 1:
        GTN_Sim_Single_Mode_Hard_Medium_Graphics();
        break;

    case 2:
        GTN_Sim_Double_Mode_Hard_Medium_Graphics();
        break;

    case 3:
        GTN_Sim_Options_Medium();
        break;

    case 4:
        printf("-----------------------------------------\n");
        printf("Welcome to GTN Simulator\n");
        printf("------------------------------------------\n");
        printf("➡️ It is developed by Kuroi_Maou_Rasetsu\n");
        printf("➡️ GTN - Guess The Number Simulator\n");
        printf("------------------------------------------\n");
        printf("➡️ Wanna Go Back?[y/n]:- ");
        scanf("%s", &about_choice);
        if(about_choice == 'y')
        {
            Menu_of_GTN_Sim_Medium_Graphics();
        }

        else
        {
            break;
        }
        break;

    case 5:
        break;



    default:
        printf("Invalid Choice!!\n");
        printf("Wanna Try again?[y/n]:- ");
        scanf("%s", &re_attempt_choice);
        if(re_attempt_choice == 'y')
        {
            Menu_of_GTN_Sim_Medium_Graphics();
        }

        else
        {
            break;
        }
    }
}

void GTN_Sim_Single_Mode_Hard_Medium_Graphics()
{
    clrscr();
    int random_number, player_guess, attempt = 0;
    srand(time(0));
    random_number = rand()%1000;
    printf("➡️ Hard Mode\n\n");
    while(attempt < 100)
    {
        attempt++;
        printf("---------------------------\n");
        printf("Attempt:- %d\n", attempt);
        printf("---------------------------\n");
        printf("Guess the number:- ");
        scanf("%d", &player_guess);
        printf("--------------------------- \n");
        (player_guess>random_number)?printf("Guess is higher\n\n"):printf("");
        (player_guess<random_number)?printf("Guess is lower\n\n"):printf("");

        if(player_guess == random_number)
        {
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("Guess is correct, in %d attempts❗\n", attempt);
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
            break;
        }
    }
}

void GTN_Sim_Double_Mode_Hard_Medium_Graphics()
{
    clrscr();
    int random_number,random_number_2, player_guess, attempt = 0, p1, p2, attempt_2;
    char player2_choice,player_result_choice;
    srand(time(0));
    random_number = rand()%1000;
    printf("➡️ Hard Mode");
    while(attempt < 100)
    {
        attempt++;
        printf("------------------------\n");
        printf("Player-1 Turn's:- \n");
        printf("------------------------\n");
        printf("Attempt:- %d\n", attempt);
        printf("Guess the number:- ");
        scanf("%d", &player_guess);
        printf("------------------------\n");
        (player_guess>random_number)?printf("Guess is higher\n\n"):printf("");
        (player_guess<random_number)?printf("Guess is lower\n\n"):printf("");

        if(player_guess == random_number)
        {
            p1 = attempt;
            printf("-----------------------------------\n");
            printf("Guess is correct, in %d attempts❗\n", attempt);
            printf("Player-2 ready?[y/n]:- ");
            scanf("%s", &player2_choice);
            if(player2_choice == 'y')
            {
                clrscr();
                srand(time(0));
                random_number_2 = rand()%1000;
                printf("➡️ Hard Mode\n\n");
                while(attempt_2 < 100)
                {
                    attempt_2++;
                    printf("--------------------\n");
                    printf("Player-2 Turn's:- \n");
                    printf("--------------------\n");
                    printf("Attempt:- %d\n", attempt_2);
                    printf("Guess the number:- ");
                    scanf("%d", &player_guess);
                    printf("--------------------\n");
                    (player_guess>random_number_2)?printf("Guess is higher\n\n"):printf("");
                    (player_guess<random_number_2)?printf("Guess is lower\n\n"):printf("");

                    if(player_guess == random_number_2)
                    {
                        p2 = attempt_2;
                        printf("-----------------------------------\n");
                        printf("Guess is correct, in %d attempts❗\n", attempt_2);
                        printf("-----------------------------------\n");
                        printf("Wanna See Results?[y/n]:- ");
                        scanf("%s", &player_result_choice);
                        if(player_result_choice == 'y')
                        {
                            clrscr();
                            if(p1 > p2)
                            {
                                printf("---------------------\n");
                                printf("Winner is Player-2❗\n");
                                printf("---------------------\n");

                                break;
                            }

                            else
                            {
                                if(p1 < p2)
                                {
                                    printf("---------------------\n");
                                    printf("Winner is Player-1❗\n");
                                    printf("---------------------\n");
                                }

                                else
                                {
                                    if( p1 == p2)
                                    {
                                        printf("---------------------\n");
                                        printf("It's a Tie❗\n");
                                        printf("---------------------\n");
                                    }

                                    else {}
                                }
                            }
                        }

                        else
                        {
                            break;
                        }
                        break;
                    }
                }
            }

            else
            {
                break;
            }
            break;
        }
    }
}

void Menu_of_GTN_Sim_High_Graphics()
{
    clrscr();
    int player_choice_for_menu;
    char re_attempt_choice, about_choice;
    printf("\n");
    printf("_____________________________________\n");
    printf("              🇬‌🇹‌🇳‌                   \n");
    printf("_____________________________________\n");
    printf("      🅶🆄🅴🆂🆂 🆃🅷🅴 🅽🆄🅼🅱🅴🆁          \n");
    printf("_____________________________________\n");
    printf("         🄶🅁🄰🄿🄷🄸🄲🅂:-🄷🄸🄶🄷            \n");
    printf("           🄼🄾🄳🄴:-🄽🄾🅁🄼🄰🄻            \n");
    printf("_____________________________________\n");
    printf(" G̷a̷m̷e̷ ̷M̷e̷n̷u̷ -                           \n");
    printf("_____________________________________\n");
    printf(" 1️⃣  ֆɨռɢʟɛ ʍօɖɛ                            \n");
    printf(" 2️⃣  𝔇𝔬𝔲𝔟𝔩𝔢 𝔐𝔬𝔡𝔢                           \n");
    printf(" 3️⃣  Ⲟⲣⲧⲓⲟⲛ𝛓                               \n");
    printf(" 4️⃣  ₳฿ØɄ₮₴                                \n");
    printf(" 5️⃣  乇乂丨ㄒ                                \n");
    printf("_____________________________________\n");
    printf("ꉓꃅꂦꂦꌗꍟ :-  ");
    scanf("%d", &player_choice_for_menu);

    switch(player_choice_for_menu)
    {
    case 1:
        GTN_Sim_Single_Mode_High_Graphics();
        break;

    case 2:
        GTN_Sim_Double_Mode_High_Graphics();
        break;

    case 3:
        GTN_Sim_Options_High();
        break;

    case 4:
        clrscr();
        printf("\n");
        printf(" 🇼‌🇪‌🇱‌🇨‌🇴‌🇲‌🇪‌ 🇹‌🇴‌ 🇬‌🇹‌🇳‌ 🇸‌🇮‌🇲‌🇺‌🇱‌🇦‌🇹‌🇴‌🇷‌ \n");
        printf("_____________________________________\n");
        printf("➡️ 𝑫𝒆𝒗𝒆𝒍𝒐𝒑𝒆𝒓 :- 𝑲𝒖𝒓𝒐𝒊 𝑴𝒂𝒐𝒖 𝑹𝒂𝒔𝒆𝒕𝒔𝒖\n");
        printf("_____________________________________\n");
        printf("➡️ ₩₳₦₦₳ ₲Ø ฿₳₵₭? [y/n]:- ");
        scanf("%s", &about_choice);
        if(about_choice == 'y')
        {
            Menu_of_GTN_Sim_High_Graphics();
        }

        else
        {
            break;
        }
        break;

    case 5:
        break;



    default:
        Default_High_Graphics();
    }
}

void GTN_Sim_Single_Mode_High_Graphics()    // GTN - Guess The Number
{
    clrscr();
    int random_number, player_guess, attempt = 0;
    srand(time(0));
    random_number = rand()%100;
    while(attempt < 100)
    {
        attempt++;
        printf("___________________________\n");
        printf("Ⱥէէҽʍքէ :- %d\n", attempt);
        printf("___________________________\n");
        printf("𝐆υ𝖾𝗌𝗌 𝐓ɦ𝖾 𝐍υꭑᑲ𝖾𝗋:- ");
        scanf("%d", &player_guess);
        (player_guess>random_number)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ɦ𝗂𝗀ɦ𝖾𝗋\n\n"):printf("");
        (player_guess<random_number)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ᥣⱺω𝖾𝗋\n\n"):printf("");

        if(player_guess == random_number)
        {
            printf("\n");
            printf("_____________________________________\n");
            printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 𝖼ⱺ𝗋𝗋𝖾𝖼𝗍, 𝗂𐓣 %d α𝗍𝗍𝖾ꭑρ𝗍𝗌❗\n", attempt);
            printf("_____________________________________\n");
            break;
        }
    }
}

void GTN_Sim_Double_Mode_High_Graphics()
{
    clrscr();
    int random_number,random_number_2, player_guess, attempt = 0, p1, p2, attempt_2;
    char player2_choice,player_result_choice;
    srand(time(0));
    random_number = rand()%100;

    while(attempt < 100)
    {
        attempt++;
        printf("___________________________\n");
        printf("𝑷𝒍𝒂𝒚𝒆𝒓-𝟏'𝒔 𝑻𝒖𝒓𝒏:- \n");
        printf("___________________________\n");
        printf("Ⱥէէҽʍքէ:- %d\n", attempt);
        printf("𝐆υ𝖾𝗌𝗌 𝐓ɦ𝖾 𝐍υꭑᑲ𝖾r:- ");
        scanf("%d", &player_guess);
        printf("___________________________\n");
        (player_guess>random_number)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ɦ𝗂𝗀ɦ𝖾𝗋\n\n"):printf("");
        (player_guess<random_number)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ᥣⱺω𝖾𝗋\n\n"):printf("");

        if(player_guess == random_number)
        {
            p1 = attempt;
            printf("_____________________________________\n");
            printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 𝖼ⱺ𝗋𝗋𝖾𝖼𝗍, 𝗂𐓣 %d α𝗍𝗍𝖾ꭑρ𝗍𝗌❗\n", attempt);
            printf("_____________________________________\n");
            printf("𝕻ᥣᥲᥡᥱr-2 𝕽ᥱᥲძᥡ? [y/n]:- ");
            scanf("%s", &player2_choice);
            if(player2_choice == 'y')
            {
                clrscr();
                srand(time(0));
                random_number_2 = rand()%100;
                while(attempt_2 < 100)
                {
                    attempt_2++;
                    printf("___________________________\n");
                    printf("𝑷𝒍𝒂𝒚𝒆𝒓-2'𝒔 𝑻𝒖𝒓𝒏:- \n");
                    printf("___________________________\n");
                    printf("Ⱥէէҽʍքէ:- %d\n", attempt_2);
                    printf("𝐆υ𝖾𝗌𝗌 𝐓ɦ𝖾 𝐍υꭑᑲ𝖾𝗋:- ");
                    scanf("%d", &player_guess);
                    printf("--------------------\n");
                    (player_guess>random_number_2)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ɦ𝗂𝗀ɦ𝖾𝗋\n\n"):printf("");
                    (player_guess<random_number_2)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ᥣⱺω𝖾𝗋\n\n"):printf("");

                    if(player_guess == random_number_2)
                    {
                        p2 = attempt_2;
                        printf("_____________________________________\n");
                        printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 𝖼ⱺ𝗋𝗋𝖾𝖼𝗍, 𝗂𐓣 %d α𝗍𝗍𝖾ꭑρ𝗍𝗌❗\n", attempt_2);
                        printf("_____________________________________\n");
                        printf("ωαηηα ѕєє яєѕυℓт? [y/n]:- ");
                        scanf("%s", &player_result_choice);
                        if(player_result_choice == 'y')
                        {
                            clrscr();
                            if(p1 > p2)
                            {
                                printf("_________________________\n");
                                printf("   𝕎𝕚𝕟𝕟𝕖𝕣 𝕚𝕤 ℙ𝕝𝕒𝕪𝕖𝕣-𝟙❗\n");
                                printf("_________________________\n");

                                break;
                            }

                            else
                            {
                                if(p1 < p2)
                                {
                                    printf("_________________________\n");
                                    printf("   𝕎𝕚𝕟𝕟𝕖𝕣 𝕚𝕤 ℙ𝕝𝕒𝕪𝕖𝕣-2❗\n");
                                    printf("_________________________\n");
                                }

                                else
                                {
                                    if( p1 == p2)
                                    {
                                        printf("_________________________\n");
                                        printf("        𝙄𝙩'𝙨 𝙖 𝙏𝙞𝙚❗\n");
                                        printf("_________________________\n");
                                    }

                                    else {}
                                }
                            }
                        }

                        else
                        {
                            break;
                        }
                        break;
                    }
                }
            }

            else
            {
                break;
            }
            break;
        }
    }
}

void GTN_Sim_Options_High()
{
    clrscr();
    int player_options_choice;
    char re_attempt_choice;
    printf("___________________________\n");
    printf("Ⲟⲣⲧⲓⲟⲛ𝛓 :- \n");
    printf("___________________________\n");
    printf("1️⃣  𝕲rᥲ⍴һіᥴs\n");
    printf("2️⃣  𝕲ᥲmᥱ 𝕯і𝖿𝖿іᥴᥙᥣ𝗍ᥡ\n");
    printf("3️⃣  𝔔𝔲𝔦𝔱 𝔱𝔬 𝔪𝔢𝔫𝔲\n");
    printf("4️⃣  乇乂丨ㄒ\n");
    printf("___________________________\n");
    printf("ꉓꃅꂦꂦꌗꍟ :- ");
    scanf("%d", &player_options_choice);
    switch(player_options_choice)
    {
    case 1:
        GTN_Sim_Options_Graphics_Option_High();
        break;

    case 2:
        GTN_Sim_Options_Game_Difficulty_High_Graphics();
        break;

    case 3:
        Menu_of_GTN_Sim_High_Graphics();
        break;

    case 4:
        break;

    default:
        Default_High_Graphics();
    }

}

void GTN_Sim_Options_Graphics_Option_High()
{
    clrscr();
    int graphics_choice;
    printf("___________________________\n");
    printf("G̷a̷m̷e̷ 𝕲rᥲ⍴һіᥴs\n");
    printf("___________________________\n");
    printf("1️⃣  Łøw\n");
    printf("2️⃣  🅼🅴🅳🅸🆄🅼\n");
    printf("3️⃣  🄷🄸🄶🄷\n");
    printf("4️⃣  𝔔𝔲𝔦𝔱 𝔱𝔬 𝔪𝔢𝔫𝔲\n");
    printf("5️⃣  乇乂丨ㄒ\n");
    printf("___________________________\n");
    printf("ꉓꃅꂦꂦꌗꍟ :- ");
    scanf("%d", &graphics_choice);
    switch(graphics_choice)
    {
    case 1:
        Menu_of_GTN_Sim();
        break;

    case 2:
        Menu_of_GTN_Sim_Medium_Graphics();
        break;

    case 3:
        Menu_of_GTN_Sim_High_Graphics();
        break;

    case 4:
        Menu_of_GTN_Sim_High_Graphics();
        break;

    case 5:
        break;

    default:
        Default_High_Graphics();
    }
}

void GTN_Sim_Options_Game_Difficulty_High_Graphics()
{
    clrscr();
    int difficulty_choice;
    printf("___________________________\n");
    printf("𝕲ᥲmᥱ 𝕯і𝖿𝖿іᥴᥙᥣ𝗍ᥡ\n");
    printf("___________________________\n");
    printf("1️⃣  ꫀꪖડꪗ\n");
    printf("2️⃣  🄽🄾🅁🄼🄰🄻\n");
    printf("3️⃣  ꫝꪖ𝕣ᦔ\n");
    printf("4️⃣  𝔔𝔲𝔦𝔱 𝔱𝔬 𝔪𝔢𝔫𝔲\n");
    printf("5️⃣  乇乂丨ㄒ\n");
    printf("___________________________\n");
    printf("ꉓꃅꂦꂦꌗꍟ :- ");
    scanf("%d", &difficulty_choice);
    switch(difficulty_choice)
    {
    case 1:
        GTN_Sim_Options_Game_Difficulty_Easy_High_Graphics();
        break;

    case 2:
        Menu_of_GTN_Sim_High_Graphics();
        break;

    case 3:
        GTN_Sim_Options_Game_Difficulty_Hard_High_Graphics();
        break;

    case 4:
        Menu_of_GTN_Sim_High_Graphics();
        break;

    case 5:
        break;

    default:
        Default_High_Graphics();
    }
}

void GTN_Sim_Options_Game_Difficulty_Easy_High_Graphics()
{
    clrscr();
    int player_choice_for_menu;
    char re_attempt_choice, about_choice;
    printf("\n");
    printf("_____________________________________\n");
    printf("              🇬‌🇹‌🇳‌                   \n");
    printf("_____________________________________\n");
    printf("      🅶🆄🅴🆂🆂 🆃🅷🅴 🅽🆄🅼🅱🅴🆁          \n");
    printf("_____________________________________\n");
    printf("         🄶🅁🄰🄿🄷🄸🄲🅂:-🄷🄸🄶🄷            \n");
    printf("           🄼🄾🄳🄴:- ꫀꪖડꪗ            \n");
    printf("_____________________________________\n");
    printf(" G̷a̷m̷e̷ ̷M̷e̷n̷u̷ -                           \n");
    printf("_____________________________________\n");
    printf(" 1️⃣  ֆɨռɢʟɛ ʍօɖɛ                            \n");
    printf(" 2️⃣  𝔇𝔬𝔲𝔟𝔩𝔢 𝔐𝔬𝔡𝔢                           \n");
    printf(" 3️⃣  Ⲟⲣⲧⲓⲟⲛ𝛓                               \n");
    printf(" 4️⃣  ₳฿ØɄ₮₴                                \n");
    printf(" 5️⃣  乇乂丨ㄒ                                \n");
    printf("_____________________________________\n");
    printf("ꉓꃅꂦꂦꌗꍟ :-  ");
    scanf("%d", &player_choice_for_menu);

    switch(player_choice_for_menu)
    {
    case 1:
        GTN_Sim_Single_Mode_Easy_High_Graphics();
        break;

    case 2:
        GTN_Sim_Double_Mode_Easy_High_Graphics();
        break;

    case 3:
        GTN_Sim_Options_High();
        break;

    case 4:
        clrscr();
        printf("\n");
        printf(" 🇼‌🇪‌🇱‌🇨‌🇴‌🇲‌🇪‌ 🇹‌🇴‌ 🇬‌🇹‌🇳‌ 🇸‌🇮‌🇲‌🇺‌🇱‌🇦‌🇹‌🇴‌🇷‌ \n");
        printf("_____________________________________\n");
        printf("➡️ 𝑫𝒆𝒗𝒆𝒍𝒐𝒑𝒆𝒓 :- 𝑲𝒖𝒓𝒐𝒊 𝑴𝒂𝒐𝒖 𝑹𝒂𝒔𝒆𝒕𝒔𝒖\n");
        printf("_____________________________________\n");
        printf("➡️ ₩₳₦₦₳ ₲Ø ฿₳₵₭? [y/n]:- ");
        scanf("%s", &about_choice);
        if(about_choice == 'y')
        {
            Menu_of_GTN_Sim_High_Graphics();
        }

        else
        {
            break;
        }
        break;

    case 5:
        break;



    default:
        printf("ⅈꪀꪜꪖꪶⅈᦔ ᥴꫝꪮⅈᥴꫀ❗\n");
        printf("𝕎𝕒𝕟𝕟𝕒 𝕋𝕣𝕪 𝔸𝕘𝕒𝕚𝕟? [y/n]:- ");
        scanf("%s", &re_attempt_choice);
        if(re_attempt_choice == 'y')
        {
            Menu_of_GTN_Sim_High_Graphics();
        }

        else
        {
            break;
        }
    }
}

void GTN_Sim_Single_Mode_Easy_High_Graphics()
{
    clrscr();
    int random_number, player_guess, attempt = 0;
    srand(time(0));
    random_number = rand()%10;
    while(attempt < 100)
    {
        attempt++;
        printf("___________________________\n");
        printf("Ⱥէէҽʍքէ :- %d\n", attempt);
        printf("___________________________\n");
        printf("𝐆υ𝖾𝗌𝗌 𝐓ɦ𝖾 𝐍υꭑᑲ𝖾𝗋:- ");
        scanf("%d", &player_guess);
        (player_guess>random_number)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ɦ𝗂𝗀ɦ𝖾𝗋\n\n"):printf("");
        (player_guess<random_number)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ᥣⱺω𝖾𝗋\n\n"):printf("");

        if(player_guess == random_number)
        {
            printf("\n");
            printf("_____________________________________\n");
            printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 𝖼ⱺ𝗋𝗋𝖾𝖼𝗍, 𝗂𐓣 %d α𝗍𝗍𝖾ꭑρ𝗍𝗌❗\n", attempt);
            printf("_____________________________________\n");
            break;
        }
    }
}

void GTN_Sim_Double_Mode_Easy_High_Graphics()
{
    clrscr();
    int random_number,random_number_2, player_guess, attempt = 0, p1, p2, attempt_2;
    char player2_choice,player_result_choice;
    srand(time(0));
    random_number = rand()%10;

    while(attempt < 100)
    {
        attempt++;
        printf("___________________________\n");
        printf("𝑷𝒍𝒂𝒚𝒆𝒓-𝟏'𝒔 𝑻𝒖𝒓𝒏:- \n");
        printf("___________________________\n");
        printf("Ⱥէէҽʍքէ:- %d\n", attempt);
        printf("𝐆υ𝖾𝗌𝗌 𝐓ɦ𝖾 𝐍υꭑᑲ𝖾r:- ");
        scanf("%d", &player_guess);
        printf("___________________________\n");
        (player_guess>random_number)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ɦ𝗂𝗀ɦ𝖾𝗋\n\n"):printf("");
        (player_guess<random_number)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ᥣⱺω𝖾𝗋\n\n"):printf("");

        if(player_guess == random_number)
        {
            p1 = attempt;
            printf("_____________________________________\n");
            printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 𝖼ⱺ𝗋𝗋𝖾𝖼𝗍, 𝗂𐓣 %d α𝗍𝗍𝖾ꭑρ𝗍𝗌❗\n", attempt);
            printf("_____________________________________\n");
            printf("𝕻ᥣᥲᥡᥱr-2 𝕽ᥱᥲძᥡ? [y/n]:- ");
            scanf("%s", &player2_choice);
            if(player2_choice == 'y')
            {
                clrscr();
                srand(time(0));
                random_number_2 = rand()%10;
                while(attempt_2 < 100)
                {
                    attempt_2++;
                    printf("___________________________\n");
                    printf("𝑷𝒍𝒂𝒚𝒆𝒓-2'𝒔 𝑻𝒖𝒓𝒏:- \n");
                    printf("___________________________\n");
                    printf("Ⱥէէҽʍքէ:- %d\n", attempt_2);
                    printf("𝐆υ𝖾𝗌𝗌 𝐓ɦ𝖾 𝐍υꭑᑲ𝖾𝗋:- ");
                    scanf("%d", &player_guess);
                    printf("--------------------\n");
                    (player_guess>random_number_2)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ɦ𝗂𝗀ɦ𝖾𝗋\n\n"):printf("");
                    (player_guess<random_number_2)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ᥣⱺω𝖾𝗋\n\n"):printf("");

                    if(player_guess == random_number_2)
                    {
                        p2 = attempt_2;
                        printf("_____________________________________\n");
                        printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 𝖼ⱺ𝗋𝗋𝖾𝖼𝗍, 𝗂𐓣 %d α𝗍𝗍𝖾ꭑρ𝗍𝗌❗\n", attempt_2);
                        printf("_____________________________________\n");
                        printf("ωαηηα ѕєє яєѕυℓт? [y/n]:- ");
                        scanf("%s", &player_result_choice);
                        if(player_result_choice == 'y')
                        {
                            clrscr();
                            if(p1 > p2)
                            {
                                printf("_________________________\n");
                                printf("   𝕎𝕚𝕟𝕟𝕖𝕣 𝕚𝕤 ℙ𝕝𝕒𝕪𝕖𝕣-𝟙❗\n");
                                printf("_________________________\n");

                                break;
                            }

                            else
                            {
                                if(p1 < p2)
                                {
                                    printf("_________________________\n");
                                    printf("   𝕎𝕚𝕟𝕟𝕖𝕣 𝕚𝕤 ℙ𝕝𝕒𝕪𝕖𝕣-2❗\n");
                                    printf("_________________________\n");
                                }

                                else
                                {
                                    if( p1 == p2)
                                    {
                                        printf("_________________________\n");
                                        printf("        𝙄𝙩'𝙨 𝙖 𝙏𝙞𝙚❗\n");
                                        printf("_________________________\n");
                                    }

                                    else {}
                                }
                            }
                        }

                        else
                        {
                            break;
                        }
                        break;
                    }
                }
            }

            else
            {
                break;
            }
            break;
        }
    }
}

void GTN_Sim_Options_Game_Difficulty_Hard_High_Graphics()
{
    clrscr();
    int player_choice_for_menu;
    char re_attempt_choice, about_choice;
    printf("\n");
    printf("_____________________________________\n");
    printf("              🇬‌🇹‌🇳‌                   \n");
    printf("_____________________________________\n");
    printf("      🅶🆄🅴🆂🆂 🆃🅷🅴 🅽🆄🅼🅱🅴🆁          \n");
    printf("_____________________________________\n");
    printf("         🄶🅁🄰🄿🄷🄸🄲🅂:-🄷🄸🄶🄷            \n");
    printf("           🄼🄾🄳🄴:- ꫝꪖ𝕣ᦔ            \n");
    printf("_____________________________________\n");
    printf(" G̷a̷m̷e̷ ̷M̷e̷n̷u̷ -                           \n");
    printf("_____________________________________\n");
    printf(" 1️⃣  ֆɨռɢʟɛ ʍօɖɛ                            \n");
    printf(" 2️⃣  𝔇𝔬𝔲𝔟𝔩𝔢 𝔐𝔬𝔡𝔢                           \n");
    printf(" 3️⃣  Ⲟⲣⲧⲓⲟⲛ𝛓                               \n");
    printf(" 4️⃣  ₳฿ØɄ₮₴                                \n");
    printf(" 5️⃣  乇乂丨ㄒ                                \n");
    printf("_____________________________________\n");
    printf("ꉓꃅꂦꂦꌗꍟ :-  ");
    scanf("%d", &player_choice_for_menu);

    switch(player_choice_for_menu)
    {
    case 1:
        GTN_Sim_Single_Mode_Hard_High_Graphics();
        break;

    case 2:
        GTN_Sim_Double_Mode_Hard_High_Graphics();
        break;

    case 3:
        GTN_Sim_Options_High();
        break;

    case 4:
        clrscr();
        printf("\n");
        printf(" 🇼‌🇪‌🇱‌🇨‌🇴‌🇲‌🇪‌ 🇹‌🇴‌ 🇬‌🇹‌🇳‌ 🇸‌🇮‌🇲‌🇺‌🇱‌🇦‌🇹‌🇴‌🇷‌ \n");
        printf("_____________________________________\n");
        printf("➡️ 𝑫𝒆𝒗𝒆𝒍𝒐𝒑𝒆𝒓 :- 𝑲𝒖𝒓𝒐𝒊 𝑴𝒂𝒐𝒖 𝑹𝒂𝒔𝒆𝒕𝒔𝒖\n");
        printf("_____________________________________\n");
        printf("➡️ ₩₳₦₦₳ ₲Ø ฿₳₵₭? [y/n]:- ");
        scanf("%s", &about_choice);
        if(about_choice == 'y')
        {
            Menu_of_GTN_Sim_High_Graphics();
        }

        else
        {
            break;
        }
        break;

    case 5:
        break;



    default:
        Default_High_Graphics();
    }
}

void GTN_Sim_Double_Mode_Hard_High_Graphics()
{
    clrscr();
    int random_number,random_number_2, player_guess, attempt = 0, p1, p2, attempt_2;
    char player2_choice,player_result_choice;
    srand(time(0));
    random_number = rand()%1000;

    while(attempt < 100)
    {
        attempt++;
        printf("___________________________\n");
        printf("𝑷𝒍𝒂𝒚𝒆𝒓-𝟏'𝒔 𝑻𝒖𝒓𝒏:- \n");
        printf("___________________________\n");
        printf("Ⱥէէҽʍքէ:- %d\n", attempt);
        printf("𝐆υ𝖾𝗌𝗌 𝐓ɦ𝖾 𝐍υꭑᑲ𝖾r:- ");
        scanf("%d", &player_guess);
        printf("___________________________\n");
        (player_guess>random_number)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ɦ𝗂𝗀ɦ𝖾𝗋\n\n"):printf("");
        (player_guess<random_number)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ᥣⱺω𝖾𝗋\n\n"):printf("");

        if(player_guess == random_number)
        {
            p1 = attempt;
            printf("_____________________________________\n");
            printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 𝖼ⱺ𝗋𝗋𝖾𝖼𝗍, 𝗂𐓣 %d α𝗍𝗍𝖾ꭑρ𝗍𝗌❗\n", attempt);
            printf("_____________________________________\n");
            printf("𝕻ᥣᥲᥡᥱr-2 𝕽ᥱᥲძᥡ? [y/n]:- ");
            scanf("%s", &player2_choice);
            if(player2_choice == 'y')
            {
                clrscr();
                srand(time(0));
                random_number_2 = rand()%1000;
                while(attempt_2 < 100)
                {
                    attempt_2++;
                    printf("___________________________\n");
                    printf("𝑷𝒍𝒂𝒚𝒆𝒓-2'𝒔 𝑻𝒖𝒓𝒏:- \n");
                    printf("___________________________\n");
                    printf("Ⱥէէҽʍքէ:- %d\n", attempt_2);
                    printf("𝐆υ𝖾𝗌𝗌 𝐓ɦ𝖾 𝐍υꭑᑲ𝖾𝗋:- ");
                    scanf("%d", &player_guess);
                    printf("--------------------\n");
                    (player_guess>random_number_2)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ɦ𝗂𝗀ɦ𝖾𝗋\n\n"):printf("");
                    (player_guess<random_number_2)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ᥣⱺω𝖾𝗋\n\n"):printf("");

                    if(player_guess == random_number_2)
                    {
                        p2 = attempt_2;
                        printf("_____________________________________\n");
                        printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 𝖼ⱺ𝗋𝗋𝖾𝖼𝗍, 𝗂𐓣 %d α𝗍𝗍𝖾ꭑρ𝗍𝗌❗\n", attempt_2);
                        printf("_____________________________________\n");
                        printf("ωαηηα ѕєє яєѕυℓт? [y/n]:- ");
                        scanf("%s", &player_result_choice);
                        if(player_result_choice == 'y')
                        {
                            clrscr();
                            if(p1 > p2)
                            {
                                printf("_________________________\n");
                                printf("   𝕎𝕚𝕟𝕟𝕖𝕣 𝕚𝕤 ℙ𝕝𝕒𝕪𝕖𝕣-𝟙❗\n");
                                printf("_________________________\n");

                                break;
                            }

                            else
                            {
                                if(p1 < p2)
                                {
                                    printf("_________________________\n");
                                    printf("   𝕎𝕚𝕟𝕟𝕖𝕣 𝕚𝕤 ℙ𝕝𝕒𝕪𝕖𝕣-2❗\n");
                                    printf("_________________________\n");
                                }

                                else
                                {
                                    if( p1 == p2)
                                    {
                                        printf("_________________________\n");
                                        printf("        𝙄𝙩'𝙨 𝙖 𝙏𝙞𝙚❗\n");
                                        printf("_________________________\n");
                                    }

                                    else {}
                                }
                            }
                        }

                        else
                        {
                            break;
                        }
                        break;
                    }
                }
            }

            else
            {
                break;
            }
            break;
        }
    }
}
void GTN_Sim_Single_Mode_Hard_High_Graphics()
{
    clrscr();
    int random_number, player_guess, attempt = 0;
    srand(time(0));
    random_number = rand()%1000;
    while(attempt < 100)
    {
        attempt++;
        printf("___________________________\n");
        printf("Ⱥէէҽʍքէ :- %d\n", attempt);
        printf("___________________________\n");
        printf("𝐆υ𝖾𝗌𝗌 𝐓ɦ𝖾 𝐍υꭑᑲ𝖾𝗋:- ");
        scanf("%d", &player_guess);
        (player_guess>random_number)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ɦ𝗂𝗀ɦ𝖾𝗋\n\n"):printf("");
        (player_guess<random_number)?printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 ᥣⱺω𝖾𝗋\n\n"):printf("");

        if(player_guess == random_number)
        {
            printf("\n");
            printf("_____________________________________\n");
            printf("𝐆υ𝖾𝗌𝗌 𝗂𝗌 𝖼ⱺ𝗋𝗋𝖾𝖼𝗍, 𝗂𐓣 %d α𝗍𝗍𝖾ꭑρ𝗍𝗌❗\n", attempt);
            printf("_____________________________________\n");
            break;
        }
    }
}
