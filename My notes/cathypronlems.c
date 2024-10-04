/*

XYZ company charges $18.50 for a telegram that does not exceed 12 words and
$1.50 for each succeeding word after 12 words. There's also a special
delivery and if its special delivery, its $5.00 extra.

Create function "compFee " that accepts the number of "words" in telegram and
the "type" of delivery, S for special and N for not special. After that, 
return the total charge to be paid.

*/

#include <stdio.h>

float compFee();

int main(){
    float res = compFee();
    printf("You pay %.2f dollars.", res);
    return 0;
}

float compFee(){
    int words;
    char type;
    float baseFee = 18.50;

    printf("How many words did you use? ");
    scanf("%d", &words);

    printf("Are you using special delivery (S for Yes, N for No)?: ");
    scanf(" %c", &type);

    if (words > 12){
        baseFee += (words - 12) * 1.50;
    }

    if (type = "S" && "s"){
        baseFee += 5.00;
    }

    return baseFee;

}