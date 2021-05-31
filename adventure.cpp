#include <iostream>
#include <windows.h>
#include <cstdlib>
// system("cls") -  clears screen
// Sleep(some number)
// -pauses for milliseconds

using namespace std;

void doScene();
void doScene(){
    cout << "You come back from a long day and it's midnight. You want to go to sleep, but feel like doing something else first. What will you do?" << endl;
    cout << "1) Pull an all-nighter" << endl;
    cout << "2) Go to sleep" << endl;
    cout << "3) Get a midnight snack" << endl;
    cout <<    "()___" << endl;
    cout << "()//__/)_________________()" << endl;
    cout << "||(___)//#/_/#/_/#/_/#()/||" << endl;
    cout << "||----|#| |#|_|#|_|#|_|| ||" << endl;
    cout << "||____|_|#|_|#|_|#|_|#||/||" << endl;
    cout << "||    |#|_|#|_|#|_|#|_||" << endl;
    int inputScene1;
    cin >> inputScene1;
    if(inputScene1 == 1){
      cout << "Uh oh, looks like you'll be taking your next nap in heaven...";
    }
    else if(inputScene1 == 2){
      cout << "A wise choice! Have a good nights rest. Forever that is...";
    }
    else if(inputScene1 == 3){
      cout << "Slithering out of your room, you proceed to get something to drink. What will it be?" << endl;
      cout << "1) Nothing at all" << endl;
      cout << "2) Orange juice" << endl;
      cout << "3) Milk" << endl;
      cout << "____________" << endl;
      cout << "<____________>" << endl;
      cout <<"|            |" << endl;
      cout <<"|            |" << endl;
      cout <<"|            |" << endl;
      cout << "\\          /" << endl;
      cout <<  "\\________/" << endl;
      cout <<     "||" << endl;
      cout <<     "||" << endl;
      cout <<     "||" << endl;
      cout <<     "||" << endl;
      cout <<  "___||___" << endl;
      cout <<" /   ||   \\" << endl;
      cout <<" \\________/" << endl;

      int inputScene2;
      cin >> inputScene2;
      if(inputScene2 == 1){
        cout << "That wasn't a very good choice...";

      }
      else if(inputScene2 == 2){
        cout << "Nice job! There's nothing like fresh OJ. ";
        cout << "What will you be up to next?" << endl;
        cout << "1) Saving the world!" << endl;
        cout << "2) Having a great day!" << endl;
        cout << "3) Still nothing...(hopefully not)" << endl;
cout << "   _____" << endl;
cout << " _/ _ _ \\_" << endl;
cout << "(o / | \\ o)" << endl;
cout << " || o|o | |" << endl;
cout << " | \\_|_/ |" << endl;
cout << " |  ___   |" << endl;
cout << " | (___)  |" << endl;
cout << " |\\_____/|" << endl;
cout << " | \\___/ |" << endl;
cout << " \\       /" << endl;
cout << "  \\__ __/" << endl;

        int inputScene3;
        cin >> inputScene3;
        if(inputScene3 == 1){
            cout << "That's absoulutely great, although it may never happen.";
        }
        else if(inputScene3 == 2){
            cout << "As always!";
        }
        else if(inputScene3 == 3){
            cout << "You should really take everyday as a day to improve upon yourself. That way, you may think better the next time.";
        }
        else{
        system ("cls");
        cout << "That's not right, try again!" << endl;
        Sleep(750);
        doScene();
        }
      }
      else if(inputScene2 == 3){
        cout << "Little did you know it was expired...";
      }
      else{
       system ("cls");
        cout << "That's not right, try again!" << endl;
        Sleep(750);
        doScene();
      }
    }
    else{
        system ("cls");
        cout << "That's not right, try again!" << endl;
        Sleep(750);
        doScene();
    }
}
int main() {
    doScene();
    return 0;
 }

