#include <bits/stdc++.h>
using namespace std ;
    // Code Giả
//        choose secretWord;
//        initialize guessedWord with ‘-’;
//        badGuessCount = 0;
//
//        do {
//        render game;
//            char guess = readAGuess;
//            if (secretWord contains guess) update guessedWord;
//            else badGuessCount++;
//        } while (game not over);
//        display game result;

string update1 (string upd1,char guess){
    upd1 = upd1 + guess + "   " ;
    return upd1  ;
}
string update2 (string upd2 , char guess){
    upd2 = upd2 +guess + "   ";
    return upd2 ;
}
string WORD_LIST[844] = {
        "angle",  "apple", "arch",  "army",
        "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
        "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
        "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
        "cake", "camera", "card",  "cart", "carriage",  "chain", "cheese", "chest",
        "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
        "cow",  "curtain", "cushion",
        "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine",
        "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
        "foot", "fork", "fowl", "frame", "garden", "girl", "glove", "goat", "gun",
        "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
        "hospital", "house", "island", "jewel",  "kettle", "key", "knee", "knife", "knot",
        "leaf", "leg", "library", "line", "lip", "lock",
        "map", "match", "monkey", "moon", "mouth", "muscle",
        "nail", "neck", "needle", "nerve",  "nose",
        "office", "orange", "oven", "parcel",  "pencil", "picture",
        "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
        "rail", "rat", "receipt", "ring", "rod", "roof", "root",
        "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
        "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
        "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
        "store", "street", "sun", "table", "tail", "thread", "throat", "thumb", "ticket",
        "toe", "tongue", "tooth", "town", "train", "tray", "tree", "trousers", "umbrella",
        "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm","able",
"about",
"account",
"acid",
"across",
"act",
"addition",
"adjustment",
"advertisement",
"after",
"again",
"against",
"agreement",

"almost",
"among",
"amount",
"amusement",
"and",
"angle",
"angry",
"animal",
"answer",
"ant",
"any",
"apparatus",
"apple",
"approval",
"arch",
"argument",
"arm",
"army",
"art",

"attack",
"attempt",
"attention",
"attraction",
"authority",
"automatic",
"awake",
"baby",
"back",

"balance",
"ball",
"band",
"base",
"basin",
"basket",
"bath",
"be",
"beautiful",
"because",
"bed",
"bee",
"before",
"behaviour",
"belief",
"bell",
"bent",
"berry",
"between",
"bird",
"birth",
"bit",
"bite",
"bitter",
"black",
"blade",
"blood",
"blow",
"blue",
"board",
"boat",
"body",
"boiling",
"bone",
"book",
"boot",
"bottle",
"box",
"boy",
"brain",
"brake",
"branch",
"brass",
"bread",
"breath",
"brick",
"bridge",
"bright",
"broken",
"brother",
"brown",
"brush",
"bucket",
"building",
"bulb",
"burn",
"burst",
"business",
"but",
"butter",
"button",
"cake",
"camera",
"canvas",
"card",
"care",
"carriage",
"cart",
"cat",
"cause",
"certain",
"chain",
"chalk",
"chance",
"change",
"cheap",
"cheese",
"chemical",
"chest",
"chief",
"chin",
"church",
"circle",
"clean",
"clear",
"clock",
"cloth",
"cloud",
"coal",
"coat",
"cold",
"collar",
"colour",
"comb",
"come",
"comfort",
"committee",
"common",
"company",
"comparison",
"competition",
"complete",
"complex",
"condition",
"connection",
"conscious",
"control",
"cook",
"copper",
"copy",
"cord",
"cork",
"cotton",
"cough",
"country",
"cover",
"cow",
"crack",
"credit",
"crime",
"cruel",
"crush",
"cry",
"cup",
"cup",
"current",
"curtain",
"curve",
"cushion",
"damage",
"danger",
"dark",
"daughter",
"day",
"dead",
"dear",
"death",
"debt",
"decision",
"deep",
"degree",
"delicate",
"dependent",
"design",
"desire",
"destruction",
"detail",
"development",
"different",
"digestion",
"direction",
"dirty",
"discovery",
"discussion",
"disease",
"disgust",
"distance",
"distribution",
"division",
"do",
"dog",
"door",
"doubt",
"down",
"drain",
"drawer",
"dress",
"drink",
"driving",
"drop",
"dry",
"dust",
"ear",
"early",
"earth",
"east",
"edge",
"education",
"effect",
"egg",
"elastic",
"electric",
"end",
"engine",
"enough",
"equal",
"error",
"even",
"event",
"ever",
"every",
"example",
"exchange",
"existence",
"expansion",
"experience",
"expert",
"eye",
"face",
"fact",
"fall",
"FALSE",
"family",
"far",
"farm",
"fat",
"father",
"fear",
"feather",
"feeble",
"feeling",
"female",
"fertile",
"fiction",
"field",
"fight",
"finger",
"fire",
"first",
"fish",
"fixed",
"flag",
"flame",
"flat",
"flight",
"floor",
"flower",
"fly",
"fold",
"food",
"foolish",
"foot",
"for",
"force",
"fork",
"form",
"forward",
"fowl",
"frame",
"free",
"frequent",
"friend",
"from",
"front",
"fruit",
"full",
"future",
"garden",
"general",
"get",
"girl",
"give",
"glass",
"glove",
"go",
"goat",
"gold",
"good",
"government",
"grain",
"grass",
"great",
"green",
"grey",
"grip",
"group",
"growth",
"guide",
"gun",
"hair",
"hammer",
"hand",
"hanging",
"happy",
"harbour",
"hard",
"harmony",
"hat",
"hate",
"have",
"he",
"head",
"healthy",
"hear",
"hearing",
"heart",
"heat",
"help",
"high",
"history",
"hole",
"hollow",
"hook",
"hope",
"horn",
"horse",
"hospital",
"hour",
"house",
"how",
"humour",
"I",
"ice",
"idea",
"if",
"ill",
"important",
"impulse",
"in",
"increase",
"industry",
"ink",
"insect",
"instrument",
"insurance",
"interest",
"invention",
"iron",
"island",
"jelly",
"jewel",
"join",
"journey",
"judge",
"jump",
"keep",
"kettle",
"key",
"kick",
"kind",
"kiss",
"knee",
"knife",
"knot",
"knowledge",
"land",
"language",
"last",
"late",
"laugh",
"law",
"lead",
"leaf",
"learning",
"leather",
"left",
"leg",
"let",
"letter",
"level",
"library",
"lift",
"light",
"like",
"limit",
"line",
"linen",
"lip",
"liquid",
"list",
"little",
"living",
"lock",
"long",
"look",
"loose",
"loss",
"loud",
"love",
"low",
"machine",
"make",
"male",
"man",
"manager",
"map",
"mark",
"market",
"married",
"mass",
"match",
"material",
"may",
"meal",
"measure",
"meat",
"medical",
"meeting",
"memory",
"metal",
"middle",
"military",
"milk",
"mind",
"mine",
"minute",
"mist",
"mixed",
"money",
"monkey",
"month",
"moon",
"morning",
"mother",
"motion",
"mountain",
"mouth",
"move",
"much",
"muscle",
"music",
"nail",
"name",
"narrow",
"nation",
"natural",
"near",
"necessary",
"neck",
"need",
"needle",
"nerve",
"net",
"new",
"news",
"night",
"no",
"noise",
"normal",
"north",
"nose",
"not",
"note",
"now",
"number",
"nut",
"observation",
"of",
"off",
"offer",
"office",
"oil",
"old",
"on",
"only",
"open",
"operation",
"opinion",
"opposite",
"or",
"orange",
"order",
"organization",
"ornament",
"other",
"out",
"oven",
"over",
"owner",
"page",
"pain",
"paint",
"paper",
"parallel",
"parcel",
"part",
"past",
"paste",
"payment",
"peace",
"pen",
"pencil",
"person",
"physical",
"picture",
"pig",
"pin",
"pipe",
"place",
"plane",
"plant",
"plate",
"play",
"please",
"pleasure",
"plough",
"pocket",
"point",
"poison",
"polish",
"political",
"poor",
"porter",
"position",
"possible",
"pot",
"potato",
"powder",
"power",
"present",
"price",
"print",
"prison",
"private",
"probable",
"process",
"produce",
"profit",
"property",
"prose",
"protest",
"public",
"pull",
"pump",
"punishment",
"purpose",
"push",
"put",
"quality",
"question",
"quick",
"quiet",
"quite",
"rail",
"rain",
"range",
"rat",
"rate",
"ray",
"reaction",
"reading",
"ready",
"reason",
"receipt",
"record",
"red",
"regret",
"regular",
"relation",
"religion",
"representative",
"request",
"respect",
"responsible",
"rest",
"reward",
"rhythm",
"rice",
"right",
"ring",
"river",
"road",
"rod",
"roll",
"roof",
"room",
"root",
"rough",
"round",
"rub",
"rule",
"run",
"sad",
"safe",
"sail",
"salt",
"same",
"sand",
"say",
"scale",
"school",
"science",
"scissors",
"screw",
"sea",
"seat",
"second",
"secret",
"secretary",
"see",
"seed",
"seem",
"selection",
"self",
"send",
"sense",
"separate",
"serious",
"servant",
"sex",
"shade",
"shake",
"shame",
"sharp",
"sheep",
"shelf",
"ship",
"shirt",
"shock",
"shoe",
"short",
"shut",
"side",
"sign",
"silk",
"silver",
"simple",
"sister",
"size",
"skin",

    };
