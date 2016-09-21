{"changed":true,"filter":false,"title":"pig.cpp","tooltip":"/cs010_assignments/assignment05/pig.cpp","value":"//  =============== BEGIN ASSESSMENT HEADER ================\n/// @file pig.cpp \n/// @brief assn5/Monte Carlo: Pig\n///\n/// @author Daria Shkut [dshku001@ucr.edu]\n/// @date May 14, 2015\n///\n/// @par Plagiarism Section\n/// I hereby certify that I have not received assistance on this assignment, \n/// or used code, from ANY outside source other than the instruction team.\n//  ================== END ASSESSMENT HEADER ===============\n\n#include<ctime>\n#include<iomanip>\n#include<string>\n#include<iostream>\n#include<stdlib.h>\nusing namespace std;\n\nint genRandInt (int min, int max) {\n    \n    int randInt = 0;\n    \n    randInt = (rand() % (max - min + 1)) + min;\n    \n    return randInt;\n}\n    \n    \n\nint singleTurn (int holdValue)\n{\n    int holdAtN = 0;\n    int randInt = 0;\n    int isScore = 0;\n  \n  \n    while ((isScore < holdValue) && (randInt != 1)) \n    {\n        \n        randInt = genRandInt(1, 6);    \n            \n        if (randInt == 1) \n        {\n            isScore  = 0;\n        }\n        \n        else if ((randInt > 1) && (randInt <=6))\n        {\n            isScore = randInt + isScore;\n        }\n        \n    }\n\n   \n        \n    return isScore;\n    \n}\n    \n    \nint main() {\n    \n    //declare variables\n    int randInt = 0;\n    int holdValue = 0;\n    int holdAtN = 0;\n    int isScore = 0;\n    \n    int score0 = 0;\n    int score1 = 0;\n    int score2 = 0; \n    int score3 = 0; \n    int score4 = 0; \n    int score5 = 0;\n    int score6 = 0;\n    srand(time(0));\n    \n    randInt = genRandInt(1, 6);\n    \n    cout << \"What value should we hold at? \" << endl;\n    cin >> holdValue;\n    \n    cout << \"Hold-at-N turn simulations? \" << endl;\n    cin >> holdAtN;\n    cout << endl;\n   \n    \n    for (int i = 0; i < holdAtN; i++) \n    {\n        isScore = singleTurn(holdValue);\n        \n        if (isScore == holdValue) {\n            score1++;\n            }\n        else if (isScore == (holdValue + 1)) {\n            score2++;\n            }\n        else if (isScore == (holdValue + 2)) {\n            score3++;\n            }\n        else if (isScore == (holdValue + 3)) {\n            score4++;\n            }\n        else if (isScore == (holdValue + 4)) {\n            score5++;\n            }\n        else if (isScore == (holdValue + 5)) {\n            score6++;\n            }\n        else if (isScore == 0) {\n            score0++;\n        }\n    \n    }\n    \n\n    cout << fixed << setprecision(6);\n    \n    cout << \"Score\\tEstimated Probability\" << endl;\n    cout << \"0\\t\" << static_cast<double>(score0) / holdAtN << endl;\n    cout << holdValue << \"\\t\" << static_cast<double>(score1) / holdAtN \n        << endl;\n    cout << holdValue + 1 << \"\\t\" << static_cast<double>(score2) / holdAtN \n        << endl;\n    cout << holdValue + 2 << \"\\t\" << static_cast<double>(score3) / holdAtN \n        << endl;\n    cout << holdValue + 3 << \"\\t\" << static_cast<double>(score4) / holdAtN \n        << endl;\n    cout << holdValue + 4 << \"\\t\" << static_cast<double>(score5) / holdAtN \n        << endl;\n    cout << holdValue + 5 << \"\\t\" << static_cast<double>(score6) / holdAtN \n        << endl;\n    \n    \n    return 0;\n}\n","undoManager":{"mark":100,"position":100,"stack":[[{"start":{"row":47,"column":12},"end":{"row":47,"column":13},"action":"remove","lines":[" "],"id":3183}],[{"start":{"row":41,"column":12},"end":{"row":42,"column":0},"action":"insert","lines":["",""],"id":3184},{"start":{"row":42,"column":0},"end":{"row":42,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":41,"column":8},"end":{"row":41,"column":35},"action":"insert","lines":["randInt = genRandInt(1, 6);"],"id":3185}],[{"start":{"row":53,"column":8},"end":{"row":53,"column":35},"action":"remove","lines":["randInt = genRandInt(1, 6);"],"id":3186}],[{"start":{"row":53,"column":4},"end":{"row":53,"column":8},"action":"remove","lines":["    "],"id":3187}],[{"start":{"row":53,"column":0},"end":{"row":53,"column":4},"action":"remove","lines":["    "],"id":3188}],[{"start":{"row":52,"column":8},"end":{"row":53,"column":0},"action":"remove","lines":["",""],"id":3189}],[{"start":{"row":48,"column":13},"end":{"row":48,"column":14},"action":"insert","lines":["i"],"id":3190}],[{"start":{"row":48,"column":14},"end":{"row":48,"column":15},"action":"insert","lines":["f"],"id":3191}],[{"start":{"row":48,"column":15},"end":{"row":48,"column":16},"action":"insert","lines":[" "],"id":3192}],[{"start":{"row":48,"column":16},"end":{"row":48,"column":18},"action":"insert","lines":["()"],"id":3193}],[{"start":{"row":48,"column":17},"end":{"row":48,"column":18},"action":"insert","lines":["r"],"id":3194}],[{"start":{"row":48,"column":18},"end":{"row":48,"column":19},"action":"insert","lines":["a"],"id":3195}],[{"start":{"row":48,"column":19},"end":{"row":48,"column":20},"action":"insert","lines":["n"],"id":3196}],[{"start":{"row":48,"column":20},"end":{"row":48,"column":21},"action":"insert","lines":["d"],"id":3197}],[{"start":{"row":48,"column":21},"end":{"row":48,"column":22},"action":"insert","lines":["I"],"id":3198}],[{"start":{"row":48,"column":22},"end":{"row":48,"column":23},"action":"insert","lines":["N"],"id":3199}],[{"start":{"row":48,"column":23},"end":{"row":48,"column":24},"action":"insert","lines":["t"],"id":3200}],[{"start":{"row":48,"column":23},"end":{"row":48,"column":24},"action":"remove","lines":["t"],"id":3201}],[{"start":{"row":48,"column":22},"end":{"row":48,"column":23},"action":"remove","lines":["N"],"id":3202}],[{"start":{"row":48,"column":22},"end":{"row":48,"column":23},"action":"insert","lines":["n"],"id":3203}],[{"start":{"row":48,"column":23},"end":{"row":48,"column":24},"action":"insert","lines":["t"],"id":3204}],[{"start":{"row":48,"column":17},"end":{"row":48,"column":18},"action":"insert","lines":["("],"id":3205}],[{"start":{"row":48,"column":25},"end":{"row":48,"column":26},"action":"insert","lines":[" "],"id":3206}],[{"start":{"row":48,"column":26},"end":{"row":48,"column":27},"action":"insert","lines":[">"],"id":3207}],[{"start":{"row":48,"column":27},"end":{"row":48,"column":28},"action":"insert","lines":[" "],"id":3208}],[{"start":{"row":48,"column":28},"end":{"row":48,"column":29},"action":"insert","lines":["1"],"id":3209}],[{"start":{"row":48,"column":30},"end":{"row":48,"column":31},"action":"insert","lines":[" "],"id":3210}],[{"start":{"row":48,"column":31},"end":{"row":48,"column":32},"action":"insert","lines":["$"],"id":3211}],[{"start":{"row":48,"column":32},"end":{"row":48,"column":33},"action":"insert","lines":["$"],"id":3212}],[{"start":{"row":48,"column":32},"end":{"row":48,"column":33},"action":"remove","lines":["$"],"id":3213}],[{"start":{"row":48,"column":31},"end":{"row":48,"column":32},"action":"remove","lines":["$"],"id":3214}],[{"start":{"row":48,"column":31},"end":{"row":48,"column":32},"action":"insert","lines":["&"],"id":3215}],[{"start":{"row":48,"column":32},"end":{"row":48,"column":33},"action":"insert","lines":["&"],"id":3216}],[{"start":{"row":48,"column":33},"end":{"row":48,"column":34},"action":"insert","lines":[" "],"id":3217}],[{"start":{"row":48,"column":34},"end":{"row":48,"column":36},"action":"insert","lines":["()"],"id":3218}],[{"start":{"row":48,"column":35},"end":{"row":48,"column":36},"action":"insert","lines":["r"],"id":3219}],[{"start":{"row":48,"column":36},"end":{"row":48,"column":37},"action":"insert","lines":["a"],"id":3220}],[{"start":{"row":48,"column":37},"end":{"row":48,"column":38},"action":"insert","lines":["n"],"id":3221}],[{"start":{"row":48,"column":38},"end":{"row":48,"column":39},"action":"insert","lines":["d"],"id":3222}],[{"start":{"row":48,"column":39},"end":{"row":48,"column":40},"action":"insert","lines":["I"],"id":3223}],[{"start":{"row":48,"column":40},"end":{"row":48,"column":41},"action":"insert","lines":["n"],"id":3224}],[{"start":{"row":48,"column":41},"end":{"row":48,"column":42},"action":"insert","lines":["t"],"id":3225}],[{"start":{"row":48,"column":42},"end":{"row":48,"column":43},"action":"insert","lines":[" "],"id":3226}],[{"start":{"row":48,"column":43},"end":{"row":48,"column":44},"action":"insert","lines":["<"],"id":3227}],[{"start":{"row":48,"column":44},"end":{"row":48,"column":45},"action":"insert","lines":["="],"id":3228}],[{"start":{"row":48,"column":45},"end":{"row":48,"column":46},"action":"insert","lines":["6"],"id":3229}],[{"start":{"row":48,"column":47},"end":{"row":48,"column":48},"action":"insert","lines":[")"],"id":3230}],[{"start":{"row":87,"column":4},"end":{"row":87,"column":31},"action":"remove","lines":["randInt = genRandInt(1, 6);"],"id":3231}],[{"start":{"row":77,"column":19},"end":{"row":78,"column":0},"action":"insert","lines":["",""],"id":3232},{"start":{"row":78,"column":0},"end":{"row":78,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":78,"column":4},"end":{"row":79,"column":0},"action":"insert","lines":["",""],"id":3233},{"start":{"row":79,"column":0},"end":{"row":79,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":79,"column":4},"end":{"row":79,"column":31},"action":"insert","lines":["randInt = genRandInt(1, 6);"],"id":3234}],[{"start":{"row":90,"column":0},"end":{"row":90,"column":4},"action":"remove","lines":["    "],"id":3235}],[{"start":{"row":89,"column":4},"end":{"row":90,"column":0},"action":"remove","lines":["",""],"id":3236}],[{"start":{"row":89,"column":0},"end":{"row":89,"column":4},"action":"remove","lines":["    "],"id":3237}],[{"start":{"row":88,"column":4},"end":{"row":89,"column":0},"action":"remove","lines":["",""],"id":3238}],[{"start":{"row":88,"column":0},"end":{"row":88,"column":4},"action":"remove","lines":["    "],"id":3239}],[{"start":{"row":87,"column":3},"end":{"row":88,"column":0},"action":"remove","lines":["",""],"id":3240}],[{"start":{"row":96,"column":8},"end":{"row":96,"column":9},"action":"insert","lines":["e"],"id":3241}],[{"start":{"row":96,"column":9},"end":{"row":96,"column":10},"action":"insert","lines":["l"],"id":3242}],[{"start":{"row":96,"column":10},"end":{"row":96,"column":11},"action":"insert","lines":["s"],"id":3243}],[{"start":{"row":96,"column":11},"end":{"row":96,"column":12},"action":"insert","lines":["e"],"id":3244}],[{"start":{"row":96,"column":12},"end":{"row":96,"column":13},"action":"insert","lines":[" "],"id":3245}],[{"start":{"row":99,"column":8},"end":{"row":99,"column":9},"action":"insert","lines":["e"],"id":3246}],[{"start":{"row":99,"column":9},"end":{"row":99,"column":10},"action":"insert","lines":["l"],"id":3247}],[{"start":{"row":99,"column":10},"end":{"row":99,"column":11},"action":"insert","lines":["s"],"id":3248}],[{"start":{"row":99,"column":11},"end":{"row":99,"column":12},"action":"insert","lines":["e"],"id":3249}],[{"start":{"row":99,"column":12},"end":{"row":99,"column":13},"action":"insert","lines":[" "],"id":3250}],[{"start":{"row":102,"column":8},"end":{"row":102,"column":10},"action":"remove","lines":["if"],"id":3251},{"start":{"row":102,"column":8},"end":{"row":102,"column":9},"action":"insert","lines":["e"]}],[{"start":{"row":102,"column":9},"end":{"row":102,"column":10},"action":"insert","lines":["l"],"id":3252}],[{"start":{"row":102,"column":10},"end":{"row":102,"column":11},"action":"insert","lines":["s"],"id":3253}],[{"start":{"row":102,"column":11},"end":{"row":102,"column":12},"action":"insert","lines":["e"],"id":3254}],[{"start":{"row":102,"column":12},"end":{"row":102,"column":13},"action":"insert","lines":[" "],"id":3255}],[{"start":{"row":102,"column":13},"end":{"row":102,"column":14},"action":"insert","lines":["i"],"id":3256}],[{"start":{"row":102,"column":14},"end":{"row":102,"column":15},"action":"insert","lines":["f"],"id":3257}],[{"start":{"row":105,"column":8},"end":{"row":105,"column":9},"action":"insert","lines":["e"],"id":3258}],[{"start":{"row":105,"column":9},"end":{"row":105,"column":10},"action":"insert","lines":["l"],"id":3259}],[{"start":{"row":105,"column":10},"end":{"row":105,"column":11},"action":"insert","lines":["s"],"id":3260}],[{"start":{"row":105,"column":11},"end":{"row":105,"column":12},"action":"insert","lines":["e"],"id":3261}],[{"start":{"row":105,"column":12},"end":{"row":105,"column":13},"action":"insert","lines":[" "],"id":3262}],[{"start":{"row":108,"column":8},"end":{"row":108,"column":9},"action":"insert","lines":["e"],"id":3263}],[{"start":{"row":108,"column":9},"end":{"row":108,"column":10},"action":"insert","lines":["s"],"id":3264}],[{"start":{"row":108,"column":10},"end":{"row":108,"column":11},"action":"insert","lines":["l"],"id":3265}],[{"start":{"row":108,"column":11},"end":{"row":108,"column":12},"action":"insert","lines":["e"],"id":3266}],[{"start":{"row":108,"column":12},"end":{"row":108,"column":13},"action":"insert","lines":[" "],"id":3267}],[{"start":{"row":108,"column":12},"end":{"row":108,"column":13},"action":"remove","lines":[" "],"id":3268}],[{"start":{"row":108,"column":11},"end":{"row":108,"column":12},"action":"remove","lines":["e"],"id":3269}],[{"start":{"row":108,"column":10},"end":{"row":108,"column":11},"action":"remove","lines":["l"],"id":3270}],[{"start":{"row":108,"column":9},"end":{"row":108,"column":10},"action":"remove","lines":["s"],"id":3271}],[{"start":{"row":108,"column":9},"end":{"row":108,"column":10},"action":"insert","lines":["l"],"id":3272}],[{"start":{"row":108,"column":10},"end":{"row":108,"column":11},"action":"insert","lines":["s"],"id":3273}],[{"start":{"row":108,"column":11},"end":{"row":108,"column":12},"action":"insert","lines":["e"],"id":3274}],[{"start":{"row":108,"column":12},"end":{"row":108,"column":13},"action":"insert","lines":[" "],"id":3275}],[{"start":{"row":111,"column":8},"end":{"row":111,"column":9},"action":"insert","lines":["e"],"id":3276}],[{"start":{"row":111,"column":9},"end":{"row":111,"column":10},"action":"insert","lines":["l"],"id":3277}],[{"start":{"row":111,"column":10},"end":{"row":111,"column":11},"action":"insert","lines":["s"],"id":3278}],[{"start":{"row":111,"column":11},"end":{"row":111,"column":12},"action":"insert","lines":["e"],"id":3279}],[{"start":{"row":111,"column":12},"end":{"row":111,"column":13},"action":"insert","lines":[" "],"id":3280}],[{"start":{"row":36,"column":4},"end":{"row":36,"column":31},"action":"remove","lines":["randInt = genRandInt(1, 6);"],"id":3281}],[{"start":{"row":36,"column":0},"end":{"row":36,"column":4},"action":"remove","lines":["    "],"id":3282}],[{"start":{"row":35,"column":2},"end":{"row":36,"column":0},"action":"remove","lines":["",""],"id":3283}]]},"ace":{"folds":[],"scrolltop":853.5,"scrollleft":0,"selection":{"start":{"row":19,"column":0},"end":{"row":25,"column":19},"isBackwards":true},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":59,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1431726027000}