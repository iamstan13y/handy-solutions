#include <stdio.h>

int main(){
    
int x, vote, spoilt=0, candidates[5]={0};

printf("Cast Your Vote For Any One of The Following Candidates:\n");
printf("1. ED\n2. Chamisa\n3. Chiwenga\n4. Team Mbanje\n5. Stanley\n");

while (x<10)
{
 scanf("%d", &vote);

switch(vote){
    case 1:
        candidates[0]+=1;
        break;
    case 2:
    candidates[1]+=1;
    break;
    case 3:
    candidates[2]+=1;
    break;
    case 4:
    candidates[3]+=1;
    break;
    case 5:
    candidates[4]+=1;
    break;
    default:
        spoilt+=1;
        break;
}
x++;
}
printf("\nRESULTS:\n");
for (x=0; x<5; x++)
{
    printf("Candidate:%d, Votes:%d\n", x+1, candidates[x]);
}
printf("Spoilt Ballots:%d", spoilt);


}