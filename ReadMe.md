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
### Objective
To practise coding in C++, because programming this game allows for practise with a variety different features and functionality. to build up knowledge quickly with C++ because of Pythons similarities.
### Features
* Fully coded in C++.
* Simple to use user interface. 
* Simple rock, paper, scissors game.
### Tools and Langauges 
* **Languages:** C++.
* **Frameworks/Librarys:** standard libraries.
* **Tools:** Git, VS Code.
### Challenges Faced
Relearning theory behind C++, this was due to my hiatus from coding due to sixth-forms tight revision and home learning schedule. Luckily however, I had notes from a course I did before this hiatus to review when I got stuck.
### Outcome
Successfully created a program with c++, also added a shell script to it for compilation. i also applied theorectal knowledge of the functionality available with C++.
## How to Use the Project
1. **Clone The Repository**
	* This saves the repository to a local directory, this can be done using git.
2. **Make The Bash Script Executable**
	* Open the terminal, then navigate to directory where the executable script is located and input this in the terminal: `chmod +x build.sh`
3. **Using The Bash Script**
	* Copy the `build.sh` executable script from the tools directory, into the "src" directory of the local directory where `Rock_Paper_Scissors.cpp` is stored.
	* Open the terminal, then navigate to the directory with the script and code file and input this with the code file as the argument: `./build.sh Rock_Paper_Scissors.cpp`
	* The script when run will do this:
		* Check if the filename was provided.
		* Confirm the file exists.
		* Ensure g++ is installed.
		* Compile the code and name the output executable with the same name as the file but with an .exe extension.
		* Display any errors if the compilation fails or notify you if it was successful.
4. **Run The Compiled Program**
	* If the compilation was successful, you can run the program by running this in the terminal: `./Rock_Paper_Scissors.exe`
5. **How To Play The Game**
	* When you are prompted, enter your name:
		* `r` for Rock.
		* `p` for Paper.
		* `s` for Scissors.
	* The game will display and update the score after each round.
6. **Quitting The Game**
	* Press `Ctrl + C` to stop the program manually.
## Licenses
License can be found in root of the repository.