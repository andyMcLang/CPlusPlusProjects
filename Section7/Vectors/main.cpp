// Section 7
// Vectors

#include <iostream>
#include <vector> // don't forger this in order to use vectors

using namespace std;

int main()
{

    // vector <char> vowels; // empty
    // vector <char> vowels (5); // initialized to zero

    /*
    vector<char> vowels{ 'a', 'e', 'i', 'o', 'u' };

    cout << vowels[0] << endl;
    cout << vowels[4] << endl;

    vector<int> test_scores{ 100, 98, 89 };

    cout << "\nTest scores using array syntax:" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "\nEnter 3 test scores: ";
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nUpdated test scores using vector syntax:" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    cout << "\nEnter a test score to add to the vector:";

    int score_to_add{ 0 };
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "\nEnter on more test score to add to the vector:";

    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "\nTest scores are now:" << endl;

    for(int numero : test_scores) {
        cout << numero << endl;
    }
    */

    // Example of a 2D-vector

    vector<vector<int>> movie_ratings{ { 1, 2, 3, 4 }, { 1, 2, 4, 4 }, { 1, 3, 4, 5 } };

    cout << "\nHere are the movie rating for reviewer #1 using array syntax:" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;
    
    cout << " ================================ \n" << endl;
    
    cout << movie_ratings.at(1).at(0) << endl;
    cout << movie_ratings.at(1).at(1) << endl;
    cout << movie_ratings.at(1).at(2) << endl;
    cout << movie_ratings.at(1).at(3) << endl;

    return 0;
}

// 59. Accessing and Modifying Vector Elements