# Rock Paper Scissors

<div align="center">
    <img alt="GitHub Created At" src="https://img.shields.io/github/created-at/KieranPritchard/Rock-Paper-Scissors-in-CPP">
    <img alt="GitHub License" src="https://img.shields.io/github/license/KieranPritchard/Rock-Paper-Scissors-in-CPP">
    <img alt="GitHub commit activity" src="https://img.shields.io/github/commit-activity/t/KieranPritchard/Rock-Paper-Scissors-in-CPP">
    <img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/KieranPritchard/Rock-Paper-Scissors-in-CPP">
    <img alt="GitHub language count" src="https://img.shields.io/github/languages/count/KieranPritchard/Rock-Paper-Scissors-in-CPP">
    <img alt="GitHub Repo stars" src="https://img.shields.io/github/stars/KieranPritchard/Rock-Paper-Scissors-in-CPP">
</div>

## Project Description

This project is a rock, paper, scissors game in C++. Playing this game allows the user to go up againist a computer player, while playing the game both players score is tracked by the code.

the main reason for this project, was to practise coding in c++. because this project allows for practise with a variety of different features and functionality. but because i did this project previously in python. i felt doing this again would allow for me to easily build knowledge up due to the similarity of both langauges.

My main challenge from this challenge was relearning to code in c++, because of my exams being three and half months away i had to put my coding hobby to the side. i overcame this by refering to the notes i had made during my orignal learning of the language, i also practised testing out different functionality of the language to overca

## How to Use the Project

1. **Clone The Repository**

    * This saves the repository to a local directory, this can be done using git.

2. **Make The Bash Script Executable**

    * Open the terminal, then navigate to directory where the executable script is located and input this in the terminal: `chmod +x build.sh`

3. **Using The Bash Script**

    * Copy the `build.sh` executable script from the tools directory, into the "src" sub-directoy of the local directory where `Rock_Paper_Scissors.cpp` is stored.
    * Open the terminal, then navigate to the directory with the script and code file and input this with the code file as the arguement: `./build.sh Rock_Paper_Scissors.cpp`
    * The script when run will do this:
        *  Check if the filename was provided.
        *  Confirm the file exists.
        *  Ensure g++ is installed.
        *  Compile the code and name the output executable with the same name as the file but with an .exe extension.
        *  Display any errors if the compilation fails or notify you if it was successful.

4. **Run The Compiled Program**

    * If the compilation was successful, you can run the program by running this in the terminal: `./Rock_Paper_Scissors.exe`

5. **How To Play The Game**
    
    * When you are prompted, enter your name:
        *  `r` for Rock.
        *  `p` for Paper.
        *  `s` for Scissors.
    * The game will display and update the score after each round.

6. **Quitting The Game**

    * Press `Ctrl + C` to stop the program manually.
    
## Licenses

License can be found in root of the repository.
