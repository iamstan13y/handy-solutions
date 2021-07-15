#include <stdio.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

struct cricket{
    char pname[20];
    char tname[20];
    float avg;

};

struct cricket arr_cricket[10];

//int main(){
// {
//     struct cricket arr_cricket[5];
//     int x;

//     for (x=0;x<5;x++){
//         printf("Enter Player Name:\n");
//         scanf("%s", &arr_cricket[x].pname);
//         printf("Enter Team Name:\n");
//         scanf("%s", &arr_cricket[x].tname);
//         printf("Enter Player Average:\n");
//         scanf("%f", &arr_cricket[x].avg);
//     }

// printf("NAME\t TEAM\t AVERAGE\t\n");

//     for (x=0;x<5;x++){
//         printf("%s\t %s\t %f\n", arr_cricket[x].pname, arr_cricket[x].tname, arr_cricket[x].avg);
//     }

// int x=0, vote;
// int votes[5]={0};
// int spoilt=0;
// printf("Vote For:\n 1.ED\n 2.Chamisa\n 3.Stan\n 4.Qwerty\n 5.Polo\n");

// while (x<=5)
// {
//     scanf("%d", &vote);

//     switch (vote)
//     {
//     case 1:
//         votes[0] += 1;
//         break;
//     case 2:
//         votes[1] += 1;
//         break;
//     case 3:
//         votes[2] += 1;
//         break;
//     case 4:
//         votes[3] += 1;
//         break;
//     case 5:
//         votes[4] += 1;
//         break;
//     default:
//         spoilt += 1;
//         break;
//     }
//     x++;
// }


// for (x=0;x<5;x++){
//     printf("Candidate %d., Votes: %d\n",x+1, votes[x]);
// }
// printf("%d", spoilt);
// }

// printf("\t\t*\n\n");
// printf("\t*\t\t*\n\n");
// printf("*\t\t\t\t*\n\n");
// printf("\t*\t\t*\n\n");
// printf("\t\t*\n\n");

int main()
{

    int a = 5, b = 8;

    if (a == 5 && (b = 9))
    {
        printf("Gorilla Glass=");
    }
    printf("%d %d", a, b);

    return 0;
}

// int num1;

// void square(int x){
//     int res=x*x;
//     printf("%d", res);
// }
// printf("%p", &num1);
