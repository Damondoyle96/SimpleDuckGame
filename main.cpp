#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <ctime>
#include <graphics.h>
using namespace std;

//changing some stuff for demo

// Change 2 for demo

int main() {
// CONSTANTS
float elephant_height = 2.61;
string elephant_name = "Penelope";
int elephant_age = 52;
srand(time(NULL));
int number = 6;
int result = 0;

// VARIABLES
 srand(time(0));
 string duckname;
 string ynanswer;
 string yncourt;
 int elephant_questions = 0;
 string rollornot;
 int burpdecision;
 int karendecision;
 int kmleft = 25;
 int duckcoins = 10;
 string play;
 string roll;
 int sarahchoice;
 int sarahtagsalong;
 int lionattack;
 string gambleorend;
 
// START



cout << "This game will be about a male duck. What would you like their name to be? ";
getline (cin, duckname); cout << "\n";

cout << "\nTo continue, click on the picture and press any key...\n\n";
initwindow(1300,1200,"Picture",600,50);
readimagefile("Duck.jpg",0,0,1300,1200);
getch();
closegraph();

 cout << "This is a game about a duck called "; cout << duckname; cout << ". "; cout << duckname; cout << " was alone for 2 years living off of snails in the pond where he was born. "
 "He is an yellow duck with an orange beak\nand was left by his parents when he was young so they could live a prominent life in Italy with their in-laws without the terrible weight of a baby in tow.\n"
         "The pond is located in between the Sahara desert and the Nile in Egypt. "
         "You will play the role of "; cout << duckname; cout << " and make decisions for him that will impact how the rest of his life will play out.\n"
         "Some answers you make could end the game, as "; cout << duckname; cout << " will die within the year without your help. You will have the opportunity to answer y or n to y/n questions. \n"
         "The aim of the game is to have enough Duckcoins by the time you reach the end of the game to be able to buy a house for him.\n \nWould you like to begin? y/n?: ";

 cin >> ynanswer; cout << "\n";
 system("cls"); 
while (ynanswer != "y") {
 if (ynanswer == "n") {
     cout << " \nOkay, I guess he will have to fend for himself :(";
     cout << "\n\n";
     system("pause");
     return 0;
 }
 else if (ynanswer == "y") {
     cout << "Great, here we go! \n \n";
 }
 else {
     cout << "That is an invalid answer. Please type y or n: \n";
     cin >> ynanswer;
 }}

// QUESTIONS FOR PENELOPE

cout << "One summer day, "; cout << duckname; cout << " was conducting his normal morning routine when he was suddenly interrupted by a loud noise off in the brush. \n"
         "It sounded nothing like anything he had ever heard. All of a sudden, a great big gray beast came stumbling out of the shrubs in what seemed like a frenzy.\n";

cout << "\nTo continue, click on the picture and press any key...\n\n";
initwindow(1300,1200,"Picture",600,50);
readimagefile("Elephant.jpg",0,0,1300,1200);
getch();
closegraph();         

cout << duckname;	 
cout << " watched as the big gray beast dived for the pond and started drinking greedily with its big long snout. He waited until the beast had finished drinking and calmed down before waddling up to them. \n \n"
         "You ask the beast some questions: \n"
         "1. What are you doing out here? \n"
         "2. What is your name? \n"
         "3. What are you exactly? \n"
         "4. My god you are ugly, how do you live with yourself? \n"
         "5. How old are you? \n"
         "6. How tall are you? \n"
         "7. Can I ask you some advice? I want to buy a house but I have no idea where to even start... \n \n"
         "Type one of the numbers above: ";
         
cin >> elephant_questions; cout << "\n";

while (elephant_questions != 7) {
 if (elephant_questions == 1) {
     cout << "The beast responds: 'I was strolling with my herd, and decided to take a nap in the shade. When I woke up I was alone and lost. \n"
     "I have been wandering around ever since and haven't had a drop of water to drink for the last week' \n";
     cout << "Ask another question: "; cin >> elephant_questions; cout << "\n";
 }
 if (elephant_questions == 2) {
     cout << "The beast responds: 'My name is "; cout << elephant_name; cout << ", thanks for asking'\n";
     cout << "Ask another question: "; cin >> elephant_questions; cout << "\n";
 }
 if (elephant_questions == 3) {
     cout << "The beast responds: 'I am a female Elephant. We roam the African sahara in herds usually'\n";
     cout << "Ask another question: "; cin >> elephant_questions; cout << "\n";
 }
 if (elephant_questions == 4) {
     cout << "The beast responds in kind, by holding you under the water. Now you are dead. Not the best question to ask...\n";
     cout << "\n\n";
     system("pause");
     return 0;
 }
 if (elephant_questions == 5) {
     cout << "The beast responds: 'I am "; cout << elephant_age; cout << " years old, which is getting pretty close to the end of my life' \n";
     cout << "Ask another question: "; cin >> elephant_questions; cout << "\n";
 }
 if (elephant_questions == 6) {
     cout << "The beast responds: 'I am "; cout << elephant_height; cout << "m tall, not too many male elephants like that, as I am taller than most of them' \n";
     cout << "Ask another question: "; cin >> elephant_questions; cout << "\n";
 }

 else {
     cout << "Please enter a number between 1 and 7: ";
     cin.clear();
     cin.ignore(10000,'\n');
     cin >> elephant_questions;
     cout << "\n";
 }
}

system("cls"); 

cout << "After getting aquainted with eachother, the elephant responds to your answer:\n\n'I can most likely help you with this,"
" but I will need something from you. Will you be my guide and lead me to the closest oasis so that I can meet back up with my herd? It just so happens that is where you can buy a house for 100 Duckcoins as well!' \n \n";
cout << "y/n?: ";
cin >> ynanswer;
 
while (ynanswer != "y") {
 if (ynanswer == "n") {
     cout << "\nAre you sure? :( The ducks story ends here, and he dies within the next year with no shelter... \n \n";
     cout << "Will you help her help you? y/n? ";
     cin >> ynanswer;
 }
 else {
     cout << "That is an invalid answer. Please type y or n. \n";
     cin >> ynanswer;
 }}
 
system("cls"); 

cout << "The elephant responds: 'Thank you so much. Please get your affairs in order and we can leave in the morning! \n \n";
cout << "The next morning, after securing a bladder of water for the trip, "; cout << duckname; cout << " and Penelope left the pond and started towards the closest oasis which was 50km to the west.\n"
        "To make the trip faster, "; cout << duckname; cout << " rides on top of Penelope and acts as lead navigator and scouts for danger.\n"
        "\nBefore arriving to the oasis, you will need to have aquired at least 100 duckcoins to buy a house, as inflation is up. You will have a series of chances to make some good coin along the journey. \n"
        "You were left with 10 duckcoins as inheritance money from your now dead parents, which is all the money you have saved";
     cout << "\n\n";
     system("pause");
     system("cls"); 
cout << "... 3 hours later... \nAs you were travelling along, you come across a Camel named Trevor. \n";

cout << "\nTo continue, click on the picture and press any key...\n\n";
initwindow(1300,1200,"Picture",600,50);
readimagefile("Camel.jpg",0,0,1300,1200);
getch();
closegraph();

system("cls"); 

cout<< "Trevor is a Merchant Camel who roams the desert looking for opportunities. \nAfter exchanging pleasantries, Trevor asks if you would like to play a game of dice\n\n";
 
cout << "Current Duckcoins: " << duckcoins << "\n\n";
cout << "Rules of the Game:\n==================\n";
cout << "You roll a six sided die.\nIf you roll a:\n"
        "1. You lose 5 Duckcoins\n"
        "2. You lose 3 Duckcoins\n"
        "3. You lose 1 Duckcoin\n"
        "4. You win 1 Duckcoin\n"
        "5. You win 3 Duckcoins\n"
        "6. You win 5 Duckcoins\n"
        "\nYou must be careful, as if you run out of Duckcoins, you may die from starvation as you can no longer afford to buy food. However, the merchant has just over 30 Duckcoins you may be able to take from him\n\n";

cout << "Do you want to play? y/n: ";
cin >> play;

while (play != "n") {
if (play == "n") 
{
    cout << "you decide to turn down the Camels offer and move on without trying your chances";
    goto skipgame;
}
        while (roll != "n") {
            result = rand() % number + 1;
            cout << "Do you want to roll the die? y/n?: ";
            cin >> roll;
            if (roll == "n") 
            {
                cout << "You decide not to roll the dice, and move on";
                goto quitgame;
            }
                switch (result)
                {
                case 1:
                    cin.clear();
                    cin.ignore(10000,'\n');
                    cout << "You roll a 1 and lose 5 Duckcoins";
                    duckcoins = (duckcoins - 5);
                    break;
                case 2:
                    cin.clear();
                    cin.ignore(10000,'\n');
                    cout << "You roll a 2 and lose 3 Duckcoins";
                    duckcoins = (duckcoins - 3);
                    break;
                case 3:
                    cin.clear();
                    cin.ignore(10000,'\n');
                    cout << "You roll a 3 and lose 1 Duckcoin";
                    duckcoins = (duckcoins - 1);
                    break;
                case 4:
                    cin.clear();
                    cin.ignore(10000,'\n');
                    cout << "You roll a 4 and win 1 Duckcoin";
                    duckcoins = (duckcoins + 1);
                    break;
                case 5:
                    cin.clear();
                    cin.ignore(10000,'\n');        
                    cout << "You roll a 5 and win 3 Duckcoins";
                    duckcoins = (duckcoins + 3);
                    break;
                case 6:
                    cin.clear();
                    cin.ignore(10000,'\n');  
                    cout << "You roll a 6 and win 5 Duckcoins";
                    duckcoins = (duckcoins + 5);
                    break;
                default:
                    cin.clear();
                    cin.ignore(10000,'\n');
                    cout << "Error";
                    break;
                }

cout << "\nYou now have " << duckcoins << " Duckcoins\n\n";
if (duckcoins < 1) 
            {
                cout << "\nYou have run out of Duckcoins and cant afford any food. Unfortunately you are dead :(\n";
                cout << "\n\n";
     			system("pause");
                return 0;
            }
if (duckcoins > 40) 
            {
                cout << "\nCongratulations! You have taken all of the Camel Merchants money, and he can no longer bet any money.\n";
                goto quitgame;
            }
}
}
skipgame:
quitgame:
	
cout << "\n\n";
system("pause");
system("cls"); 

//START BURP
cout << "\n\n" << duckname << " and Penelope continue your Journey and keep moving west\n\nIt has been slow going, as you get lost a few times along the way\n\nDuring one of the times you get lost, you stumble across a small blue bird that looks injured\n";

cout << "\ncontinue, click on the picture and press any key...\n\n";
initwindow(1300,1200,"Picture",600,50);
readimagefile("Bird.jpg",0,0,1300,1200);
getch();
closegraph();

system("cls"); 

cout<< "The bird see you both coming and cries out \n'Hello There! Please help me, my name is Burp and I was just doing some aerial maneuvers around here when I accidentally clipped my wing on some overhanging branch.\n"
"Not sure who put it there, but I will sue them if I get the chance... Anyway, would you be able to help me?'\n\n";

cout << "Current Duckcoins: " << duckcoins << "\n\n";
burpstart:
cout << "What would you like to do? \n \n"
         "1. Tell Burp that you don't have the means to help, and keep moving \n"
         "2. Use your emergency First Aid kit which cost you 5 duckcoins (fully heals him), or \n"
         "3. Slap on a make-shift bandage with what you have on you"
         "\n \n"
         "Type one of the numbers above: ";

cin >> burpdecision;
         switch (burpdecision)
                {
                case 1:
                    cout << "\n\nYou decide to let nature take it's course and keep moving. You are cold and calculating :(\n\n";

                    goto endburp;
                case 2:
                    if (duckcoins < 6) {
                        cout << "\n\nYou do not have enough coins to help Burp. Pick another option\n\n";
                        goto burpstart;
                    }
                    cout << "\n\nYou use your Emergency First Aid kit and Burp is now fully healed.\nBurp says 'Thank you so much. I don't know what I would have done if you 2 hadn't shown up. \nI have no reception out in these parts, so couldn't get a hold of a birdulance. Please accept this as a reward!'\n"
					"Burp promises to give you 30 duckcoins as appreciation for your efforts. As it cost you 5 duckcoins for the First Aid Kit, that makes a whopping 25 duckcoins in profit! Good job!\n\n";
					
					cout << "\n\n";
    				system("pause");
    				system("cls"); 
					
					cout << "Burp gets up and tells you to wait. 10 minutes later, he makes good on his promise and delivers the 30 duckcoins to you. He also has his family (wife and 3 kids) in tow, who also show their appreciation by giving you a flight show!\n\n ";
                    cout << "\nTo continue, click on the picture and press any key...\n\n";
					initwindow(1300,1200,"Picture",600,50);
					readimagefile("Flightshow.jpg",0,0,1300,1200);
					getch();
					closegraph();
                    duckcoins = (duckcoins + 25);
                    goto endburp;
                case 3:
                    cout << "\n\nYou bandage Burp up but it doesn't do too much. You leave Burp there and promise to send a burpulance the next time you get reception. \n\n";
                    goto endburp;
                default:
                    cout << "That input is invalid, please enter a number between 1 and 3!\n";
                    goto burpstart;
                }

endburp:
	
cout << "\n\n";
system("pause");
system("cls"); 
// FINISH BURP
cout << "Current Duckcoins: " << duckcoins << "\n\n";
cout << duckname << " and Penelope leave and travel an extra 5km in the day before finding shelter and sleeping the night. You only have " << kmleft << "km to go before reaching your destination\n\n";

// START KAREN THE CATERPILLAR

cout << "You get up the next morning to get ready for the days journey when you notice something out of the ordinary. There is a long green caterpillar going through your stuff and looks suspicious. "
"Before you can say anything, Penelope also notices the caterpillar, which happens to be near her foot. Penelope did what any elephant would do in this situation: Panic.\n\nPenolope screamed and got "
"up and started stomping around in a frenzy. Luckily, the caterpillar was unharmed. The caterpillar was able to calm Penelope down by not making any sudden moves and being calm. As Penelope was still "
"reeling from the ordeal, you decide to speak up. You say: 'Who are you and what are you doing rummaging through our things!'. The caterpillar responds: 'My name is Karen and this is my turf. I was "
"doing the rounds when I saw you two trespassing on my lands, so I decided to take whatever I wanted from your stuff as recompense. I found 20 coins here that should cover my costs..'\n\n";

cout << "\nTo continue, click on the picture and press any key...\n\n";
initwindow(1300,1200,"Picture",600,50);
readimagefile("Karen.jpg",0,0,1300,1200);
getch();
closegraph();
system("cls");

duckcoins = (duckcoins - 20);
if (duckcoins < 1) 
{
    cout << "\n\nIf you do not somehow get your money back from Karen, you will not have enough money to survive";
}

cout << "\nCurrent Duckcoins: " << duckcoins << "\n";
startkaren:
cout << "\n\nYour choices are:\n\n" 
    "1. Explain politely to Karen that you had no idea you were trespassing, and say sorry, but you would like the money back that she has taken\n"
    "2. Explain to Karen that there were no signs or fencing to say that she lived here, and that you had no way of knowing you were trespassing\n"
    "3. Call the caterpillar police (locally known as the catercops) and see if they can help\n"
    "4. Tell Penelope to stomp on Karen, and take your money back\n"
    "5. Try to negotiate with Karen and get your money back without involving the catercops\n"
    "6. Peck Karen with your beak to injure and shock her while you take the money back and run\n"
    "7. Accept that you were in the wrong and leave\n\n"
    "What would you like to do? ";

cin >> karendecision;
         switch (karendecision)
                {
                case 1:
                    cout << "\n\nYou try to explain, but Karen has none of it and tries to leave";
                    system("cls"); 
                    goto startkaren;
                case 2:
                    cout << "\n\nYou try to explain, but Karen says 'you should try to call the catercops if you think you are in the right' and then tries to leave";
                    system("cls"); 
                    goto startkaren;
                case 3:
                    cout << "\n\nYou call the catercops, and everyone waits while they arrive. After extensive arguing, the cops say you can take it up in court, but you will most likely lose the case, as you were indeed trespassing "
					"and Karen is a good friend of the caterjudge. But they also explain that you might be able to get the fine down to 600 catercoins, which converts to about 10 duckcoins.\n\nDo you wish to go down this route? or send them away and try something else? y/n: ";
                    cin >> yncourt; 
                    if (yncourt == "y")
                    {
						cout << "\n\nAfter a lengthy hearing in front of the Judge, you were able to get the fine down to 10 duckcoins.\n\nYou then go on to continue your journey after 'learning your lesson' by Karen.";
                        duckcoins = (duckcoins + 10);
                        goto endkaren;
                    }
                    if (yncourt == "n")
                    {
                        system("cls");
						cout << "\n\nYou send the catercops away and try something else";
                        goto startkaren;
                    }
                    else 
                    {
                    	system("cls"); 
                        cout << "\n\nThat is not a valid response. type y or n. You will be taken back to the questions";
                        goto startkaren;
                    }
                case 4:
                    cout << "\n\nPenelope stomps on Karen and you get your money back. You also find 1200 catercoins on her that she no doubt stole from other victims of her Trespassing scheme. This converts to roughly 20 duckcoins. Congratulations!\n\n";
                        cout << "\n\n";
    					system("pause");
					cout << "As you are leaving, you run into a smol "
					"and cute caterpillar called Sarah. She says: 'Thank you so much for squishing my mother. She was a mean old hag and beat me on a whim. I will tell the caterdetectives that a random stampede came through and she was just in the line of fire. Please get out of here as quickly as you can, and try not to be seen'. You feel sorry for Sarah but you do as she says";
                    duckcoins = (duckcoins + 40);
                    goto endkaren;
                case 5:
                	system("cls");
                    cout << "\n\nKaren has no intention of negotiating and even insults you. She starts to leave... ";
                    goto startkaren;
                case 6:
                    cout << "\n\nYou attack Karen with your beak and get lucky. She is still reeling in shock as you take your 20 coins back from the vile woman. You decide to run away as fast as you can before the catercops arrive";
                    duckcoins = (duckcoins + 20);
                    goto endkaren;
                case 7:
                    cout << "\n\nYou decide Karen is right and you should accept your losses. Karen leaves with a victorious shit eating grin on her face. \n\nAs you are packing up to leave, a smol and cute caterpillar comes to greet you. ";
                    
                    cout << "\nTo continue, click on the picture and press any key...\n\n";
					initwindow(1300,1200,"Picture",600,50);
					readimagefile("Sarah.jpg",0,0,1300,1200);
					getch();
					closegraph();	
					startsarah:	
					cout<< "She says 'Hi, my name is Sarah. I am so sorry about that, but my mother Karen has been running this trespassing scheme for years. Can you please help me? she beats me on a whim and the caterjudge is her good friend so there is nothing I can do.'\n\n Do you: \n"
                    "1. Help Sarah by confronting Karen again with the same options\n"
                    "2. Tell her that you do not wish to get in trouble and say no, and leave anyway, or\n"
                    "3. Take Sarah with you on your journey, to get her away from her abusive mother\n\nType a number between 1 and 3: ";
                    cin >> sarahchoice;
                        if (sarahchoice == 1)
                            {
                            	system("cls"); 
                                goto startkaren;
                            }
                        if (sarahchoice == 2)
                            {
                                cout << "you decide to take no action and leave as fast as you can";
                                goto endkaren;
                            }
                        if (sarahchoice == 3)
                            {
                                cout << "You take Sarah with you, and she gives you 10 duckcoins to cover her needs";
                                duckcoins = (duckcoins + 10);
                                sarahtagsalong = 1;
                                goto endkaren;
                            }
                        else 
                            {
                                system("cls"); 
								cout  << "That input is invalid, please enter a number between 1 and 3!\n";
                                goto startsarah;
                            }
                default:
                	system("cls");
                    cout << "That input is invalid, please enter a number between 1 and 7!\n";
                    goto startkaren;
                }
endkaren:

cout << "\n\nCurrent Duckcoins: " << duckcoins;

if (duckcoins < 1)
{
    cout << "\n\nYou do not have enough money to buy food to survive, and eventually die in the next few days... GAME OVER!";
    cout << "\n\n";
    system("pause");
    return 0;
}

// END KAREN THE CATERPILLAR

cout << duckname << " and Penolope";
if (sarahtagsalong == 1)
{
    cout << " and Sarah";
}

kmleft = (kmleft - 15);

cout << " move on quickly from the horrible place.";

    cout << "\n\n";
    system("pause");
    system("cls"); 
//START LION ATTACK
cout << "\n...5 hours later...\n It is now around lunch time and you see a small watering hole. You check your trusty map and see that you are now " << kmleft << "km from your destination";
cout << "\n\nYou are very thirsty and quickly gulp as much water as you can.\n ";

cout << "\n\n";
system("pause");

cout << "As you are filling up your water containers to stock up for the rest of the journey, you hear a scream from Penelope.\n"
    "She had spotted 3 lions sneaking up on a smol meerkat at the watering hole while you were drinking.";

cout << "\nTo continue, click on the picture and press any key...\n\n";
initwindow(1300,1200,"Picture",600,50);
readimagefile("Meerkat.jpg",0,0,1300,1200);
getch();
closegraph();

cout << "\nTo continue, click on the picture and press any key...\n\n";
initwindow(1300,1200,"Picture",600,50);
readimagefile("Lions.jpg",0,0,1300,1200);
getch();
closegraph();

cout<< " As they had lost the element of surprise and they didn't see your group as a threat, they decided to talk first. Meanwhile the Meerkat hid behind Penelope. The leader of the pack came up and said:\n\n"
"'Greetings prey, you ruined our hunt and now you must all pay with your lives.I will give you the chance to run, and then we will start the hunt. You have 5 minutes, I suggest you split up. Your time starts now' All 3 Lions then sat down and started counting\n\n";

cout << "\n\n";
system("pause");

startlionattack:

cout << "Knowing there is a good chance of death if you split up, do you:\n"
    "1. Do as they say and start running in different directions\n"
    "2. Take the next minute to discuss a strategy\n"
    "3. Attack with wild abandon and try to get them to flee\n"
    "4. Look around for something to use as a weapon, or\n"
    "5. Stay where you are and hope they don't see you (sacrifice Penelope and the Meerkat)\n"
    "6. Start all running in the same direction towards the oasis\n\n"
    
    "Type an answer between 1 and 6: ";

cin >> lionattack;
    
         switch (lionattack)
                {
                case 1:
                        cout << "\n\nYou all start running in different directions. Eventually they find all of you and eat you for lunch. GAME OVER!";
                        cout << "\n\n";
    					system("pause");
                        return 0;
                case 2:
                    if (sarahtagsalong == 1)
                    {
                        cout << "Sarah the caterpillar, ";
                    }
                        system("cls"); 
                    cout << duckname << " the Duck, Penelope the Elephant and the Meerkat named Tango get together in a small circle and start talking about options. after a minute of quick thinking, "
					"they come up with the following 'best options':\n\n- Look for weapons to fight with\n- Attack all at once hard and fast, and hope they flee.\nYou will now go back to the previous options:\n\n2";
                    goto startlionattack;
                case 3:
                    cout << "\n\nYou all start attacking with wild abandon. This confuses the sitting lions and they attack back but with caution. A wild battle ensues. You take some damage, but luckily, you shocked them enough to get them to flee";
                    cout << "\n\n You get carried to a local duckter (duck doctor) and they charge you 10 coins for their services. You all get out alive and well";
                    duckcoins = (duckcoins -10);
                    goto endlionattack;
                case 4:
                     if (sarahtagsalong == 1)
                    {
                        cout << "Sarah the caterpillar, ";
                    }
                    cout << duckname << " the Duck, Penelope the Elephant and the Meerkat named Tango get together in a small circle and decide to split up and look for weapons. After 4 minutes searching, "
					"They come back with the following weapons:\n\n- Penelope: A large log recently felled by the weather\n- Tango: Makes a bamboo shoot makes 3 small bolts to shoot with\n- You find a bow and "
					"some arrows but you dont have hands or opposable thumbs to shoot with";
                    if (sarahtagsalong == 1)
                    {
                        cout << "\n- Sarah: Sneakily squirms inside the ear of the leader to distract him during the fight";
                    }
                    cout << "\n\n";
    				system("pause");
                    cout << "\n\n Before the Lions are ready and can try to defend themselves, they are set upon by your group and you prevail with no losses and no injuries. "
					"You also now have 3 x lion pelts you can sell at market for 15 duckcoins each!";
                    duckcoins = (duckcoins + 45);
                    cout << "\n\nYou now have: " << duckcoins << " Duckcoins!";
                    goto endlionattack;
                case 5:
                    cout << "\n\nYou hide and watch as your comrades die. You hide for 3 days and nights and then, not happy with yourself for what you had done, you kill yourself. GAME OVER";
                    cout << "\n\n";
    				system("pause");
                    return 0;
                case 6:
                    cout << "\n\nYou all start running, but even with a headstart, you don't make it far enough. You are all run down by the lions and you all get eaten alive. Make better decisions. GAME OVER!";
                    cout << "\n\n";
    				system("pause");
                    return 0;
                default:
                	system("cls"); 
                    cout << "That input is invalid, please enter a number between 1 and 6!\n";
                    goto startlionattack;
                }
endlionattack:

cout << "\n\n";
system("pause");
system("cls"); 

cout << "You all decide to get to know eachother a little better, and Trever thanks you profusely for saving his life. He says 'I'm so sorry, but I don't have a penny to my name, otherwise I would give you all my life savings. "
"One day I will find you and repay my debt, but today I must go home to tell my parents about what happened today'. \n\n After Trevor leaves, you fill up your water skins like you tried to before the attack and then decided it "
"would be best to move on as fast as possible towards the oasis.";

cout << "\n\n";
system("pause");
system("cls"); 

cout << "\n\n...8hours later...\n\nYou arrive at the oasis, tired and worn from your travels. Penelope thanks you profusely and gives you 10 duckcoins as thanks \n She goes "
"on to find her herd and then become the first female herd leader in the world.";
cout << "\n\n";
system("pause");
if (sarahtagsalong = 1)
{
    cout << "\n\nSarah the Caterpillar also thanks you so much, and to show her appreciation, also gives you 15 duckcoins for your troubles. She goes on to eventually be transformed into a beautiful butterfly and becomes miss Oasis 2023.";
    
    cout << "\nTo continue, click on the picture and press any key...\n\n";
initwindow(1300,1200,"Picture",600,50);
readimagefile("SarahButterfly.jpg",0,0,1300,1200);
getch();
closegraph();
system("cls"); 

    duckcoins = (duckcoins + 15);
}

startgamble:
cout << "Current Duckcoins: " << duckcoins << " Duckcoins.";
if (duckcoins > 99)
{
	system("cls"); 
    cout << "\n\nCONGRATULATIONS!!! You now have enough money to buy a house at the oasis. In the coming years, " << duckname << " buys a house, gets a job as a snail cleaner (also free food for him). "
	"He also finds a nice wife called Olivia and they live happily ever after with 4 smol baby ducklings.";
	cout << "\nTo continue, click on the picture and press any key...\n\n";
	initwindow(1300,1200,"Picture",600,50);
	readimagefile("Duck.jpg",0,0,1300,1200);
	getch();
	closegraph();	
    cout << "\n\nTHE END";
    cout << "\n\nTHE END";
    cout << "\n\nTHE END";
    cout << "\n\nTHE END";
    cout << "\n\nTHE END";
    cout << "\n\nTHE END";
    cout << "\n\nTHE END";
    cout << "\n\nTHE END";


}


if (duckcoins < 1)
{
	system("cls"); 
    cout << "\n\nYou have no Duckcoins and can no longer afford to even gamble. While You don't die of starvation, you do not fulfill your dream of having a house and a duckwife...";
    cout << "\n\nTHE END";
    cout << "\n\nTHE END";
    cout << "\n\nTHE END";
    cout << "\n\nTHE END";
    cout << "\n\nTHE END";
    cout << "\n\nTHE END";
    cout << "\n\nTHE END";
    cout << "\n\nTHE END";
    cout << "\n\n";
	system("pause");
	return 0;
}

if (duckcoins < 99)
    {
    system("cls"); 
    cout << "\n\nIt is now time to buy a house at the oasis, but you do not have enough coins. would you like to go a gambing house to try your luck? Otherwise the game ends and you go back to the start.. y/n? ";
    cin >> gambleorend;
        if (gambleorend == "n")
        {
        return 0;
        }
        cout << "\n\nCurrent Duckcoins: " << duckcoins << "\n";
        if (gambleorend == "y")
        {
            cout << "\n\nRules of the Game:\n==================\n";
            cout << "As this is a gamling house, you now have unfair rules against you. You roll a six sided die.\nIf you roll a:\n"
                "1. You lose 20 Duckcoins\n"
                "2. You lose 15 Duckcoins\n"
                "3. You lose 10 Duckcoins\n"
                "4. You win 8 Duckcoins\n"
                "5. You win 13 Duckcoins\n"
                "6. You win 17 Duckcoins\n"
                "\nYou must be careful, as if you run out of Duckcoins, you may die from starvation as you can no longer afford to buy food. However, the gambling house has unlimited amounts of winnings\n\n"
                "Do you wish to play? y/n?: ";
                cin >> roll;
                if (roll == "n") 
                    {
                    system("cls"); 
                    cout << "You decide not to roll the dice, and move on ";
                    goto startgamble;
                    }
                while (roll != "n") 
                {
                result = rand() % number + 1;
                cout << "\nCurrent Duckcoins: " << duckcoins << " Duckcoins.";
                cout << "\nDo you want to roll the die? y/n? ";
                cin >> roll;
		                if (duckcoins < 1)
						{
						    goto startgamble;
						}
						if (duckcoins > 99)
						{
						    goto startgamble;
						}
                    if (roll == "n") 
                    {
                    cout << "You decide not to roll the dice, and move on ";
                    goto startgamble;
                    }
                switch (result)
                {
                case 1:
                    cin.clear();
                    cin.ignore(10000,'\n');
                    cout << "You roll a 1 and lose 20 Duckcoins";
                    duckcoins = (duckcoins - 20);
                    break;
                case 2:
                    cin.clear();
                    cin.ignore(10000,'\n');
                    cout << "You roll a 2 and lose 15 Duckcoins";
                    duckcoins = (duckcoins - 15);
                    break;
                case 3:
                    cin.clear();
                    cin.ignore(10000,'\n');
                    cout << "You roll a 3 and lose 10 Duckcoin";
                    duckcoins = (duckcoins - 10);
                    break;
                case 4:
                    cin.clear();
                    cin.ignore(10000,'\n');
                    cout << "You roll a 4 and win 8 Duckcoin";
                    duckcoins = (duckcoins + 8);
                    break;
                case 5:
                    cin.clear();
                    cin.ignore(10000,'\n');        
                    cout << "You roll a 5 and win 13 Duckcoins";
                    duckcoins = (duckcoins + 13);
                    break;
                case 6:
                    cin.clear();
                    cin.ignore(10000,'\n');  
                    cout << "You roll a 6 and win 18 Duckcoins";
                    duckcoins = (duckcoins + 18);
                    break;
                default:
                    cin.clear();
                    cin.ignore(10000,'\n');
                    cout << "Error";
                    break;
                        }
                }
endgamble:
cout << "\nYou now have " << duckcoins << " Duckcoins\n\n";
        }
    }
    cout << "\n\n";
	system("pause");
return 0;
}
