#include <iostream>
#include <Windows.h>
using namespace std;
//Initialising Variables
bool snakeGame;
enum game { MAIN, START };
int menu = 0;
game mode;
const int width = 25;
const int height = 25;
//User Variables
int x, y, spd = 1;
int tailX[100], tailY[100], tailLength;
int fposX, fposY, sposX, sposY;
//Target Variables
int targetX, targetY;
//Game Variables
int score;
enum directions { STOP = 0, UP, DOWN, LEFT, RIGHT };
directions dir;
void game_Over() {
tailLength = 0;
score = 0;
mode = MAIN;
}
void game_Setup() {
snakeGame = true;
mode = MAIN;
}
void main_Menu() {
system("cls");
cout << "This Is the Main Menu." << endl;
if (menu == 0) {
cout << ">> Play the Game." << endl;
cout << "Options" << endl;
cout << "End Game" << endl;
}
else if (menu == 1) {
cout << "Play the Game." << endl;
cout << ">> Options" << endl;
cout << "End Game" << endl;
}
else if (menu == 2) {
cout << "Play the Game." << endl;
cout << "Options" << endl;
cout << ">> End Game" << endl;
}
if (GetAsyncKeyState(VK_RETURN)) {
switch (menu) {
case 0:
mode = START;
break;
case 1:
return;
break;
case 2:
exit(0);
break;
}
}
else if (GetAsyncKeyState(VK_LEFT) || GetAsyncKeyState('A')) {
dir = STOP;
}
else if (GetAsyncKeyState(VK_RIGHT) || GetAsyncKeyState('D')) {
dir = STOP;
}
else if (GetAsyncKeyState(VK_DOWN) || GetAsyncKeyState('S')) {
dir = STOP;
menu++;
Sleep(50);
}
else if (GetAsyncKeyState(VK_UP) || GetAsyncKeyState('W')) {
dir = STOP;
menu--;
Sleep(50);
}
if (menu <= -1) {
menu = 2;
}
else if (menu >= 3) {
menu = 0;
}
}
void normal_Setup() {
//Starting direction NOT MOVING
dir = STOP;
//Setting player and target start point
x = rand() % width;
y = rand() % height;
targetX = rand() % width;
targetY = rand() % height;
//Error when target and player are on top
while (x == targetX && y == targetY) {
x = rand() % width;
y = rand() % height;
targetX = rand() % width;
targetY = rand() % height;
}
score = 0;
}
void game_Window() {
system("cls");
//Top Border
for (int i = 0; i < width; i++) {
cout << "*";
}
cout << endl;
//Body
for (int i = 0; i < height; i++) {
for (int j = 0; j < width; j++) {
if (j == 0 || j == width - 1) {
cout << "*";
}
else if (i == y && j == x) {
cout << "S";
}
else if (i == targetY && j == targetX) {
cout << "O";
}
else {
bool print = false;
for (int k = 0; k < tailLength; k++) {
if (tailX[k] == j && tailY[k] == i) {
cout << "s";
print = true;
}
}
if (!print) {
cout << " ";
}
}
}
cout << endl;
}
//Bottom Borders
for (int i = 0; i < width; i++) {
cout << "*";
}
cout << endl;
//Score board
cout << "Score: " << score;
}
void game_Input() {
if (mode == START) {
if ((GetAsyncKeyState(VK_LEFT) || GetAsyncKeyState('A')) && dir != RIGHT) {
dir = LEFT;
}
else if ((GetAsyncKeyState(VK_RIGHT) || GetAsyncKeyState('D')) && dir != LEFT) {
dir = RIGHT;
}
else if ((GetAsyncKeyState(VK_DOWN) || GetAsyncKeyState('S')) && dir != UP) {
dir = DOWN;
}
else if ((GetAsyncKeyState(VK_UP) || GetAsyncKeyState('W')) && dir != DOWN) {
dir = UP;
}
else if (GetAsyncKeyState(VK_RETURN)) {
return;
}
}
}
void game_Program() {
//Tail Location
fposX = tailX[0];
fposY = tailY[0];
tailX[0] = x;
tailY[0] = y;
for (int i = 1; i < tailLength; i++) {
sposX = tailX[i];
sposY = tailY[i];
tailX[i] = fposX;
tailY[i] = fposY;
fposY = sposY;
fposX = sposX;
while (tailX[i] == targetX && tailY[i] == targetY) {
targetX = rand() % width;
targetY = rand() % height;
}
}
//Move Snake
switch (dir) {
case LEFT:
x -= spd;
break;
case UP:
y -= spd;
break;
case RIGHT:
x += spd;
break;
case DOWN:
y += spd;
break;
}
//Snake Border Hit
if (x <= 0 || x >= width - 1 || y < 0 || y > height - 1) {
game_Over();
}
for (int i = 0; i < tailLength; i++) {
if (tailX[i] == x && tailY[i] == y) {
game_Over();
}
}
//Snake Target Hit
if (x == targetX && y == targetY) {
targetX = rand() % width;
targetY = rand() % height;
score += 10;
tailLength++;
}
}
int main() {
game_Setup();
while (snakeGame == true) {
if (mode == MAIN) {
main_Menu();
}
else if (mode == START) {
normal_Setup();
while (mode == START) {
game_Window();
game_Input();
game_Program();
Sleep(25);
}
}
}
}