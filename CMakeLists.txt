

cmake_minimum_required(VERSION "3.23.0")
project("XO")


add_executable("${PROJECT_NAME}" "main.cpp"  "Board.cpp" "Symbol.cpp" "Game.cpp" "Move.cpp" "ComputerMove.cpp" "EasyComputerMove.cpp" "PlayerMove.cpp" "GameState.cpp" "Score.cpp" "EasyComputerMove.h" "EasyComputerMove.cpp")