const string FIGURE[] = {
         "                              -------------    \n"
         "                              |                \n"
         "                              |                \n"
         "                              |                \n"
         "                              |                \n"
         "                              |     \n"
         "                              -----   \n",

         "                              -------------    \n"
         "                              |           |    \n"
         "                              |                \n"
         "                              |                \n"
         "                              |                \n"
         "                              |     \n"
         "                            -----   \n",

         "                              -------------    \n"
         "                              |           |    \n"
         "                              |           O    \n"
         "                              |                \n"
         "                              |                \n"
         "                              |     \n"
         "                            -----   \n",
        "                              -------------    \n"
         "                              |           |    \n"
         "                              |           O    \n"
         "                              |           |    \n"
         "                              |                \n"
         "                              |     \n"
         "                            -----   \n",

         "                              -------------    \n"
         "                              |           |    \n"
         "                              |           O    \n"
         "                              |          /|    \n"
         "                              |                \n"
         "                              |     \n"
         "                            -----   \n",

         "                              -------------    \n"
         "                              |           |    \n"
         "                              |           O    \n"
         "                              |          /|\\  \n"
         "                              |                \n"
         "                              |     \n"
         "                            -----   \n",
                  "                              -------------    \n"
         "                              |           |    \n"
         "                              |           O    \n"
         "                              |          /|\\  \n"
         "                              |          /     \n"
         "                              |     \n"
         "                            -----   \n",

         "                              -------------    \n"
         "                              |           |    \n"
         "                              |           O    \n"
         "                              |          /|\\  \n"
         "                              |          / \\  \n"
         "                              |     \n"
         "                            -----   \n",


};
string chooseWord()
{
    srand(time(0)) ;
    int randomNumber = rand() % 843 ;
    return WORD_LIST[randomNumber] ;
}

