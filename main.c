#include<stdio.h>
#include<time.h>
#include<string.h>

int flip();
void tosses();

enum Throws {Heads = 1, Tails = 0};




int main() {
    tosses();
}

int flip(){
    int res = rand() % 2;
    if(res == 1){
        return 1;
    }
    else {
        return 0;
    }

}

void tosses(){
    srand(time(0));
        int hCount = 0, tCount = 0, n;
        printf("How many times do you want to throw the coin?: ");
        scanf("%d", &n);

        for(int i = 1; i <= n; i++){
            int res = flip();
            if(res == Heads){
                hCount++;
            } else tCount++;
        }

        printf("number of heads -> %d\n", hCount);
        printf("number of tails -> %d\n", tCount);

        while ( getchar() != '\n' );
        char toss[2];
        printf("Do you want to toss again - [y | n]? ");
        scanf("%c", &toss);

        if(strcasecmp(toss, "y") == 0){
           system("cls");
           while ( getchar() != '\n' );
           tosses();
        } else {
            system("cls");
            printf("Bye Bye!");
        }
}
