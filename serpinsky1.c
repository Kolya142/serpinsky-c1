#include <stdio.h>
#include <stdlib.h>
#include <string.h>    
#include <unistd.h> 

void proccessing(char* state) {char* old_state = malloc(25);
for (int i = 0; i < 25; i++) {old_state[i] = state[i];}
for (int i = 1; i < 25; i++)/*2o-dawjlajklsdklx*/ {if 
(old_state[i-1]) {state[i] ^= 1;}}free(old_state);
}int main() {printf("123");char* k = malloc(25);
k[0] = 1/*.,,alww;asc*/;char* screen = malloc(
80*25+1);/*sdw*/memset(screen, ' ', 80*25+1);
while (1) {proccessing(k);for (int j /*  */
= 0; j < 25/*c===*/; j++) {screen[j*80] = 
k[25-j] ? '#' : /*qk;a;s*/'-';for (int i 
= 79; i > 0; i--)/*234124*/ {screen[i+j
*80] =/*jwkalskd*/ screen[i-1+j*80];}}
int i = 0;/*awdascaw*/printf("\x1b[d"
"\x1b[H");/*2341dsa24*/for (int c = 
0; c/*2341dac24*/ < 80*25; c++) {
if /*234124as*/(i % 80 == 79) {
putchar/*23wowddda24*/('\n');}
else /*???????????*/{putchar(
screen[c]);/* sdjawkaklc*/}}
usleep(4e4/*dkawmls,c*/);}}
/*------------------------
-----------------------
0---dasdwdaowdwoasdlk
kfeakfk,sllkvxclvkl
jkealkwekwelkajw
zsdjndksewaas
kjlzkslwlqj
kdfsldfk
<kwoa
sdf
*/