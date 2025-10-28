#include <iostream>

/* Answer patterns:                     Q1  Q2  Q3
 * green hats                           T   F   F
 * red hats                             T   T   F
 * orange hats (always lie)             F   F   F
 * orange hats (always tell the truth)  T   T   T
*/

int main() {
    uint numberOfDwarfs = 43;
    uint q1NumberOfYesAnswers = 34;
    uint q2NumberOfYesAnswers = 26;
    uint q3NumberOfYesAnswers = 11;

    uint orangeHatsAlwaysTrue = q3NumberOfYesAnswers;
    uint redHatsDwarfs = q2NumberOfYesAnswers - orangeHatsAlwaysTrue;
    uint greenHatsDwarfs = q1NumberOfYesAnswers - redHatsDwarfs - orangeHatsAlwaysTrue;
    uint orangeHatsDwarfs = numberOfDwarfs - greenHatsDwarfs - redHatsDwarfs;

    if (orangeHatsAlwaysTrue < 0 || orangeHatsDwarfs < 0 || greenHatsDwarfs < 0 || redHatsDwarfs < 0) {
        std::cout << "Invalid input" << std::endl;
        return 1;
    }
    if (orangeHatsDwarfs + greenHatsDwarfs + redHatsDwarfs != numberOfDwarfs) {
        std::cout << "Inconsistent data" << std::endl;
        return 1;
    }

    std::cout << "Question: How many Dwarfs with orange hats attended the party?" << std::endl;
    std::cout << "Answer: Dwarfs wearing orange hats: " << orangeHatsDwarfs << std::endl;
    return 0;
}