bool contains(string secretWord , char guess)
{
    int len = secretWord.length() ;
    for (int i = 0 ; i <len ; i++)
    {
        if (guess == secretWord[i]){
            return true ;
        }
    }
    return false ;
}

char readAGuess()
{
    cout << "Chu Cai ma ban muon chon la :  " ;
    char guess ;
    cin >> guess ;
    return guess ;
}

void renderGame(string guessedword , int badguesscount , string upd1 , string upd2,int *score)
{
        int len = guessedword.length() ;
        cout << "\n   SCORE :   " <<*score ;
        cout <<"\n\n\n\n             Tu cua ban : "<<"      " <<guessedword << " " <<endl ;
        cout << endl <<  FIGURE[badguesscount] ;
        cout << "\n\n\n" << upd1 << "\n\n\n" << upd2 ;
        cout << "\n\n\n\n\n\n\n\n\n\ " ;





}

string update(string guessedWord, string secretWord,char guess )
{
    for (int i = secretWord.length() - 1; i >= 0; i--) {
        if (secretWord[i] == guess) {
            guessedWord[i] = guess;
        }
    }
    return guessedWord;
}

int RenderStart()
{
    cout << "\n \n _________________________________________GAME HANGMAN MADE BY HIEP____________________________________\n \n \n \n  "
                "                                                -------------                                                                                            \n"
                "                                               |           |    \n"
                "                                               |           O    \n"
                "                                               |          /|\\  \n"
                "                                               |          / \\  \n"
                "                                               |     \n"
                "                                             -----   \n" ;
 cout << "   _______________________________________________________________________________________________________\n\n\n" ;
        cout << "         Nhap 1 de bat dau tro choi , Nhap 2 de thoat tro choi :   " ;

        while(true)
        {
            int inp ; cin >> inp ;
            if(inp == 1) {
                cout << "\n \n \n \n \n \n \n \n \n \n \n \n\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n" ;
                break ;
            }
            if(inp == 2){
                return inp ;
            }
        }

}
    int main()
    {int inp ;
        inp = RenderStart() ;
        if (inp == 2) {
            return 0 ;
        }//GAME LOOP
        int *score = new int  ;
        int Van = 1 ;*score = 0 ;
        while (true)
        {
        string upd1 = "Chu cai ma ban da chon DUNG : " ;
        string upd2 = "Chu cai ma ban da chon SAI : " ;









        //Game Start


        string secretWord = chooseWord() ;
        int badGuessCount = 0 ;

        string guessedWord = "" ;

        for (int i = 1 ; i <= secretWord.length() ; i++)
        {
            guessedWord += "_" ;
        }


        do {
        renderGame(guessedWord, badGuessCount,upd1,upd2,score);
        char guess = readAGuess();
            if (contains(secretWord, guess)){
                guessedWord = update(guessedWord, secretWord, guess);
                upd1 = update1(upd1,guess) ;
                *score += 2 ;
                }
        else
        {
            badGuessCount++;
            upd2 = update2(upd2,guess) ;

        }
        } while (badGuessCount < 7 && secretWord != guessedWord);

        if (badGuessCount < 7){
                Van ++ ;
                *score += 20 ;
                cout <<"\n\n\n"<<"\n\n\n\n\n " <<"YOUR SCORE IS   " << *score <<endl<<endl << endl << "             OOOOOOOOOOO\n "
"         OOOOOOOOOOOOOOOOOOO\n"
"      OOOOOO  OOOOOOOOO  OOOOOO\n"
"    OOOOOO      OOOOO      OOOOOO\n"
"  OOOOOOOO  #   OOOOO  #   OOOOOOOO\n"
" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO                 An y de tiep tuc Van " << Van <<endl ;

cout << "OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO                An n de dung tro choi \n"
"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO\n"
"OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO\n"
" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO\n"
"  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO\n"
"    OOOOO   OOOOOOOOOOOOOOO   OOOO\n"
"      OOOOOO   OOOOOOOOO   OOOOOO\n"
"         OOOOOO         OOOOOO\n"
"             OOOOOOOOOOOO\n" << "\n\n\n\n " << "Congratulations! You win! "<<endl  ;


         }
        else
        {cout << endl << "                    You lost. The correct word is "
                     << secretWord << "\n\n\n\n\n" << FIGURE[7] <<"\n\n\n\n\n " <<"YOUR HIGH SCORE IS   " << *score  << "\n\n\n\n\n\n\n";
        *score = 0 ;
        string upd1 = "Chu cai ma ban da chon DUNG : "  ;
        string upd2 = "Chu cai ma ban da chon SAI : " ;

        cout << "Ban co muon replay ? YES/y - NO/n" ;


        }


        char res ; cin >> res ;

        if ( res == 'y' ){
            continue ;
        }

        if ( res == 'n' ){

         cout <<   "    YOUR HIGH SCORE IS  :   " << *score ;break ;
        }

        if (res != 'n' && res != 'y')
        {
            return 0 ;
        }

        }




        return 0 ;


    }
